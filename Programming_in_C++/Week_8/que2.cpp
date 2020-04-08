#include <iostream>
using namespace std;

template <class T, int n>                    // LINE-1
class container {
    T arr[n];                // LINE-2

    int i;
public:
    container() : i(-1) { }

    void operator=(char data) {// LINE-3
        arr[++i] = data;
    }

    void show() {
        for (int j = n - 1; j >= 0; j--)
            cout << arr[j] << " ";
    }
};

int main() {
    const int n = 3;

    container<char, n> c;
    for (int i = 0; i < n; i++) {
        char j;
        cin >> j;

        c = j;
    }
    c.show();

    container<int, n> c1;
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;

        c1 = j;
    }
    c1.show();

    return 0;
}
