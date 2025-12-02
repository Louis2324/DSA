#include <iostream>
using namespace std;

class Point {
    int x , y ;
    public :
        Point(int x=0 , int y=0) : x(x) , y(y) {};

        Point& setX(int x) {
            this-> x = x;
            return *this;
        }

        Point& setY(int y) {
            this-> y = y;
            return *this;
        }

        Point& moveBy(int dx , int dy) {
            x += dx;
            y += dy;
            return *this;
        }

        void print(){
        cout<<"("<<x<<","<<y<<")"<<endl;
        }
};

int main() {
    Point p;
    p.setX(4).setY(4).moveBy(1,-1).print();
    return 0;
}