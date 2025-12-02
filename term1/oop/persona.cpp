#include <iostream>
using namespace std;

/*
    ======================================
    1. CLASS WITH PUBLIC MEMBERS
    ======================================
    - By default, class members are private.
    - Here, we explicitly make them public for direct access.
    - Downsides: breaks encapsulation since anyone can modify members directly.
*/
class Persona {
   public:
    string firstName;
    string lastName;
    int age;

    Persona() {}
    Persona(string lname, string fname, int a) {
        firstName = fname;
        lastName = lname;
        age = a;
    }

    void printMe() {
        cout << firstName << " " << lastName << " " << age << endl;
    }
};

/*
    ======================================
    2. CLASS WITH ENCAPSULATION
    ======================================
    - Members are private (default).
    - Public setters/getters are used to control access.
    - This enforces data hiding and validation if needed.
*/
class Personb {
    string firstName;
    string lastName;
    int age;

   public:
    Personb() {}
    Personb(string lname, string fname, int a) {
        firstName = fname;
        lastName = lname;
        age = a;
    }

    void printMe() {
        cout << firstName << " " << lastName << " " << age << endl;
    }

    // Setters & Getters
    void setFirstName(string fname) { firstName = fname; }
    string getFirstName() { return firstName; }

    void setLastName(string lname) { lastName = lname; }
    string getLastName() { return lastName; }

    void setAge(int a) { age = a; }
    int getAge() { return age; }
};

/*
    ======================================
    3. CLASS WITH INITIALIZER LISTS
    ======================================
    - Constructor uses initializer list syntax.
    - Preferred for efficiency (avoids extra assignments).
    - Can handle const and reference members properly.
*/
class Personc {
    string firstName;
    string lastName;
    int age;

   public:
    Personc() {}

    // Constructor using initializer list
    Personc(string lname, string fname, int a)
        : firstName(fname), lastName(lname), age(a) {}

    // Another constructor with different order
    Personc(int a, string fname, string lname)
        : age(a), firstName(fname), lastName(lname) {}

    void printMe() {
        cout << firstName << " " << lastName << " " << age << endl;
    }

    // Setters & Getters
    void setFirstName(string fname) { firstName = fname; }
    string getFirstName() { return firstName; }

    void setLastName(string lname) { lastName = lname; }
    string getLastName() { return lastName; }

    void setAge(int a) { age = a; }
    int getAge() { return age; }
};

/*
    ======================================
    MAIN FUNCTION
    ======================================
    Demonstrates all three approaches to show the evolution of class usage.
*/
int main() {
    cout << "\n--- Persona (public members) ---" << endl;
    Persona person1("Ange", "MUGISHA", 20);
    Persona person2{"Anick", "GANZA", 20};
    Persona person3 = {"John", "UWASE", 18};
    Persona* person4 = new Persona("Mary", "KEZA", 13);

    Persona person5;
    person5.firstName = "ZIGIRUMUGABE";
    person5.lastName = "Louis Miguel";
    person5.age = 16;

    person1.printMe();
    person2.printMe();
    person3.printMe();
    person4->printMe();
    person5.printMe();

    cout << "\n--- Personb (encapsulation with setters/getters) ---" << endl;
    Personb b1("Ange", "MUGISHA", 20);
    Personb b2{"Anick", "GANZA", 20};
    Personb b3 = {"John", "UWASE", 18};
    Personb* b4 = new Personb("Mary", "KEZA", 13);

    Personb b5;
    b5.setFirstName("Github ID:");
    b5.setLastName("Louis2324");
    b5.setAge(16);

    b1.printMe();
    b2.printMe();
    b3.printMe();
    b4->printMe();
    b5.printMe();

    cout << "\n--- Personc (initializer lists) ---" << endl;
    Personc c1(16, "GithubId:", "Louis2324");
    c1.printMe();

    return 0;
}
