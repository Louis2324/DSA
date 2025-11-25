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

Node* merge(Node* left, Node* right) {
     if (!left) return right;
     if (!right) return left;


    Node* result = nullptr;

    if(left->data <= right->data) {
        result=left;
        result->next = merge(left->next, right);
    }else {
        result = right;
        result->next = merge(left , right->next);
    }

    return result;
}

Node* mergeSort(Node* head) {
    if(!head || !head->next) return head;
    Node* slow = head;
    Node* fast = head->next;

    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* mid = slow->next;
    slow->next = nullptr;

    Node* left = mergeSort(head);
    Node* right = mergeSort(mid);

    return merge(left , right);
}

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

     void deleteHead() {
        if (head == nullptr || size == 0) {
            cout<<"Empty linked list";
            return;
        }

        Node* temp = head ; 
        head = head->next;
        delete temp;
        size--;
     }

     void deleteAtEnd() {
        if(head == nullptr) {
            cout<< "List is empty \n";
            return;
        }

        if(head->next  == nullptr) {
            delete head;
            head = nullptr;
            size--;
            return;
        }

        Node* temp = head;
       
        while(temp->next->next != nullptr) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = nullptr;
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

     void sort () {
        head = mergeSort(head);
     }

     int getSize() {
        return size;
     }

};


int main() {
    LinkedList nums;

    cout << "=== Adding elements ===\n";
    nums.insertAtEnd(10);
    nums.insertAtEnd(20);
    nums.insertAtEnd(30);
    nums.insertAtEnd(40);
    nums.insertAtBeginning(5);
    cout << "Size after addition: " << nums.getSize() << "\n";
    cout << "List: ";
    nums.display();
    cout << "\n";

    cout << "=== Deleting value 10 ===\n";
    nums.deleteNode(10);
    cout << "List after deletion: ";
    nums.display();
    cout << "Size after deletion: " << nums.getSize() << "\n\n";

    cout << "=== Inserting 90 at position 2 ===\n";
    nums.insertAtPosition(90, 2);
    cout << "List after insertion: ";
    nums.display();
    cout << "Size after inserting at position: " << nums.getSize() << "\n\n";

    cout << "=== Deleting head ===\n";
    nums.deleteHead();
    cout << "List after deleting head: ";
    nums.display();
    cout << "Size after deleting head: " << nums.getSize() << "\n\n";

    cout << "=== Deleting end ===\n";
    nums.deleteAtEnd();
    cout << "List after deleting end: ";
    nums.display();
    cout << "Size after deleting end: " << nums.getSize() << "\n\n";

    cout << "=== Sorting the list ===\n";
    nums.sort();
    cout << "List after sorting: ";
    nums.display();
    cout << "\n";

    cout << "=== End of program ===\n";
    return 0;
}