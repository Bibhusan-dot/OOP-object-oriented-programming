/*Create a function that calculates the product of 3 numbers entered by the user, regardless
of the number entered being integer or floating point. Print the result as output.*/

#include<iostream>
using namespace std;

float product(float a,float b,float c){
    return a*b*c;
}
int product(int a,int b,int c){
    return a*b*c;
}

int main(){
    float i,j,k;
    int d,e,f;

    cout<<"enter three floating type numbers";
    cin>>i>>j>>k;
    cout<<"enter three integer type numbers";
    cin>>d>>e>>f;
    cout<<"Product is:";
    cout<<product(i,j,k);
    cout<<endl<<product(d,e,f);

    return 0;

}