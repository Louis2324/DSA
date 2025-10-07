#include <iostream>
using namespace std;

int main() {
    int count =  0;
    for (int i = 0 ; i<10 ; i++) {
        for(int j = 0 ; j<2 ; j++) {
            count++;
        }
    }

    cout<<"Number of steps: "<<count<<endl;
    return 0;
}