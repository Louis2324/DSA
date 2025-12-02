#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
// a^2 + b^2 = c^2
vector<vector<int>> findTriples(int upperBound) {
    vector<vector<int>> triples;
    for(int a = 2 ; a < upperBound ; a++) {
        for( int b = a ;  b < upperBound ; b++) {
           float c = sqrt(( pow(a ,2) + pow(b,2) ) );
           if(c - (int)c == 0) {
             triples.push_back({a,b,(int)c});
           }
        }
    }
    return triples;
}


void printTriples(vector<vector<int>>& triples) {
    for(int i = 0 ; i < triples.size() ; i++) {
        cout<<"[ ";
        for(int j = 0 ; j < triples[i].size() ; j++) {
            cout<< triples[i][j]<<" ";
        }
        cout<<" ]";
        cout<<"\n";
    }
}


int main() {
    vector<vector<int>> triples = findTriples(100);
    printTriples(triples);
}