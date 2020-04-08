#include <iostream>

#include <exception>

using namespace std;

// Declare a user-defined exception
class NegativeValException : public exception {     // LINE-1
public:
    virtual const char* what() const throw() {
        return "Negative value";
    }
};

// Declare a user-defined exception
class ZeroValException : public exception {         // LINE-2
public:
    virtual const char* what() const throw() {
        return "Zero";
    }
};

int main() {
    int i;
    cin >> i;
   
    try {
        if (i < 0)
            // Throw the exception object
            throw NegativeValException();                               // LINE-3

        else if (i == 0)
            // Throw the exception object
            throw ZeroValException();  
        else
            cout << i << " is accepted";
    }
    catch (NegativeValException e) {
        cout << e.what() << endl;
    }
    catch (ZeroValException e) {
        cout << e.what() << endl;
    }

    return 0;
}
