#include <iostream>
using namespace std;
struct MultiplyBy {
    int factor;
    MultiplyBy(int n): factor(n) {};
    int operator()(int x) {
        return factor * x;
    }
};

int main() {
 MultiplyBy times3(3);
 MultiplyBy times2(2);
 cout<<times3(10) <<"\n";
 cout<<times2(10);
 return 0;
}