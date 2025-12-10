#include <iostream>
using namespace std;

/*
 Implement bubble sort to the most optimized version you can.
*/

// helper swap function;
template <typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// helper array print function
template <typename T>
void printArray(T array[], int size)
{
    for (int z = 0; z < size; z++)
    {
        cout << array[z] << " ";
    }
    cout << "\n";
}

void bubbleSort(int array[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < size - i - 1; j++)
        {

            if (array[j] > array[j + 1])
            {
                mySwap(array[j], array[j + 1]);
                swapped = true;
            }
        }

        if(!swapped) return;
    }
}

int main()
{
    int arr[] = {12, -5, 7, 0, 42, 3, 4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting: \n";
    printArray(arr, n);

    bubbleSort(arr, n);
    cout << "After sorting:  \n";
    printArray(arr, n);

    return 0;
}
