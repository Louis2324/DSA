#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node<T>* prev;
    Node<T>* next;

    Node(T value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }

};

// DDL short for double linked list
template <typename T>
class DLL {
    Node<T>* head;
    Node<T>* tail;
    int size;

    public:
     DLL() {
        head=nullptr;
        tail=nullptr;
        size=0;
     }

     ~DLL() {
        Node<T>* current = head;
        while(current!=nullptr) {
            Node<T>* nextNode = current->next;
            delete current;
            current = nextNode;
        }

        head = tail = nullptr;
        cout<<"Memory Freed \n";
     }

     void insertAtBeginning (T value) {
        Node<T>* newNode = new Node<T>(value);

        if(head == nullptr) {
            head = tail = newNode;
        }else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
     }

     void insertAtEnd(T value) {
        Node<T>* newNode = new Node<T>(value);

      if (tail == nullptr) {  
        head = tail = newNode;
      } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
     }
      size++;
     }

     void insertAtIndex(int index , T value) {
        if(index < 0 || index > size ) {
            cout<<"Index is out of range \n";
            return;
        }

        if(index == 0 ) {
            insertAtBeginning(value);
            return;
        }

        if(index == size) {
            insertAtEnd(value);
            return;
        }

        Node<T>* newNode = new Node<T>(value);
        Node<T>* temp = head;

        for(int i = 0 ; i < index - 1 ; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        newNode->prev = temp;

        temp->next->prev = newNode;
        temp->next = newNode;

        size++;
     }

     void displayForward() const{
        Node<T>* temp = head;

        while(temp != nullptr) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n";
     }

     void displayBackward() const {
        Node<T>* temp = tail;
        while(temp != nullptr) {
            cout<<temp->data<<" ";
            temp = temp->prev;
        }
        cout<<"\n";
     }

     void deleteFront() {
        if(head == nullptr) {
            cout<<"List is empty \n";
            return;
        }

        Node<T>* temp = head;
        if(head == tail) {
            head = tail = nullptr;
        }else {
            head = head->next;
            head->prev = nullptr;
        }

        delete temp;
        size--;
     }

    void deleteEnd() {
        if(tail == nullptr) {
            cout<<"List is empty \n";
            return;
        }

        Node<T>*temp = tail;

        if(head == tail) {
            head = tail = nullptr;
        }else {
            tail = tail->prev;
            tail->next = nullptr;
        }

        delete temp;
        size--;
    }

    void deleteAtIndex(int index) {
        if(index < 0 || index >= size) {
            cout<<"Invalid index \n";
            return;
        }

        if(index == 0 ) {
            deleteFront();
            return;
        }

        if(index == size) {
            deleteEnd();
            return;
        }

        Node<T>* temp = head;

        for(int i  = 0 ; i < index  ; i++) {
            temp = temp->next;
        }

        Node<T>* left = temp->prev;
        Node<T>* right = temp->next;

        left->next = right;
        right->prev = left;

        delete temp;
        size--;
    }

    void reverse() {
        Node<T>* temp = head; 

        while(temp != nullptr) {
            Node<T>* swap = temp->next;
            temp->next =  temp->prev;
            temp->prev = swap;
            temp = swap;
        }

        temp = head; 
        head = tail; 
        tail = temp;
    }
};



int main() {
  DLL<int> nums;  

  cout<<"Displaying when empty: \n \n";
  cout<<"Forward: ";
  nums.displayForward();
  cout<<"Backward: ";
  nums.displayBackward();



  cout<<"Insertion: \n \n";
  nums.insertAtBeginning(10);
  nums.insertAtEnd(30);
  nums.insertAtIndex(1,20);
  nums.displayForward();
  nums.displayBackward();
 

  cout<<"Deletion: \n \n";
  nums.deleteAtIndex(1);
  nums.displayForward();
  nums.deleteFront();
  nums.displayForward();
  nums.deleteEnd();
  nums.displayForward();


  cout<<"Reversal: \n \n";

  nums.insertAtBeginning(10);
  nums.insertAtEnd(30);
  nums.insertAtIndex(1,20);

  nums.reverse();
  nums.displayForward(); 
  nums.displayBackward();
}