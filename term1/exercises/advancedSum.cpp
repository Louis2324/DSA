#include <iostream>
using namespace std;

/* int addition(int a , int b) {
    return a+b;
}

double addition (double a , double b) {
    return a+b;
}
 */

 template <typename T>
 T addition(T a , T b) {
    return a+b;
 }
int main() {
    int a,b;
    double c=12.5 , d = 13.85;
    cout<<"Enter two numbers a and b : ";
    cin>>a>>b;
    cout<<"The sum is: "<< addition<int>(a,b) <<endl;
    cout<<"The double sum is: "<<addition<double>(c,d) <<endl;
}