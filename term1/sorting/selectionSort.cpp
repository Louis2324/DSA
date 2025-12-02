#include <iostream>
using namespace std;
void printArray(int arr[] , int n) {
    for(int i = 0 ; i<n ; i++) 
        cout<<arr[i]<<" ";
    cout<<"\n";
}

void selectionSort(int arr[], int n ) {
    for(int i = 0 ; i < n-1 ; i ++) {
        int minIndex = i;
        for(int j = i + 1 ; j < n  ; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if(minIndex!=i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
 
int main() {
    int nums[6] = {5,2,4,6,1,3};
    printArray(nums,6);
    selectionSort(nums,6);
    printArray(nums,6);
}