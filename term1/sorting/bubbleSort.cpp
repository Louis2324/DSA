#include <iostream>
#include <algorithm>
using namespace std;
void printArray(int array[] ,int n) {
  for(int i = 0 ; i<n ; i++) {
     cout<<array[i]<<" ";
  }
  cout<<"\n";
}

void bubbleSort(int nums[] , int n) {
    for(int i = 0  ;  i < n - 1; i++) {
        bool swapped = false;
        for(int j = 0 ; j<n-i-1 ; j++) {
            if(nums[j] > nums[j+1]) {
                swap(nums[j] ,nums[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}


int main() {
    int nums[10] = {1,5,8,0,9,7,6,4,2,3};
    printArray(nums,10);
    bubbleSort(nums,10);
    printArray(nums,10);
}