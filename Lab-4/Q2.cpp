/*(2) Create a constructor to initiate any private data member. Later overload it to set different
type of data member. Your program must also include a destructor.*/

#include<iostream>
using namespace std;

class person{
    private:
    int intData;
    double doubleData;
    string str;

    public:
    person(int val){
        intData = val;
        doubleData = 0;
        str = "";
        cout<<"integer constructor called"<<endl;
    }

    person(double a){
        intData = 0;
        doubleData = a;
        str = "";
        cout<<"double constructor called"<<endl;
    }

    person(string s){
        intData = 0;
        doubleData = 0;
        str = s;
        cout<<"string constructor called"<<endl;
    }

    ~person(){
        cout<<"destructor called clearing up"<<endl;
    }
};


int main(){
    person a1(12);
    person a2(2.2);
    person a3("hello world");
    return 0;
}


