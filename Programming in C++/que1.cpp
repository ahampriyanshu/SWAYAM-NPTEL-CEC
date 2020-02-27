#include <iostream>
using namespace std;

class B;

class A {
    int a_;
public:
    A(int a) : a_(a) { }
    int func(const B&) const;
};

class B {
    int b_;
public:
    B(int b) : b_(b) { }
    friend int A::func(const B& ob) const;
};

int A::func(const B& oB) const {

   return (a_)*(oB.b_);
} 
int main() {

    int i;

    B b1(5), b2(10);

    cin >> i;

    const A a1(i++), a2(i);

    cout << "Result: " << a1.func(b1) + a2.func(b2);

    return 0;
}
