#include <iostream>

struct Person {
    std::string name;
    int age;
    const char gender;

    Person(std::string n , int a , char c) : name(n), age(a), gender(c) {};

    void print_me() {
        std::cout<<"\n";
        std::cout<<"My name is "<<this->name <<". \n"
         << "I am "<<this->age<<" years old"<<" \n"
         << (this->gender == 'M'?"I am  male" : "I am female" );
    }
};

int main() {
    Person p1("Louis",16,'M');
    p1.print_me();

    Person p2("Isabella",19,'F');
    p2.print_me();
}
