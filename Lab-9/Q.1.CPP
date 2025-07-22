//(1) Write a program that overloads the binary arithmetic '/' operator using a friend function.//

#include<iostream>
using namespace std;

class Number{
    private:
    int num1;

    public: Number(int num){
        this->num1 = num;
    }

    public:
    void setVal(){
        cout<<"Enter number:";
        cin>>num1;
    }

    void getVal(){
        cout<<"number:"<<num1;
    }

    friend Number operator/(Number a,Number b);

};
Number operator/(Number a,Number b){
    return Number(a.num1/b.num1);
}

int main(){
    Number num1(0),num2(0);
    num1.setVal();
    num2.setVal();
    Number result = num1 / num2;
    result.getVal();
}