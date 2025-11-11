#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    int code;
    string name;
    string school;
    Student *next;

    Student(int c, string nm , string schl) {
        code = c; 
        name = nm; 
        school = schl;
    }
    void toString() {
        cout<<"\n";
        cout<<"Hello I am "<<this->name<<" I study at "<<this->school <<" and this is my student code: "<<this->code;
        cout<<"\n";
    }
    void display(Student *head) { 
        while(head !=nullptr) {
            head->toString();
            head= head->next;
        }
    }
};


int main() {
    Student *s1  = new Student(101,"John Doe" ,"Example School");
    Student *s2 = new Student(102,"Susan Does", "Example Girls School");
    s1->next = s2;
    s2->next = nullptr;

    s1->display(s1);

    return 0;
}
