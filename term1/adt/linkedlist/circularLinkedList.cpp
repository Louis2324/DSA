#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(T value) {
        data = value;
        next = nullptr;
    }
};

template <typename T>
class CLL {
    Node<T>* head;
    Node<T>* tail;
    int size;

public:
    CLL() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    ~CLL() {
        if (!head) return;
        Node<T>* current = head;
        Node<T>* nextNode;
        do {
            nextNode = current->next;
            delete current;
            current = nextNode;
        } while (current != head);
        head = tail = nullptr;
        cout << "Memory Freed\n";
    }

    void insertAtBeginning(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (!head) {
            head = tail = newNode;
            tail->next = head;
        } else {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
        size++;
    }

    void insertAtEnd(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (!head) {
            head = tail = newNode;
            tail->next = head;
        } else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
        size++;
    }

    void display() const {
        if (!head) {
            cout << "List is empty\n";
            return;
        }
        Node<T>* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << "\n";
    }

    void deleteFront() {
        if (!head) return;
        if (head == tail) {
            delete head;
            head = tail = nullptr;
        } else {
            Node<T>* temp = head;
            head = head->next;
            tail->next = head;
            delete temp;
        }
        size--;
    }

    void deleteEnd() {
        if (!head) return;
        if (head == tail) {
            delete head;
            head = tail = nullptr;
        } else {
            Node<T>* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            temp->next = head;
            delete tail;
            tail = temp;
        }
        size--;
    }
};

int main() {
    CLL<int> nums;

    cout << "Inserting at beginning and end:\n";
    nums.insertAtBeginning(10);
    nums.insertAtEnd(20);
    nums.insertAtEnd(30);
    nums.insertAtBeginning(5);
    nums.display();

    cout << "Deleting front:\n";
    nums.deleteFront();
    nums.display();

    cout << "Deleting end:\n";
    nums.deleteEnd();
    nums.display();
}
