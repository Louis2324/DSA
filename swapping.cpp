#include <iostream>
using namespace std;
void swap ( int a , int b){
    int temp =  a;
    int a = b;
    int b = temp;
}

int main () {
    int a = 10 , b = 20;
    cout<<"Before swapping value of a and b is "<<a<<b;
    swap(a,b);
    cout<<"After swapping value of a and b is"<<a<<b;
}