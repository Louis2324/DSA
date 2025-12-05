/*
 Count lowercase letters in a string
Given "AbcDefghI", count lowercase letters.
Forces: recursion on strings + character checks
*/

#include <iostream>
using namespace std;

int countLowerCase(char array[], int size)
{
    if (size == 0)
    {
        return 0;
    }

    if (*array >= 'a' && *array <= 'z')
    {
        return 1 + countLowerCase(array + 1, size - 1);
    }
    else
    {
        return 0 + countLowerCase(array + 1, size - 1);
    }
}

int main()
{
    char word[] = "AbcDefghI";
    cout << "The number of lowercase letters in the word " << word << " is " << countLowerCase(word, 9);
}