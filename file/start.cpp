#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{

    ofstream fout("one.txt");
    int val1 , rel1 ;
    string val2, rel2 ;


    cout<<"\nEnter an integer value: ";
    cin>>val1;
    cout<<"\nEnter a string value: ";
    cin>>val2;

    fout<<val1;
    fout<<val2;

    fout.close();


    ifstream fin("one.txt");

    fin>>rel1;
    fin>>rel2;

    cout<<"Integer value: "<<rel1<<"\n ";
    cout<<"String value: "<<rel2<<"\n ";
}