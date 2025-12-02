#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename Iter>
Iter partition(Iter begin, Iter end) {
    auto pivot = *(end - 1); // last element as pivot
    Iter i = begin;

    for (Iter j = begin; j < end - 1; j++) {
        if (*j < pivot) {
            swap(*i, *j);
            i++;
        }
    }
    swap(*i, *(end - 1));
    return i; // pivot iterator
}

template <typename Iter>
void quickSort(Iter begin, Iter end) {
    if (begin < end - 1) { // at least 2 elements
        Iter pivotIt = partition(begin, end);
        quickSort(begin, pivotIt);
        quickSort(pivotIt + 1, end);
    }
}

void printVector(const vector<int>& arr) {
    for(int num : arr) cout << num << " ";
    cout << "\n";
}

int main() {
    vector<int> unsorted = {9,1,0,2,8,3,7,4,6,5};
    cout << "Before sorting:\n";
    printVector(unsorted);

    quickSort(unsorted.begin(), unsorted.end());

    cout << "After sorting:\n";
    printVector(unsorted);
}
