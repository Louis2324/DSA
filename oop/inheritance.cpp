#include <iostream>

class Animal {
    public:
        void makeSound() {
           std::cout<<"I am an animal \n";
        }
};


class Person: public Animal {
    std::string name;
    public:
        Person(){}
        Person(std::string n): name(n) {}
        void makeSound() {
           std::cout<<"Hello I am  "<<name<<"\n";
        }
};

class Dog: public Animal {
    public:
      void makeSound() {
        std::cout<<"Bark bark bark \n";
      }
};

int main() {
    Animal a;
    Person p("Miguel");
    Dog d;

    a.makeSound();
    p.makeSound();
    d.makeSound();
}