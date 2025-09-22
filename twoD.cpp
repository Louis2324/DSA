#include <iostream>
using namespace std;
void display (int marks[][5] , int r , int c) {
      for (int i = 0 ; i <r ; i++) {
        for(int j = 0; j<c ; j++) {
            cout<< marks[i][j] << " ";
        }
        cout<<"\n";
    }
}
int main() {
    int marks[][4] = {
        {80,75,76,75},
        {54,72,55,70},
        {65,85,35,59}
    };

    int b [5][5] = {{0}};
    display(b,5,5);

    return 0;
}