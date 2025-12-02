#include <iostream>
using namespace std;

struct Person {
    string firstName;
    string lastName;
    int age;
    Person() {}
    Person(string lname , string fname , int a) {
        firstName = fname ;
        lastName = lname;
        age = a;
    }
    void printMe() {
        cout<<firstName<<" "<<lastName<<" "<<age<<endl;
    }
};




int main() {
    Person person1("Ange","MUGISHA",20);

    Person person2{"Anick","GANZA",20};

    Person person3={"John","UWASE",18};

    Person *person4 = new Person("Mary","KEZA",13);

    Person person5;
    person5.firstName = "ZIGIRUMUGABE";
    person5.lastName = "Louis Miguel";
    person5.age = 16;

    person1.printMe();
    person2.printMe();
    person3.printMe();
    person4->printMe();
    person5.printMe();

    return 0;
}