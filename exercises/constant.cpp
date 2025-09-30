#include <iostream>
#include <cmath>
#define PI 3.14
int main() {
    using namespace std;
    double radius;
    cout<<"Enter the circle's radius: ";
    cin>>radius;

    double area = pow(radius,2) * PI;
    cout<<"The are of your circle is:  "<<area<<endl;

    const int districts = 30;
    cout<<"The number of districts in Rwanda is: "<<districts;
    return 0;
}