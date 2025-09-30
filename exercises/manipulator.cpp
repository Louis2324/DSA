#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    const int a = 80;
    cout<< setw(20) <<"RCA"<<endl;
    cout<< setprecision(2) << fixed << 1234.56789 <<endl;
    cout<< setprecision(3) << scientific << 1234.56789 <<endl;
    cout << "Hex: " << hex << a <<endl;
    cout << "Oct: " << oct << a <<endl;

    return 0;
}