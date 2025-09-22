#include <iostream>
using namespace std;
int main() {
    // int a = 20 , b= 30;
    // int *c= &b;
    // a = *c;
    // *c = *c+1;
    // cout <<a <<" "<<b<<endl;

    float score = 15.5;
    float p = 7.5;
   
    float *ptr = &score;
    (*ptr) ++;
    *ptr = p;
    cout << *ptr << " "<<score<<" "<<p;
    return 0;
}