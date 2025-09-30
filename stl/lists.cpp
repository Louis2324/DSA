#include <iostream>
#include <list>
using namespace std;

void displayRatings ( const list<int>& playerRatings) {
    for(list<int>::const_iterator it = playerRatings.begin() ; it != playerRatings.end() ; it ++) {
        cout<<"Player Rating: "<< *it << " "<<"\n";
    }
   cout<<"\n";
}

int main() {
//    list<int> myList;

//    myList.push_back(5);
//    myList.push_front(4);
//    myList.push_back(50);

//    for(int node : myList) {
//       cout<<node<<" ";
//    }
//    cout<<endl;

//    for(list<int>::iterator it = myList.begin() ; it!= myList.end() ; it ++ ) {
//         cout << *it << " ";
//    }

//    cout<<"\n";

//    myList.erase(myList.begin());
//    myList.erase(--myList.end());

//    for(int node : myList) {
//       cout<<node<<" ";
//     }
//     cout<<endl;

  list<int> allPlayers{5,2,9,6,7,3,1,4,8};
  list<int> noobs; // noob ratings 1-5
  list<int> pros;  // pros ratings 6-10

  for(list<int>::iterator it = allPlayers.begin() ; it != allPlayers.end() ; it ++) {
    int rating = *it;
    if(rating>=1 && rating <= 5)
       noobs.push_back(rating);
    else if(rating>=6 && rating <= 10)
       pros.push_back(rating);
  }
  allPlayers.sort();
  noobs.sort();
  pros.sort();
  cout<<"All Players"<<endl;
  displayRatings(allPlayers);

  cout<<"Noobs"<<endl;
  displayRatings(noobs);

  cout<<"Pros"<<endl;
  displayRatings(pros);

}