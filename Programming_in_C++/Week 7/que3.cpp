#include <iostream>
#include <string>
using namespace std;

class student {
    int roll;
    string name;
    int sem;
public:
    student(int _roll, string _name, int _sem) :
        roll(_roll), name(_name), sem(_sem) { }
void updateSem(int new_sem) const{             // LINE-1

        student* ptr=const_cast<student*> (this);
        ptr->sem = new_sem;             // LINE-2
    }

    void show() const { 
        cout << roll << " : " << name << " : " << sem;
    }
};

int main() {
    int r, s, ns;

    string n;
    cin >> r >> n >> s;

    const student st(r, n, s);
    cin >> ns;

    st.updateSem(ns);
    st.show();

    return 0;
}

