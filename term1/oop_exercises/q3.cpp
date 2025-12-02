/*
 Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
 Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
*/

#include <iostream>
using namespace std;

class Triangle {
    double s , s2 , s3;
    public:
     Triangle(){}
     Triangle(double side , double sid , double si): s(side) , s2(sid) , s3(si){}
     bool isEquilateral() {
        if((s == s2) && (s2 == s3)) return true;
        return false;
     }
     bool isIsosceles() {
        if( (!isEquilateral()) && ((s == s2) || (s2 == s3)))  return true;
        return false;
     }
     bool isScalene() {
        if((!isEquilateral()) && (!isIsosceles())) return true;
        return false;
     }

     void printMe() {
        string out = (isEquilateral())? "I am an equilateral triangle" : (isIsosceles())?"I am an isosceles triangle" : "I am a scalene triangle";
        cout<<out<<"\n";
    }
};

int main() {
    Triangle t1(5,5,5);
    Triangle t2(5,5,4);
    Triangle t3(5,4,3);

    t1.printMe();
    t2.printMe();
    t3.printMe();

}