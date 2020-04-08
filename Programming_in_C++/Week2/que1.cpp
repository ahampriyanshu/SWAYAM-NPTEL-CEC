#include <iostream>
using namespace std;

int &fun() {
    static int x = 10;

    x *= 2;

    return x;
}

int main() {

    int i;

    cin >> i;
    fun() = i;

    cout << fun();

    return 0;

} 
