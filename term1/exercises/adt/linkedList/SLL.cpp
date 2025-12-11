#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;
    int size;

public:
    LinkedList()
    {
        head = nullptr;
        size = 0;
    }

    ~LinkedList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
    }

    // insertion operations

    void insertBack(int val)
    {
        if (head == nullptr)
        {
            head = new Node(val);
            size++;
            return;
        }
        else
        {
            Node *temp = new Node(val);

            Node *iter = head;
            while (iter->next != nullptr)
            {
                iter = iter->next;
            }

            iter->next = temp;
        }

        size++;
    }

    void insertFront(int val)
    {

        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void insertAtPosition(int val, int pos)
    {

        if (pos < 0 || pos > size)
            return;

        if (pos == 0)
        { // 0 based index;
            insertFront(val);
            size++;
            return;
        }

        if (pos == size)
        {
            insertBack(val);
            size++;
            return;
        }

        Node *temp = new Node(val);
        Node *iter = head;

        for (int i = 0; i < pos - 1; i++)
        {
            iter = iter->next;
        }

        temp->next = iter->next;
        iter->next = temp;
        size++;
    }

    void display()
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void deleteFront()
    {
        if (head == nullptr)
            return;

        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    void deleteBack()
    {

        if (head == nullptr)
            return;

        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            size--;
            return;
        }

        Node *temp = head;
        Node *prev;
        while (temp->next != nullptr)
        {
            prev = temp;
            temp = temp->next;
        }

        prev->next = nullptr;
        delete temp;
        size--;
    }

    void deleteAtPosition(int pos)
    {
        if (pos < 0 || pos >= size || head == nullptr)
            return;

        if (pos == 0)
        {
            deleteFront();
            return;
        }

        Node *iter = head;
        for (int i = 0; i < pos - 1; i++)
            iter = iter->next;

        Node *temp = iter->next;
        iter->next = temp->next;
        delete temp;
        size--;
    }

    
};