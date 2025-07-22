//(2) Write an object oriented program to overload the Pointer-To-Member (->) operator.

#include <iostream>
using namespace std;

class Data {
    private:
    char name[50];

    public:
    void set(){
        cout<<"Enter name\n";
        cin>>name;
    }
    void show(Data d1) {
        cout << d1.name << endl;
    }
};

class pointerToData {
private:
    Data* ptr;

public:
    pointerToData() {
        ptr = new Data();
    }

    ~pointerToData() {
        delete ptr;
    }

    Data* operator->() {
        return ptr;
    }
};

int main() {
    pointerToData obj;
    Data d1;
    d1.set();
    obj->show(d1);  

    return 0;
}
