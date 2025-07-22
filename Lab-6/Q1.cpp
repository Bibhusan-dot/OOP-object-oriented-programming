#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void readPerson() {
        cout << "Enter person's name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();  // to handle newline after integer input
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Author : private Person {
private:
    string genre;
public:
    void readAuthor() {
        readPerson();  // call base class function
        cout << "Enter genre: ";
        getline(cin, genre);
    }

    void displayAuthor() {
        displayPerson();  // call base class function
        cout << "Genre: " << genre << endl;
    }
};

int main() {
    Author a;
    a.readAuthor();
    cout << "\nAuthor Details:\n";
    a.displayAuthor();
    return 0;
}
