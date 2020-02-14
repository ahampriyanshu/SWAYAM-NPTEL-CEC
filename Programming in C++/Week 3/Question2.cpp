#include <iostream>

using namespace std;

class Point {

    const int x, y;
public:
Point(int _x, int _y) : x(_x), y(_y){} 
 
 Point( const Point& p2 ) : x( p2.x*10 ), y( p2.y*10 ){} 
 int getX() { return x; }
    int getY() { return y; }
};

int main() {
    int x, y;
    cin >> x >> y;

    Point p1(x, y);
    Point p2 = p1;

    cout << "x = " << p2.getX() << " y = " << p2.getY();

    return 0;
}
