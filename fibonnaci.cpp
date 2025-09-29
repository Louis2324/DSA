#include <iostream>
using namespace std;

int fibonnaci(int n) {
    if(n<=1) return n;
    return fibonnaci(n-1) + fibonnaci(n-2);
}
void printFibonnaci(int n) {
    int a = 0 , b = 1;
    for(int i = 0 ; i <= n ; i ++) {
        cout<< a << " ";
        int next = a + b;
        a = b ;
        b = next;
    }
    cout<<endl;
}
int main() {
    int n = 1;
    cout<<fibonnaci(n);
    cout<<endl;
    printFibonnaci(n);
    return 0;
}
