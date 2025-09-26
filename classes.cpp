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
     }

     Fraction(double decimal) {
        double rem;
        if((int)decimal == 0) {
            rem = decimal;
        }else {
            rem = fmod(decimal,(int)decimal);
        }
        int exponent = 0 ;
        while (rem < 1) {
            rem*=10;
            exponent++;
        }
        this->denominator = pow(10,exponent);
        this->numerator =((int)decimal*this->denominator) + rem;
     }

     void simplify() {
        if(denominator % numerator == 0) {
            int currentDenominator = this->denominator;
            this->denominator = (currentDenominator / numerator);
            this->numerator = 1;   
        }
     }

};

int main() {
    Fraction f1(4,5);
    f1.print();
    Fraction f2(0.5);
    f2.print();
    f2.simplify();
    f2.print();
}