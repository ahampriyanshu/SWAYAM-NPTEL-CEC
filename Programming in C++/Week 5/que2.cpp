#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
public:
    Person(string n) : name(n) { }
    string getName() { return name; }
};

class Department {
    string deptName;
public:
    Department(string d) : deptName(d) { }
    string getName() { return deptName; }
};
class Student :public Department , public Person {                     // LINE-1

public:

    Student(string p, string d) :Person(p),Department(d) { } // LINE-2

    void showStudDetails() { 

        cout << Person::getName() << "@" << Department::getName() << endl; } 
             
};

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    Student s(s1, s2);
    s.showStudDetails();

    return 0;
}
