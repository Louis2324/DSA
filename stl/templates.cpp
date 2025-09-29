#include <iostream>
using namespace std;

int addInt(int a , int b) {return a+b;}
float addFloat(float a, float b) {return a+b;}
template <typename T>
T add ( T a , T b) {
    return a + b ;
}

int main() {
    cout<<addInt(3,5) <<endl;
    cout<<addFloat(3.3,5.7) <<endl;
    
    cout<<add(3,5)<<endl;
    cout<<add(3.3,5.7)<<endl;

    return 0;
}