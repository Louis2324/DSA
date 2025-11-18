#include <iostream>
using namespace std;

class Node {
    public: 
      int data;
      Node* next;

      Node(int value) {
        data = value;
        next = nullptr;
      }
};

class LinkedList {
    private: 
      Node* head;
      int size = 0;
    
    public: 
     LinkedList() {
        head = nullptr;   
     }

     ~LinkedList() {
        Node* current = head;
        while(current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
        cout<<"Memory freed \n";
     }

     void insertAtEnd(int value){
        Node *newNode = new Node(value);
        if (head == nullptr ) {
            head = newNode;
            size++;
            return;
        }

        Node* temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        size++;
     }

     void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        size++;
     }

     void insertAtPosition(int value , int pos) {
        if(pos<0 || pos>size) {
            cout<<"Invalid Position \n";
            return;
        }
        if(pos == 0) {
            insertAtBeginning(value);
            return;
        }
        if(pos == size) {
            insertAtEnd(value);
            return;
        }
        
        Node* newNode = new Node(value);
        Node* temp = head;

        for(int i = 1 ; i < pos ; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        size++;

     }

     void deleteNode(int value) {
        if(head == nullptr ) {
            cout<<"List is empty \n";
            return;
        }

        if(head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
            return;
        }

        Node *prev = nullptr;
        Node *curr = head;

        while(curr != nullptr && curr->data != value) {
            prev = curr;
            curr = curr->next;
        }

        if(curr == nullptr) {
            cout<<"Value not found in the list \n";
            return;
        }

        prev->next = curr->next;
        delete curr;
        size--;
     }

     void display() {
        Node * temp = head;
        while(temp != nullptr ) {
            cout<<temp->data <<" ";
            temp = temp->next;
        }
        cout<<"\n";
     }

     int getSize() {
        return size;
     }

};


int main() {
    LinkedList nums;
    nums.insertAtEnd(10);
    nums.insertAtEnd(20);
    nums.insertAtEnd(30);
    nums.insertAtEnd(40);
    nums.insertAtBeginning(5);

    cout<<"After adding elements: \n";
    cout<<"Size after addition: "<<nums.getSize()<<"\n";
    nums.display();

    cout<<"After deleting 10 \n";
    nums.deleteNode(10);
    nums.display();
    cout<<nums.getSize()<<" size after deletion \n";

    nums.insertAtPosition(90 , 2);

    cout<<"End of program \n";
    return 0;
}

