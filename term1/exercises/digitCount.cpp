#include <iostream>
using namespace std;
int main () {
 int num , digit ,count = 0 ;
 cout<<"Enter a number: ";
 cin>>num;
 cout<<"Enter a digit to be searched for (1-9): ";
 cin>>digit;
  
 while(num != 0) {
    int lastDigit = num %10;
    if (lastDigit == digit) count++;
    num /= 10;
 }
 cout<<"The digit "<<digit<<" appears "<<count<<" times in the number"<<endl;

 return 0;
}