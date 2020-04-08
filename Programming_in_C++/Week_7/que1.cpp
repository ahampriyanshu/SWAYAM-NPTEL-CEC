#include <iostream>

using namespace std;

class Container {

    int arr[5];

    int i;

public:
    Container() : i(-1) { }
Container& operator =(int val) {      // LINE-1

        this->arr[++i] = val;
        return *this;
    }

    operator int()  {      // LINE-2

        return arr[i--];
    }
};
int main() {
    Container c;
    int k;

    for (int i = 0; i < 5; i++) {
        cin >> k;
        c = k;
    }

    for (int i = 0; i < 5; i++)
        cout << (int)c << " ";

    return 0;
}
