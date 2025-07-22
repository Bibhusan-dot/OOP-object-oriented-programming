/*(1) Create a function template to swap 2 values. Using its template function, swap 2 integer,
floating point, and character values.*/

#include<iostream>
using namespace std;

template<class T>
void swapping(T a,T b){
    T temp;
    temp = a;
    a = b;
    b =temp;
}

int main(){
    int a = 10,b =8;

    swapping(a,b);
    cout<<a<<" "<<b;
    cout<<endl;
    float x = 9.0;
    float y = 4.5;
    swapping(x,y);
    cout<<x<<" "<<y;
    
    return 0;
}