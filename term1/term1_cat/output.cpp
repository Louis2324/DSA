#include <iostream>
using namespace std;
namespace test1 {
    int a = 10;
}

namespace test2 {
    int a = 20 ;
}

int main() {
    test1::a = test2::a  = 30;
    cout<<test1::a<<" "<<test2::a;
    return 0;
}