#include <iostream>
#include <memory>  // For smart pointers

class MyClass {
public:
    MyClass(int val) : value(val) {
        std::cout << "MyClass(" << value << ") constructed.\n";
    }
    ~MyClass() {
        std::cout << "MyClass(" << value << ") destroyed.\n";
    }
    void display() {
        std::cout << "Value: " << value << '\n';
    }
private:
    int value;
}

;

void unique_ptr_demo() {
    std::cout << "\n=== unique_ptr Demo ===\n";
    std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>(10);
    ptr1->display();
    std::unique_ptr<MyClass> ptr2 = std::move(ptr1);
    if (!ptr1) {
        std::cout << "ptr1 no longer owns the object.\n";
    }

    ptr2->display();
}

void shared_ptr_demo() {
    std::cout << "\n=== shared_ptr Demo ===\n";
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>(20);
    { //purposeful lifetime control of ptr2;
        std::shared_ptr<MyClass> ptr2 = ptr1;
        std::cout << "Shared count: " << ptr1.use_count() << '\n';
        ptr2->display();
    }

    std::cout << "Shared count after ptr2 is gone: " << ptr1.use_count() << '\n';
    ptr1->display();
}

void weak_ptr_demo() {
    std::cout << "\n=== weak_ptr Demo ===\n";

    std::shared_ptr<MyClass> shared = std::make_shared<MyClass>(30);
    std::weak_ptr<MyClass> weak = shared;  // Doesn't increase ref count
    std::cout << "Shared count (after weak_ptr): " << shared.use_count() << '\n';

    if (auto locked = weak.lock()) {
        // locked is a shared_ptr
        std::cout << "Accessing object via weak_ptr lock():\n";
        locked->display();
    } else {
        std::cout << "Object no longer exists.\n";
    }

    shared.reset();  // Manually destroy the shared_ptr

    if (auto locked = weak.lock()) {
        locked->display();
    } else {
        std::cout << "Object was destroyed, weak_ptr is expired.\n";
    }
}

int main() {
    unique_ptr_demo();
    shared_ptr_demo();
    weak_ptr_demo();

    return 0;
}
