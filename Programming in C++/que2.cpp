#include <iostream>
#include <string>
using namespace std;

string data = "Hello ";

namespace name1 {
    string data;
}

int main() {
    using name1::data;
    string s;
    
    cin >> data;
s=::data+data;
    cout << s;

    return 0;
}
