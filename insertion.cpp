#include <iostream> 
using namespace std;

int main() {
    int scores[] = {52,78,75,68,88,63,75,90,78};
    int item=10,index=3,length=9,j=length-1;

     while(j>=index) {
        scores[j+1] = scores[j];
        j--;
     }

     scores[index] = item;

     for(int score:scores) {
        cout<<score<<" ";
     }
}