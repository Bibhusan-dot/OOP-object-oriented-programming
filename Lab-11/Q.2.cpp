/*(2) Write a program using exception handling in which an object type is thrown.*/

#include <iostream>
using namespace std;

class MyException {
public:
    string message;

    MyException(string msg) {
        message = msg;
    }

    void displayMessage() {
        cout << "Exception caught: " << message << endl;
    }
};

int main() {
    try {
        // Throwing an object of MyException
        throw MyException("This is a custom object exception");
    }
    catch (MyException e) {
        e.displayMessage();
    }

    return 0;
}
