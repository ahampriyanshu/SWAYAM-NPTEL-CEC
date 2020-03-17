#include <iostream>
using namespace std;

class base {

public:
    virtual void print(int i)=0;          // LINE-1
};

class derived1 : public base{ // LINE-2
public:
    void print(int i) { cout << i * 1 << " "; }
};

class derived2 : public base { // LINE-3
public:
    void print(int i) { cout << i * 2 << " "; }
};

class derived3 : public base{ // LINE-4
public:
    void print(int i) { cout << i * 3 << " "; }
};

int main() {
    base* bp[3] = { new derived1, new derived2, new derived3 };

    int j;
    cin >> j;

    for (int i = 0; i < 3; i++){
        bp[i]->print(j);
    }

    return 0;
}
