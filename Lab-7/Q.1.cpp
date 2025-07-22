//(1) Using a friend function, print the sum of private data members of two classes.

#include<iostream>
using namespace std;

class c2;
class c1{
    private:
    int num;

    public:
    friend void doxt(c1,c2);
    void setData(){
        cout<<"Enter the number:";
        cin>>num;
    }

};

class c2{
    
    private:
    int num;

    public:
    friend void doxt(c1,c2);
    void setData(){
        cout<<"Enter the number:";
        cin>>num;
    }

};

void doxt(c1 a,c2 b){
    
    cout<<"The sum is "<<a.num+b.num;
}

int main(){
    c1 n1;
    c2 n2;

    n1.setData();
    n2.setData();
    doxt(n1,n2);

    return 0;
}

