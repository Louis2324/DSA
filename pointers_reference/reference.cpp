/*
  A reference can be considered as a constant pointer which always points to the same object
*/
#include <iostream>
using namespace std;

void swap(int& a , int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int var = 20 , var2 = 10;
    int& ref = var; //declaring reference to the variable var

    cout<<var<<endl;
    cout<<ref<<endl;

    ref+=10;  //increments both var and ref values by 10;
    cout<<var<<endl;
    cout<<ref<<endl;

    swap(var,var2); //swaps the original variables without making copies from passing by value;
    cout<<var<<endl;
    cout<<var2<<endl;
}