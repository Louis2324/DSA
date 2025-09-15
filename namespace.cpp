#include <iostream>
using namespace std;
namespace rca {
 int num = 80;
 int value () {return num;}
}

namespace groupc {
 int num = 30;
 void value () { cout<<"The number of students is"<<num<<endl;}
 }

int num = 240;
int main (){
  int num = 10;
 cout<<"RCA:"<<rca::num<<endl;
 cout<<"Groupc:"<<groupc::num<<endl;
 cout<<"Global"<<::num<<endl;
 cout<<"Local num"<<num<<endl;
 return 0;
}