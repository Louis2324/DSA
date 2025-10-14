#include <iostream>
using namespace std;

void printArray(int arr[] , int n) {
    for(int i = 0 ; i<n ; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void insertionSort(int arr[] , int n) {
  for(int i = 0 ; i < n ; i++) {
    int key = arr[i];
    int j = i - 1;

    while(j>=0 && arr[j] > key) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
  }
}

int main() {
    int nums[6] = {5,2,4,6,1,3};
    printArray(nums,6);
    insertionSort(nums,6);
    printArray(nums,6);
}