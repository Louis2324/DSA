#include <iostream>
using namespace std;

int fun1(int n ) {
    int m = 0;
    for (int i = 0 ; i<n ; i++) {
        m+=1;
    }
    return m;
}
int fun2(int n ) {
    int m = 0;
    for(int i = 0 ; i<n  ; i++) {
        for (int j = 0 ; j<n ; j++) {
            m+=1;
        }
    }
    return m;
}

int fun3(int n) {
    int i,j,k,m=0;
    for (i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            for(int k =0 ; k<n ;k++) {
                m += 1;
            }
        }
    }
    return m;
}

int main() {
    cout<<"N=100 , Number of steps for O(n) is: "<<fun1(100)<<"\n";
    cout<<"N=100 , Number of steps for O(N^2) is: "<<fun2(100)<<"\n";
    cout<<"N=10 , Number of steps for O(n^3) is: "<<fun3(10) <<"\n";
    

}