#include <iostream>
#include<vector>

using namespace std;

int minDistance(int n) {
    if(n%2 == 0 ) return 1;
    vector<int> factors;

    for(int i = 1 ; i <= n ; i++ ) {
        if( n % i == 0 ) {
            factors.push_back(i);
        }
    }
    
    int smallest = factors[1]  - factors[0];
    for(int j = 1 ; j < factors.size() - 1 ; j++ ) {
        if( (factors[j + 1] - factors[j]) < smallest ) {
            smallest = factors[j + 1] - factors[j];
        }
    }

    return smallest;
}


int main() {
   int n ;
   cout<<"Enter a number: ";
   cin>>n;

   cout<<"Min distance between factors is: "<<minDistance(n);
}