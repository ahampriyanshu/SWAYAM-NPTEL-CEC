#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    int no_of_wheels;
public:
    Vehicle(int x) : no_of_wheels(x) {}
};
class Auto :protected Vehicle {              // LINE-1
protected:
    int no_of_seats;
public:
    Auto(int x, int y) : Vehicle(x) , no_of_seats(y) {} // LINE-2
    void show();
};
class Car : protected Vehicle {              // LINE-3
protected:
    int no_of_seats;
public:
    Car(int x, int y) : Vehicle(x), no_of_seats(y) {} // LINE-4
    void show(){
        cout << "Car " << no_of_wheels << " " << no_of_seats << endl;
    }
};


void Auto::show(){
        cout << "Auto " << no_of_wheels << " " << no_of_seats << endl;
    }


int main() {
    string v;
    int i, j;
    cin >> v >> i >> j;

    if (v == "auto"){
        Auto a(i, j);
        a.show();
    }
    else if (v == "car"){
        Car c(i, j);
        c.show();
    }
    return 0;
}
