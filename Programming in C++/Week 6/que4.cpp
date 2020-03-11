#include <iostream>
using namespace std;

class base {
protected:
    int counter;
    void print() { cout << --counter << " "; }
    
public:
    base(int _counter = 0) : counter(++_counter) { cout << counter << " "; }
virtual ~base() { print(); }    // LINE-1

};

class derived : public base {
public:
    derived(int _counter = 0) : base(++_counter) { cout << counter << " "; }
   
    virtual ~derived(){ print(); }   // LINE-2
};
int main() {
    int c;
    cin >> c;
    
    base *bp = new derived(c);
    delete bp;
    
    return 0;
}
