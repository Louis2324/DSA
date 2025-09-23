#include <iostream>
using namespace std;
int main () {
    // int x = 10 ,y = 20 ,z = 5 ,t = 2,s = 7;
    // int h = x * y / z % s * t-s * x / t + y / x * t;
    // cout <<h ;

    int x = 15 , y = 23 ;

    cout<<"x,y:"<<x<< " and "<<y<<endl;
    cout<<"x,y"<<++x<<"and"<<y++<<endl;
    cout<<"x="<<--x<<" and y= "<<y--<<endl;
    ++x;
    y--;
    cout<<"x="<<x<<"and y="<<y<<endl;
    --x;
    y--;
    cout<<"x="<<x<<" and y="<<y<<endl;

    return 0;
}