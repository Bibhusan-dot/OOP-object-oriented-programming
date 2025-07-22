/*(2) Write a program to demonstrate a class template for any suitable situation of your choice.*/

#include <iostream>
using namespace std;

template <class T1, class T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) {
        first = f;
        second = s;
    }

    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, float> p1(10, 3.14);
    p1.display();

    Pair<string, int> p2("Age", 21);
    p2.display();

    Pair<char, double> p3('A', 99.99);
    p3.display();

    return 0;
}

