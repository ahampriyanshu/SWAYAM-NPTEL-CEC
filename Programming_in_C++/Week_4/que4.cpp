#include <iostream>
using namespace std;

class myClass {
    int data_;
public:
    myClass(int d) : data_(d) { }
    void print() { cout << data_; }
    myClass operator+(myClass& m) {
        myClass m1(data_);
        m1.data_ += m.data_;
        return m1;
    }
    myClass operator-(myClass& m) {
myClass m1(data_);

m1.data_ = m.data_-m1.data_;
        return m1;
    }
};

int main() {
    int i, j, k;
    cin >> i >> j >> k;

    myClass A(i), B(j), C(k);
    myClass D = A + B - C;
    D.print();

    return 0;
}
