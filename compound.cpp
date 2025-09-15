#include <iostream>
#include <cmath>
using namespace std;

double compoundCalculator (int cap , double rate , int time) {
    double rateExp = 1 + ( rate /100.0);
    double amount =  cap * pow(rateExp,time);
    return amount;
}
int main () {
    int initialAmount , interestRate , timeInYears;
    string fullName;
    
    cout<<"Enter your full name"<<endl;
    getline(cin,fullName);
    cout<<"Enter your initial amount: "<<endl;
    cin>>initialAmount;
    cout<<"Enter your interest rate: (eg: 5% , 3%)"<<endl;
    cin>>interestRate;
    cout<<"Enter the payment time in years:"<<endl;
    cin>>timeInYears;

    cout<<fullName<<" your compound interest for "<<initialAmount<<" at a rate of "<<interestRate<<" for "<<timeInYears<<" is "<<compoundCalculator(initialAmount,interestRate,timeInYears);

    return 0;
}