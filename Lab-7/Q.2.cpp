#include<iostream>
using namespace std;

class ElectronicDevice{
    public:
    char property[100] = "An electronic device";

};

class Printer:public virtual ElectronicDevice
{
};

class Scanner:public virtual ElectronicDevice
{
};

class PhotoCopyMachine:public Printer,public Scanner{

};
int main(){
    PhotoCopyMachine p1;
    cout<<p1.property;

    return 0;
}
