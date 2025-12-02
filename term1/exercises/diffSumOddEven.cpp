#include <iostream>
#include <vector>
using namespace std;

int diff(vector<int> array) {
  int oddSum = 0  , evenSum = 0  , diff;
  for(int i = 0 ; i < array.size() ; i++) {
    if(array[i] % 2 == 0 ) {
        evenSum += array[i];
    }else {
        oddSum += array[i];
    }
  }

  diff = oddSum - evenSum; 
  return diff;
}

int diff(int array[] , int n) {
  int oddSum = 0  , evenSum = 0  , diff;
  for(int i = 0 ; i < n ; i++) {
    if(array[i] % 2 == 0 ) {
        evenSum += array[i];
    }else {
        oddSum += array[i];
    }
  }

  diff = oddSum - evenSum; 
  return diff;
}

int main() {
    int n; 
    cout<<"Enter the number of elements in your array: ";
    cin>>n;
    int array[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i = 0 ; i < n ; i ++) cin>>array[i];
    cout<<"The difference of the sum of odd numbers and even numbers in your array is: "<< diff(array, n);

}