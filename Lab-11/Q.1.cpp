/*(1) Write a program to demonstrate a catch block which catches all exceptions.*/

#include <iostream>
using namespace std;

void testException(int x) {
    if (x == 0)
        throw x;                // throw int
    else if (x == 1)
        throw 3.14;             // throw double
    else if (x == 2)
        throw "Exception!";     // throw string literal
}

int main() {
    for (int i = 0; i < 3; ++i) {
        try {
            testException(i);
        }
        catch (...) {
            cout << "An exception was caught!" << endl;
        }
    }

    return 0;
}
