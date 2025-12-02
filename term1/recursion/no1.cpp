#include <iostream>
using namespace std;
void printChar(char arr[]){
    if(arr[0] == '\0') {
        cout<<".";
        return;
    }else{
        cout<<arr[0];
        printChar(arr+1);
    }
}

void printCharRev(char arr[]) {
    if (arr[0] == '\0') return;
    printCharRev(arr + 1);
    cout << arr[0];
}


int main(){
   char let[] = "abc";
//    printChar(let);
   cout<<"\n";
   printCharRev(let);
   cout<<".";
   return 0;
}