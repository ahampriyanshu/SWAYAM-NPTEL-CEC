#include <iostream>
#include <string>
using namespace std;

class Flower {
    char hasPetals;

public:
    Flower(char p) : hasPetals(p) { }

};
class Rose :private Flower {                         // LINE-1
    protected:
        string smell;
public:
    Rose(char p, string s) : smell(s) , Flower(p) { }       // LINE-2
};

class Redrose : protected Rose {                     // LINE-3
    string color;
public:
    Redrose(char p, string s, string c) : Rose(p,s) , color(c) { } 
    void show() {
        cout << "Color: " << color << endl;
        cout << "Smell: " << smell << endl;
    }
};

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    Redrose r('Y', s1, s2);
    r.show();

    return 0;
}
