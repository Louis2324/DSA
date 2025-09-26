#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums(10);

    for(int num : nums) {
        cout<<num<<" ";
    }

    //adds an element at the end of an array and increases the array size
    nums.push_back(10);
    cout<<"\n";

    for(int num : nums) {
        cout<<num<<" ";
    }
    cout<<"\n";
    //prints out the array size
    cout<<nums.size();
    cout<<"\n";
    //removes the last element
    nums.pop_back();
    
    for(int num : nums) {
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<nums.size();
    return 0;
}