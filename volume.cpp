#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

void sphereVol(double radius) {
  double vol =  (4.0 / 3.0 ) * PI * pow(radius,3);
  cout<<"The volume of the sphere = " <<vol <<endl;
}

int main() {
    sphereVol(3.14);
}