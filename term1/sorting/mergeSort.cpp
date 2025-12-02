#include <iostream>
using namespace std;

void printArray(int arr[] , int n ){
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

void merge(int leftArray[],int leftSize , int rightArray[],int rightSize , int array[]) {
    int i= 0 , l= 0 , r= 0 ;

    while(l < leftSize &&  r < rightSize) {
        if(leftArray[l] < rightArray[r]) {
            array[i] = leftArray[l];
            i++ ; l++;
        }else {
            array[i] = rightArray[r];
            i++; r++;
        }
    }
    while(l<leftSize) {
     array[i] = leftArray[l];
     i++; l++;
    }
    while(r<rightSize) {
     array[i] = rightArray[r];
     i++; r++;
    }
    
}

void mergeSort(int arr[] , int n) {
  if(n<=1) return;

  int mid = n/2;
  int* leftArray = new int[mid];
  int* rightArray = new int[n-mid];

  int i = 0 , j = 0 ;
  for(i ; i < n ; i++){
    if(i<mid) {
        leftArray[i] = arr[i];
    }else {
        rightArray[j] = arr[i];
        j++;
    }
  }
  mergeSort(leftArray , mid);
  mergeSort(rightArray, n-mid);
  merge(leftArray,mid,rightArray,n-mid, arr);

  delete[] leftArray;
  delete[] rightArray;
}

int main() {
    int array[9] = {9,5,1,8,4,2,7,6,3};
    printArray(array,9);
    mergeSort(array,9);
    printArray(array,9);
}