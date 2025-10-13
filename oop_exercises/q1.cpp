/*
Write a C++ program to implement a class called Circle that has private member variables for radius. 
Include member functions to calculate the circle's area and circumference.
*/

#include <iostream>
using namespace std;
const double PI = 3.14;
class Circle {
    double radius;
    public:
     Circle(){};
     Circle(double rd): radius(rd){};
     void setRadius(double rd) {
        radius = rd;
     }
     double getRadius() {
        return radius;
     }
     double area () {
        return (getRadius() *  getRadius() * ::PI);
     }
     double circumference() {
        return (2*getRadius()*PI);
     }
};

int main() {
    Circle c(5.5);

    cout<<c.getRadius()<<"\n";
    cout<<c.circumference()<<"\n";
    cout<<c.area()<<"\n";

    return 0;
}