#include <iostream>
#include "rectangle.h"
using namespace std;
int main() {
    Rectangle rect;
    rect.set_values(4,5);
    cout<<"The area of the rectangle is: "<<rect.area();
}