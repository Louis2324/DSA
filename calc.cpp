#include <iostream>
using namespace std;
int main(){
  double a ,b , result;
  char op = 0 , response = 'y';
  cout<<"**CALCULATOR***** \n";
  while (response == 'y')
  {
    cout <<"Pick an operation (+,-,*,/): ";
    cin>>op;
    cout<<"Enter two digits (a b): ";
    cin>>a>>b;

    switch (op){
    case '+': result = a + b; break;
    case '-': result = a - b; break;
    case '*': result = a * b; break;
    case '/': (b!=0)?result = a / b:0; break;
    default: cout<<"Invalid operation"; break;
    }

    cout<<"Your result is: "<<result<<endl;

    cout<<"Do you want to continue? (y/n): ";
    cin>>response;
  }
  cout<<"********************";
  
};