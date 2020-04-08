#include <iostream>
#include <string>
using namespace std;

class Base {
public:
    virtual void f() = 0;
    virtual void g() = 0;
};

class Derived : public Base {
    string name;
public:
    Derived(string s) : name(s) { }
    void f() {
Base::f();          // LINE-1 Call proper function
        cout << name << endl;
    }
    void g() {
        Base::g();          // LINE-2 Call proper function
    }
};

void Base::f(){                // LINE-3 Write proper function header
    cout << "Good day, ";
}

void Base::g(){                // LINE-4 Write proper function header
    cout << "Good bye." << endl;
}

int main() {
    string s;
    cin >> s;

    Base *b = new Derived(s);
    b->f();
    b->g();

    return 0;
}
