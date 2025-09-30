#include <iostream>
using namespace std;
int main() {

    // int k = 20;
    // int *ptr = &k;
    // int *q = ptr;
    // (*q)++;
    //cout<<k<<endl;
    //output: 21

    // int k = 60;
    // int *ptr = &k;
    // cout << (*ptr)++ <<" ";
    // cout<<k<<endl;
    //output: 60 61;

    // int *ptr = 0 ;
    // int r = 30;
    // *ptr = r;
    // cout<<*ptr <<endl;
    //error
    
    int a = 15 , b = 20;
    int *c = &b;
    *c = 15;
    cout << a << " " << b <<endl; 
    return 0;
}