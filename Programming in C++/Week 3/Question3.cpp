#include <iostream>
using namespace std;

class Point {
    mutable int x;    

    mutable int y;   
public:
    Point(int _x, int _y) : x(_x), y(_y){}

    void changePoint(int _x, int _y)const {   

        x = _x;
        y = _y;
    }

    void showPoint()const {    
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    int x, y, cx, cy;
    cin >> x >> y >> cx >> cy;

    const Point p1(x, y);
    p1.showPoint();
    p1.changePoint(cx, cy);
    p1.showPoint();

    return 0;
}
