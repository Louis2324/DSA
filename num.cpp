#include <iostream>
#include <cmath>
using namespace std;

void evenSum(int range) {
    int sum = 0;
    for(int i = 0 ; i < range ; i+=2) {
        sum+=i;
    }
    cout<<"The sum of all even numbers from 0 to "<<range<<" is: "<<sum<<endl;
}

void oddProduct(int start, int end) {
    int prod = 1;
    if(start % 2 == 0 ){
        start +=1;
    }
    for(int i = start; i < end ; i+=2){
       prod*=i;
    }
    cout<<"The product of all odd numbers of the range of "<<start<<" to "<<end<<" is: "<<prod<<endl;
}

bool isPrime (int n) {
    if (n<=1) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3 == 0 ) return false;

    for(int i = 5 ; i*i <= n ; i++) {
        if(n%i == 0) return false;
    }

    return true;
}

void primeProduct(int start, int end) {
    int prod = 1;
    for(int i = start ; i<end ; i++) {
        if(isPrime(i)) {
            prod*=i;
        }else{
            continue;
        }
    }
    cout<<"The product of primes in range of "<<start<<" and "<<end<<" is "<<prod<<endl;
}

int main() {
    evenSum(100);
    oddProduct(1,20);
    primeProduct(1,100);
    return 0;
}
