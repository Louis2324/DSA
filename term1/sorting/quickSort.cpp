#include <iostream>
using namespace std;

void printArray(int arr[] , int size) {
    for(int i = 0  ; i <size ; i ++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void mySwap(int& a , int& b) {
    if(a == b ) return;
    a = a+b ; 
    b = a - b; 
    a = a - b;
}

void otherSwap(int& a , int& b) {
    int temp = a ; 
    a = b; 
    b = temp;
}

int partition(int arr[], int low , int high) {
  int pivot = arr[high];
  int i = low - 1;
  for(int j = low ; j < high ; j++) {
    if(arr[j] < pivot) {
        i++;
        mySwap(arr[i] , arr[j]);
    }
  }
  mySwap(arr[i+1] , arr[high]);
  return i+1;
}

void quickSort(int arr[], int low , int high) {
    if(low<high) {
        int pivotIndex = partition(arr ,low , high);
        quickSort(arr,low,pivotIndex-1);
        quickSort(arr,pivotIndex+1,high);
    }
}


int main() {
    int arr[9] = {8,2,7,1,3,9,4,6,5};
    cout<<"Before Sorting: ";
    printArray(arr,9);

    quickSort(arr,0,8);

    cout<<"After Sorting: ";
    printArray(arr,9);
}