#include <iostream>
#include <vector>
using namespace std;

int isNormal(int& n ) {
    vector<int> factors;

    for(int i = 1 ; i <= n ; i++ ) {
        if( n % i == 0 ) {
            factors.push_back(i);
        }
    }

    for(int j = 0 ; j < factors.size() ; j++) {
        if(factors[j] == 1 || factors[j] == n) continue;
        if(factors[j] % 2 != 0) return 0;
    }

    return 1;
}


int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The number you entered is "<< (isNormal(n)?"normal": "not normal");
}