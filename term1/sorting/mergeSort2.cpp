#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& arr) {
    for(int num: arr) 
        cout<<num<<" ";
    cout<<"\n";
}

vector<int> merge (vector<int>& left , vector<int>& right) {
    vector<int> result;
    int l=0 , r=0;

    while(l<left.size() && r<right.size()) {
        if(left[l] < right[r]) {
            result.push_back({left[l]});
            l++;
        }else {
            result.push_back({right[r]});
            r++;
        }
    }

    while(l<left.size()) result.push_back(left[l++]);
    while(r<right.size()) result.push_back(right[r++]);

    return result;
}

vector<int> mergeSort(vector<int>& arr){
    if(arr.size()<= 1) return arr;
    
    int mid = arr.size()/2;
    vector<int> left(arr.begin() ,arr.begin() + mid);
    vector<int> right(arr.begin()+mid , arr.end());

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left,right);
}

int main() {
    vector<int> nums = {9, 5, 1, 8, 4, 2, 7, 6, 3};
    printVector(nums);

    nums = mergeSort(nums);

    printVector(nums);
}