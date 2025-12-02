#include <iostream>
#include <cmath>
using namespace std;

int pow(int x , int n) {
    if(n==0) return 1;
    int smallOutput = pow(x,n-1);
    return x*smallOutput;
}

int main() {
    cout << pow(5,3);
    return 0;
}