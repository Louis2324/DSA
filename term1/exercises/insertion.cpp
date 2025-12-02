#include <iostream> 
using namespace std;

int main() {
    int item=10,index=3,length=9,j=length-1;
    int scores[length] = {52,78,75,68,88,63,75,90,78};
    
    while(j>=index) {
        scores[j+1] = scores[j];
        j--;
    }

    scores[index] = item;
    length+=1;

    for(int i = 0 ; i<length ; i++) {
        cout<<scores[i]<<" ";
    }
}