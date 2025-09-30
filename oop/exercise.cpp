#include <iostream>
using namespace std;

class Rectangle {
    double width;
    double length;

    public:
     Rectangle() {};
     Rectangle(double w , double l): width(w) , length(l) {};

     void printPerimeter() {
       double perimeter = 2*(width + length); 
       cout<<"I am a rectangle with perimeter of: "<<perimeter;
       cout<<"\n";
     }

     void printArea() {
        double area = width * length;
        cout<<"I am a rectangle with area of: "<<area;
        cout<<"\n";
     }

     void printMe() {
        cout<< "I am a rectange  with width of: "<<width<<" "<<"and length of: " <<length ;
        cout<<"\n";
     }

};

int main() {
    Rectangle r1(7.5,2.5);
    cout<<"\n";
    r1.printMe();
    r1.printPerimeter();
    r1.printArea();
    cout<<"\n";
}


