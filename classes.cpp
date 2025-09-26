#include <iostream>

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
     }

     Fraction(int numerator , int denominator) {
        this->numerator = numerator ;
        this->denominator = denominator;
     }

};

int main() {
    Fraction f1(4,5);
    f1.print();
}