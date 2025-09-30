#include <iostream>
using namespace std;

int main() {
    int index = 3 , length = 9 , j = index;
    int scores[length] = {52,78,75,68,88,63,75,90,78};
   
    while(j<length-1) {
        scores[j] = scores[j+1];
        j++;
    }

    length-=1;
    for(int i = 0 ; i<length ; i ++) {
        cout<<scores[i]<<" ";
    }
}