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
    bool sorted;

public:
    LinkedList()
    {
        head = nullptr;
        size = 0;
        sorted = false;
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
        sorted = false;
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
        sorted = false;
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

    void bubbleSort()
    {
        if (head == nullptr || head->next == nullptr)
            return;

        bool swapped;
        do
        {
            swapped = false;
            Node *iter = head;
            while (iter->next != nullptr)
            {
                if (iter->data > iter->next->data)
                {
                    swap(iter->data, iter->next->data);
                    swapped = true;
                }
                iter = iter->next;
            }
        } while (swapped);

        sorted = true;
    }

    int linearSearch(int val)
    {
        Node *iter = head;
        int pos = 0;
        while (iter)
        {
            if (iter->data == val)
                return pos;
            iter = iter->next;
            pos++;
        }
        return -1;
    }

    int binarySearch(int val)
    {
        if (!sorted)
            return linearSearch(val);

        Node *start = head;
        Node *end = nullptr;

        while (start != end)
        {
            Node *mid = start;
            Node *fast = start;

            while (fast->next != end && fast->next->next != end)
            {
                mid = mid->next;
                fast = fast->next->next;
            }


            if(mid->data == val) return 0;
            else if(mid->data < val) start = mid->next;
            else end = mid;
        }

        return -1;
    }
};