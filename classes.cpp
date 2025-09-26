#include <iostream>
#include <cmath>
#include <numeric>

class Fraction {
    int numerator;
    int denominator;

    public:
     void setNumerator (int n ) {
        numerator = n;
     }
    
     int getNumerator() {
        return numerator;
     }

     void setDenominator (int n ) {
        if(n=0) {
            std::cout<<"\nDenominator can't be zero\n";
            return;
        }

        denominator = n;
     }
    
     int getDenominator() {
        return denominator;
     }

     void print() {
        std::cout<<numerator<<"/"<<denominator ;
        std::cout<<"\n";
     }

     Fraction(int numerator , int denominator) {
        this->numerator = numerator ;
        this->denominator = denominator;
        this->simplify();
     }

     Fraction(double decimal) {
        double rem;
        if((int)decimal == 0) {
            rem = decimal;
        }else {
            rem = fmod(decimal,(int)decimal);
        }
        int exponent = 0 ;
        while (!(rem == (int)rem) ) {
            rem*=10;
            exponent++;
        }
        this->denominator = pow(10,exponent);
        this->numerator =((int)decimal*this->denominator) + rem;
        this->simplify();
     }

     void simplify() {
       int gcd = std::gcd(numerator,denominator);
       numerator /= gcd;
       denominator/=gcd;
       if(denominator<0) {
        denominator*=-1;
        numerator*=-1;
       }
     }

};

int main() {
    Fraction f1(4,5);
    f1.print();
    Fraction f2(0.5);
    f2.print();
    Fraction f3 (0.75);
    f3.print();
}