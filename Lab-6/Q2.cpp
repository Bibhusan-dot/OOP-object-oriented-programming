#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
public:
    void getVehicleData() {
        cout << "Enter vehicle brand: ";
        cin >> brand;
    }

    void showVehicleData() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
public:
    void display() {
        cout << "Car Info:\n";
        getVehicleData();
        showVehicleData();
    }
};

class Boat : public Vehicle {
public:
    void display() {
        cout << "Boat Info:\n";
        getVehicleData();
        showVehicleData();
    }
};

class Aeroplane : public Vehicle {
public:
    void display() {
        cout << "Aeroplane Info:\n";
        getVehicleData();
        showVehicleData();
    }
};

int main() {
    Car car;
    Boat boat;
    Aeroplane aero;

    cout << "--- Car ---\n";
    car.display();

    cout << "\n--- Boat ---\n";
    boat.display();

    cout << "\n--- Aeroplane ---\n";
    aero.display();

    return 0;
}
