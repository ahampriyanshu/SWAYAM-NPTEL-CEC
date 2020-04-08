#include <iostream>
using namespace std;

struct Complex {

    int r, i;
};
Complex operator +(Complex& c1, Complex& c2) {     // LINE-1

    Complex t = { 0, 0 };

   t.r= c1.r+c2.r;     // LINE-2

  t.i=c1.i+c2.i;     // LINE-3


    return t;
} // End of class Comlpex

void display(Complex c) {
    cout << c.r << ", " << c.i << endl;
}

int main() {
    int i, j, k, l;
    cin >> i >> j >> k >> l;

    Complex c1, c2, c3;

    c1.r = i;
    c1.i = j;
    c2.r = k;
    c2.i = l;

    display(c1);
    display(c2);

    c3 = c1 + c2;
    display(c3);

    return 0;
}
