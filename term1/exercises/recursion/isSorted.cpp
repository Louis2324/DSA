#include <iostream>
using namespace std;

bool isSorted(int array[], int size)
{
    if (size == 1 || size == 0)
        return true;

    if (*(array) > *(array + 1))
    {
        return false;
    }
    else
    {
        return isSorted(array + 1, size - 1);
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    cout << "Is the array sorted ? : " << (isSorted(nums, 5) ? "It is" : "It isn't");
}