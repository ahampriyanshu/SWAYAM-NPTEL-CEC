#include <iostream>

using namespace std;

class Employee {

    double pf = 12;

public:
virtual void computeSalary()=0;                      // LINE-1

    double computePF(int basic) { return (basic*pf / 100); }
};

class Manager : public Employee {
    int basic;
public:
    Manager(int b) : basic(b) { }
    void computeSalary() {

        double pf = Employee::computePF(basic);      // LINE-2

        double sal = basic + pf;
        cout << "Manager's Salary: " << sal << endl;
    }
};

class Analyst : public Employee {
    int basic;
public:
    Analyst(int b) : basic(b) { }
    void computeSalary() {

        double pf = Employee::computePF(basic);    // LINE-3
            double sal = basic + pf;
        cout << "Analyst's Salary: " << sal << endl;
    }
};

int main() {
    int m, a;
    cin >> m >> a;

    Employee *emp = new Manager(m);
    emp->computeSalary();

    emp = new Analyst(a);
    emp->computeSalary();

    return 0;
}
