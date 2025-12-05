/*
1. Sum of digits of a number
Given n = 4921, return 4+9+2+1 = 16.
*/
#include <iostream>
using namespace std;

int digitSum(int number)
{
    if(number < 0) {
        number *= -1;
    }

    if (number == 0)
    {
        return 0;
    }

    int digit = number % 10;
    number /= 10;
    return digit + digitSum(number);
}

int main()
{
    int n = -4921;
    cout << "Sum of digits in the number : " << n << " is: " << digitSum(n);

}