#include <iostream>
#include <unordered_map>
using namespace std;

int mostFrequentElement(int array[] , int n ) {
    unordered_map<int , int> freq;
    int maxCount = 0 , mostFrequent = array[0];

    for(int i = 0 ; i < n ; i++) {
        freq[array[i]]++;
        if(freq[array[i]] >  maxCount) {
            mostFrequent = array[i];
            maxCount = freq[array[i]];
        }
    }
    return mostFrequent;
}


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int result = mostFrequentElement(arr,n);
    cout << "Most frequent number: "<< result;

    return 0;
}


/* 
Time Complexity
 O(n) (each element counted once)

Space Complexity
 O(k) where k = number of unique elements (for hash map storage)
 */