#include <iostream>
#include <list>
using namespace std;

int main() {
   list<int> myList;

   myList.push_back(5);
   myList.push_front(4);
   myList.push_back(50);

   for(int node : myList) {
      cout<<node<<" ";
   }
   cout<<endl;

   for(list<int>::iterator it = myList.begin() ; it!= myList.end() ; it ++ ) {
        cout << *it << " ";
   }

   cout<<"\n";
   
   myList.erase(myList.begin());
   myList.erase(--myList.end());

   for(int node : myList) {
      cout<<node<<" ";
    }
    cout<<endl;
}