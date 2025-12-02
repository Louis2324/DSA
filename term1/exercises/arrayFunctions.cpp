#include <iostream>
#include <string.h>
using namespace std;


int main(){
    int c = 0;
    int array1[] =  {0,1,2,3,4};
    cout<<"The array is: ";
    //auto keyword is used to tell the compiler to decide the return type or the type of the thing;
    for (auto i: array1) {
        cout<<i<<" ";
        c++;
    };

    cout <<"The size of array 1 is: "<<c<<endl;
    cout<<"The size of the array is : "<<end(array1)-begin(array1)<<endl;
    cout<<"The length of the array is: "<<(sizeof(array1)/sizeof(array1[0]))<<endl;

    return 0;
}