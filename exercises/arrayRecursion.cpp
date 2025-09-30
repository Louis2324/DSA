#include <iostream>
using namespace std;
bool isSorted(int a[] , int n) {
    if(n==0) return true;
    if(a[1] <  a[0]) return false;
    return isSorted(a+1,n-1);
}
int main() {
    int arr[] = {1,3,5,2};
    cout<<isSorted(arr,5);

    return 0;
}