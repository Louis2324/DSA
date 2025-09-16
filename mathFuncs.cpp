#include <iostream>
#include <cmath>
using namespace std;

void hypothenuse() {
    double a,b;
    cout<<"Enter the size of the first side: ";
    cin>>a;
    cout<<"Enter the size of the second side: ";
    cin>>b;
    double c = sqrt((pow(a,2) + pow(b,2) ));
    cout<<"The hypothenuse of the sides provided is: "<<c<<endl;
}

void printRoots() {
    int a,b,c;
    cout<<"Enter the a for the quadratic: ";
    cin>>a;
    cout<<"Enter the b for the quadratic: ";
    cin>>b;
    cout<<"Enter the c for the quadratic: ";
    cin>>c;
    double root1 , root2  , delta ;
    delta = sqrt(pow(b,2) - (4*a*c));
    root1 = (-b + delta ) / (2*a);
    root2 = (-b - delta ) / (2*a);
    cout << "The roots for the given are x1: "<<root1 << " and x2: "<<root2<<endl;
};

bool hypoCheck(int a , int b) {
  double c = sqrt(( pow(a,2) + pow(b,2) ));
  if ((c<100) && c == int(c) ){
    return true;
  }
  return false;
}

void printPairs() {
  string pairs[100];
  string pair = "";
  int index = 0;
  for(int a = 1 ; a<=100 ; a++) {
    for(int b = a ; b<=100 ; b++) {
       if(hypoCheck(a,b)) {
       pair = "(" + to_string(a) +"," + to_string(b) +")";
       pairs[index] = pair;
       index++;
      }
    }
  }
  int size = sizeof(pairs)/sizeof(pairs[0]);
  cout<<"There are "<<index<<" possible pairs with integer hypothenuses less than 100 \n";
  cout<<"Here they are: \n";
  for(int i= 0 ; i<index ; i++) {
    cout<<pairs[i]<<endl;
  }
}

int main() {
    hypothenuse();
    printRoots();
    printPairs();
    return 0;
}