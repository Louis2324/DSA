/*
 Raw pointers in C++ are the regular pointers 
 with which we manually manage their memory cyle and their lifetimes
*/

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(10);
    cout<<*ptr;
    delete ptr;
}