#ifndef ARRAY_H
#define ARRAY_H


#include <iostream>
using namespace std;

template <typename T>
class Array
{
    T *arr;
    int capacity;
    int length;

    void resize()
    {
        int newCap = capacity * 2;
        T *newArr = new T[newCap];

        for (int i = 0; i < length; i++)
        {
            newArr[i] = arr[i];
        }

        delete[] arr;

        arr = newArr;
        capacity = newCap;
    }

public:
    Array(int cap = 4)
    {
        capacity = 4;
        arr = new T[capacity];
        length = 0;
    }

    ~Array()
    {
        delete[] arr;
    }

    void pushBack(const T &value)
    {
        if (length == capacity)
        {
            resize();
        }
        arr[length++] = value;
    }

    void insertAt(int index, const T &value)
    {
        if (index < 0 || index > length)
        {
            cout << "Index out of bounds \n";
            return;
        }

        if (length == capacity)
        {
            resize();
        }

        for (int i = length - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[index] = value;
        length++;
    }

    void deleteAt(int index)
    {
        if (index < 0 || index >= length)
        {
            cout << "Index is out of bounds \n";
            return;
        }

        for (int i = index; i < length - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        length--;
    }

    int search(const T &value)
    {
        for (int i = 0; i < length; i++)
        {
            if (arr[i] == value)
            {
                return i;
            }
        }

        return -1;
    }

    T get(int index)
    {
        if (index < 0 || index >= length)
        {
            cout << "Index is out of bounds \n";
            return T();
        }
        return arr[index];
    }

    void print()
    {
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};


#endif