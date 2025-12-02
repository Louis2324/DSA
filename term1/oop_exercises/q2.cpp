/*
Write a C++ program to create a class called Person that has private member variables for
 name, age and country. Implement member functions to set and get the values of these variables.

*/

#include <iostream>
using namespace std;

class Person {
  string name;
  int age;
  string country;

  public:
    Person(){}

    void setName(string nm) {
       name = nm;
    }
    string getName() {
       return name;
    }
    
    void setAge(int a) {
       age = a;
    }
    int getAge() {
       return age;
    }
    
    void setCountry(string ctry) {
       country = ctry;
    }
    string getCountry() {
       return country;
    }

    void printMe() {
    cout<<"Hello I am "<<getName()<<" I am currently "<<getAge()<<" and I am from "<<getCountry()<<"\n";
    }
};

int main() {

    Person Louis2324;
    Louis2324.setName("Louis");
    Louis2324.setAge(17);
    Louis2324.setCountry("Rwanda");
    Louis2324.printMe();

    Person p2;
    p2.setName("person 2");
    p2.setAge(5);
    p2.setCountry("Country");
    p2.printMe();
}
    