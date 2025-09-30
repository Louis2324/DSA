#include <iostream>
using namespace std;
int main(){
string firstName , lastName , fullName;
cout<<"Enter your first and second name"<<endl;
getline(cin,firstName);
getline(cin,lastName);
fullName = firstName +" "+ lastName;
cout<<"Your full name is "<<fullName;
return 0;
}
