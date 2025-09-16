#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double a ,b , result;
  char response = 'y';
  int op;
  cout<<"**CALCULATOR***** \n";
  while (response == 'y')
  {
    cout<<"MENU \n 1.Add \n 2.Subtract \n 3.Multiply \n 4.Divide \n 5.Modulus";
    cout <<"Pick an operation: \n";
    cin>>op;
    cout<<"Enter two digits (a b): ";
    cin>>a>>b;

    switch (op){
    case 1: result = a + b; break;
    case 2: result = a - b; break;
    case 3: result = a * b; break;
    case 4: (b!=0)?result = a / b:0; break;
    case 5: result = fmod(a,b) ; break;
    default: cout<<"Invalid operation"; break;
    }

    cout<<"Your result is: "<<result<<endl;

    cout<<"Do you want to continue? (y/n): ";
    cin>>response;
  }
  cout<<"********************";
  
};