#include <iostream>
using namespace std;

// int addInt(int a , int b) {return a+b;}
// float addFloat(float a, float b) {return a+b;}
template <typename T>
class Calculator {
    public: 
      T add ( T a , T b) {
        return a + b ;
     }

     T subtract(T a , T b) {
        return a - b;
     }

     T multiply (T a , T b) {
        if(b == 0){
          cout<<"Error Division By Zero" <<endl;
          return 0;
        }
        return a * b;
     }
};


int main() {
    // cout<<addInt(3,5) <<endl;
    // cout<<addFloat(3.3,5.7) <<endl;
    Calculator<int> intCalc;
    Calculator<double> calcDoub;
    cout<<intCalc.add(3,5)<<endl;
    cout<<calcDoub.add(3.3,5.7)<<endl;

    return 0;
}
