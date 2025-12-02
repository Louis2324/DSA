#include "Array.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "This is my simulated array adt \n";

    Array<int> a(4);

    a.pushBack(10);
    a.pushBack(20);
    a.pushBack(30);

    a.insertAt(1, 15);

    a.print();

    cout << "Search 20: " << a.search(20) << "\n";

    a.deleteAt(2);
    a.print();
}