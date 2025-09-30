#include <iostream>
using namespace std;
namespace userDefined {
 int insideNamespace = 10;
 int cout() { return insideNamespace; }
 }
int myGlobal = 20;
int cout() { return myGlobal*myGlobal; };

int main() {
 int cout = 30;
 std::cout<<"The local variable cout in main is: "<<cout<<std::endl;
 std::cout<<"The variable in user defined namespace is: "<<userDefined::insideNamespace<<std::endl;
 std::cout<<"The output of cout in user defined is: "<<userDefined::cout()<<std::endl;
 std::cout<<"The value of my global is: "<<::myGlobal<<std::endl;
 std::cout<<"The output of global cout is: "<<::cout()<<std::endl;
 return 0;
}