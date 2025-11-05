#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
   if(n < 2 ) return false;
   for(int i = 2 ; i <= sqrt(n) ; i++) {
     if(n % i  == 0) return false; 
   }
   return true;
}


int nthPrime(int n) {
    int count = 0 , i = 0  , prime; 
    while (count < n ) {
     if(isPrime(i)) {
        prime = i;
        count++;
     }
     i++;
    }
   return prime;
}


int main() {
    int n; 
    cout<<"Enter a number n: ";
    cin>>n;

    int nthprime = nthPrime(n);
    cout<<"The "<<n<<"th prime number is: "<<nthprime<<"\n";
}