/*(1) Write a program in C++ for addition and subtraction of two complex numbers. Show the
values of the original number as well as sum and difference.*/

#include<iostream>
using namespace std;

class Complex{
    private:
    int real,imag;

    public:
    void setData(){
        cout<<"Enter real and imaginary part:";
        cin>>real>>imag;
    }
    void getData(){
        cout << real << " + " << imag << "i";
    }

    Complex add(Complex c2){
        //cout<<"adding real and imaginary part:";
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }

    Complex sub(Complex c2){
        Complex temp;
        temp.real = real - c2.real;
        temp.imag = imag - c2.imag;
        return temp;
    }
};

int main(){
    Complex c1,c2,ans;
    c1.setData();
    c2.setData();
    ans = c1.add(c2);
    ans.getData();
    cout<<endl;
    ans = c1.sub(c2);
    ans.getData();
    return 0;
}