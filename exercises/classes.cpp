#include <iostream>
#include <cmath>
#include <numeric>

class Fraction {
    int numerator;
    int denominator;

    public:
     Fraction& setNumerator (int n ) {
        numerator = n;
        return *this;
     }
    
     int getNumerator() {
        return numerator;
     }

     Fraction& setDenominator (int n ) {
        if(n==0) {
          throw std::invalid_argument("Denominator can't be zero");
        }

        denominator = n;
        return *this;
     }
    
     int getDenominator() {
        return denominator;
     }

     void print() {
        std::cout<<numerator<<"/"<<denominator ;
        std::cout<<"\n";
     }

     Fraction() {}

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

     Fraction& simplify() {
       int gcd = std::gcd(numerator,denominator);
       numerator /= gcd;
       denominator/=gcd;
       if(denominator<0) {
        denominator*=-1;
        numerator*=-1;
       }
       return *this;
     }

};

int main() {
    Fraction f1;
    f1.setNumerator(10).setDenominator(50).simplify().print();
}