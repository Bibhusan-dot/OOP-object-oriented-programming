#include <iostream>
#include <fstream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person people[5];

    // Step 1: Get input and write to file
    ofstream outFile("people.txt");
    if (!outFile) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    cout << "--- Enter data for 5 people ---\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nPerson " << i + 1 << ":\n";
        people[i].input();
        outFile << people[i].name << " " << people[i].age << endl;
    }
    outFile.close();

    // Step 2: Read from file and display people aged 30 or above
    ifstream inFile("people.txt");
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "\n--- People aged 30 or above ---\n";
    string name;
    int age;
    while (inFile >> name >> age) {
        if (age >= 30) {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
    }

    inFile.close();
    return 0;
}
