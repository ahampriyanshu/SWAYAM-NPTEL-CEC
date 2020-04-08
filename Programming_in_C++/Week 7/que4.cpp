#include <iostream>
using namespace std;

class base {

public:

    base();

    base(int _pr);
};
class derived1 : virtual public base {    // LINE-1
public:
    derived1();
    derived1(int _pr);
};

class derived2 : virtual public base {    // LINE-2
public:
    derived2();
    derived2(int _pr);
};

class dd : public derived2, public derived1 {          // LINE-3
public:
    dd();
    dd(int _pr);
};

base::base() { cout << "10 "; }
base::base(int _pr) { cout << _pr * 10 << " "; }

derived1::derived1() { cout << "2 "; }
derived1::derived1(int _pr) : base(_pr) { cout << _pr * 2 << " "; }

derived2::derived2() { cout << "3 "; }
derived2::derived2(int _pr) : base(_pr) { cout << _pr * 3 << " "; }

dd::dd() { cout << "4 "; }
dd::dd(int _pr) : derived1(_pr), derived2(_pr) { cout << _pr * 4 << " "; }

int main() {
    int i;
    cin >> i;

    dd d(i);

    return 0;
}
