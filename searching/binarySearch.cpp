#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[],int n,int key) {
    int s = 0 , e =n-1;
    while(s<=e) {
        int mid = (s+e)/2;
        if(a[mid] ==key) {
            return mid;
        }else if(a[mid] > key) {
            e = mid - 1;
        }else {
            s = mid + 1;
        }
    }

    return -1;
}


int binSearch(int array[] , int low , int high, int target) {
    if(low > high) return -1;

    int mid = (high + low) /2;
    if(array[mid] == target) return mid;
    else if(target < array[mid]) return binSearch(array,low,mid-1,target);
    else return binSearch(array,mid+1,high,target);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout<<BinarySearch(arr,8,3)<<"\n";
    cout<<binSearch(arr,0,7,3)<<"\n";

    
}