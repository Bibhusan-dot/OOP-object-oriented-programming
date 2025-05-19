/*(3) Write a program that prompts a student to enter the marks they obtained in Object
Oriented Programming. Output the corresponding grade they obtained. (0-59 = F, 60-69 = D,
70-79 = C, 80-89 = B, 90-100 = A).*/

#include<iostream>
using namespace std;

int main(){
    float marks;

    cout<<"Enter the marks of the student:";
    cin>>marks;

    if(marks >= 0 && marks<=59){
        cout<<"f";
    }
    else if(marks >= 60 && marks<=69){
        cout<<"D";
    }
    else if(marks >= 70 && marks<=79){
        cout<<"C";
    }
    else if(marks >= 80 && marks<=89){
        cout<<"B";
    }
    else if(marks >= 90 && marks<=100){
        cout<<"A";
    }
    return 0;
}