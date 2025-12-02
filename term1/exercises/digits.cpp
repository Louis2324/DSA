#include <iostream>
using namespace std;

int count(int n ) {
    if(n == 0) return 0;
    int small = count(n/10);
    return small+1;
}

int countZeroes(int n) {
    if(n==0) return 0;
    int small = countZeroes(n/10);
    int last_digit = n % 10;

    if(last_digit == 0) {
        return 1+small;
    }else{
        return small;
    }
}

int main() {
    cout<< count(99) << "\n";
    cout<< countZeroes(10001);
    return 0;
}