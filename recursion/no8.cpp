#include <iostream>
using namespace std;

int lastIndex(int array[] , int n , int el) {
     if (n == 0 ) return -1;
     if ( array[n-1] == el ) return n-1;
     return lastIndex(array,n-1,el);
}

int firstIndex( int array[] , int n , int el , int index = 0 ) {
    if(index == n)  return -1;
    if(array[index] == el) return index;
    return firstIndex(array,n,el,index + 1);
}

int findMax(int arr[] , int n) {
    if (n==1) return arr[0];
    int maxOfRest = findMax(arr+1 , n-1);
    return (arr[0] > maxOfRest) ? arr[0] : maxOfRest ;
}

int main() {
    int a[6]={5,5,6,20,5,6} ;
    int x = 5;
    cout<<"The last index of "<<x <<" in the array is: "<<lastIndex(a,6,x) <<endl;
    cout<<"The first index of "<<x <<" in the array is: "<<firstIndex(a,6,x)<<endl;
    cout<<"The greatest element of the array is: " << findMax(a,6)<<endl;
}