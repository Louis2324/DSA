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

int main() {
    int a[6]={5,5,6,20,5,6} ;
    int x = 5;
    cout<<"The last index of "<<x <<" in the array is: "<<lastIndex(a,6,x) <<endl;
    cout<<"The first index of "<<x <<" in the array is: "<<firstIndex(a,6,x)<<endl;
}