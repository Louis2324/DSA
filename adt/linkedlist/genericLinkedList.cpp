#include <iostream>
using namespace std;

// Node class template
template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class template
template <typename T>
class LinkedList {
private:
    Node<T>* head;
    int size;

public:
    LinkedList() {
        head = nullptr;
        size = 0;
    }

    ~LinkedList() {
        Node<T>* current = head;
        while (current != nullptr) {
            Node<T>* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
        cout << "Memory freed\n";
    }

    void insertAtEnd(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (head == nullptr) {
            head = newNode;
            size++;
            return;
        }

        Node<T>* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        size++;
    }

    void insertAtBeginning(T value) {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void deleteNode(T value) {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        if (head->data == value) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
            size--;
            return;
        }

        Node<T>* prev = nullptr;
        Node<T>* curr = head;

        while (curr != nullptr && curr->data != value) {
            prev = curr;
            curr = curr->next;
        }

        if (curr == nullptr) {
            cout << "Value not found in the list\n";
            return;
        }

        prev->next = curr->next;
        delete curr;
        size--;
    }

    void display() const {
        Node<T>* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }

    int getSize() const {
        return size;
    }
};

// Example usage
int main() {
    LinkedList<int> nums;
    nums.insertAtEnd(10);
    nums.insertAtEnd(20);
    nums.insertAtEnd(30);
    nums.insertAtBeginning(5);

    cout << "After adding elements:\n";
    nums.display();
    cout << "Size: " << nums.getSize() << "\n";

    nums.deleteNode(10);
    cout << "After deleting 10:\n";
    nums.display();
    cout << "Size: " << nums.getSize() << "\n";

    cout << "\nTesting with another type:\n";
    LinkedList<string> names;
    names.insertAtEnd("Lou");
    names.insertAtEnd("Kai");
    names.insertAtEnd("Mira");
    names.display();

    return 0;
}
