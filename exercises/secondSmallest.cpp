#include <iostream>
#include <climits>
using namespace std;

int findSecondSmallest(int array[] , int& n ) {
    int first = INT_MAX , second = INT_MAX;
    for(int i = 0 ; i < n ; i++) {
        if(array[i] < first) {
            second = first;
            first = array[i];
        }else if(array[i] < second && array[i] != first ){
          second = array[i];
        }
    }

    if(second == INT_MAX) return -1;
    return second;
}

int main() {
    int n;
    cout<<"Enter the number of integers your array will hold: ";
    cin>>n;

    cout<<"Fill in your array: ";

    int array[n] ;
    for(int i = 0 ; i < n  ; i++ ) cin>>array[i] ;

    cout<<"The second smallest element in your array is: "<<findSecondSmallest(array , n );
    
}