#include <iostream>
using namespace std;

template <class T, int n>
class mysequence {
    T items[n];
public:
    void setVal(int x, T value);
    T getVal(int x);
};

template <class T, int n>  // LINE-1

void mysequence<T,n>::setVal(int i, T value) {  // LINE-2

    items[i] = value;
}

template <class T, int n>   // LINE-3

T mysequence<T,n>::getVal(int i) {  // LINE-4

    return items[i];
}

int main() {
    int ch;
    cin >> ch;

    if (ch == 1) {
        mysequence <int, 5> myints;
        int i, j;
        cin >> i >> j;
        myints.setVal(0, i);
        myints.setVal(1, j);
        cout << myints.getVal(0) << ", " << myints.getVal(1);
    }
    else {
        mysequence <char, 5> mychars;
        char i, j;
        cin >> i >> j;
        mychars.setVal(0, i);
        mychars.setVal(1, j);
        cout << mychars.getVal(0) << ", " << mychars.getVal(1);
    }

    return 0;
}
