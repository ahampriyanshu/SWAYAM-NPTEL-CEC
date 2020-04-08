#include <iostream>

using namespace std;

class square {
    int n;

public:

    square() { cin >> n; }
virtual void compute(){ n = n*n; }           // LINE-1

   
    virtual void show(){ cout << n << endl; } // LINE-2
};
class cube : public square {
    int c;
public:
    cube() { cin >> c; }
    void compute() { c = c*c*c; }
    void show() { cout << c << endl; }
};

int main() {
    square o1;
    cube o2;
    square *p;

    p = &o1;
    p->compute();
    p->show();
    
    p = &o2;
    p->compute();
    p->show();

    return 0;
}
