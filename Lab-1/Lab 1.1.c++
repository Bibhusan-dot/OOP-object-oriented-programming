/*Write a program to output the nth Fibonacci number using iteration.*/

#include<iostream>
using namespace std;

int main(){
    int current=0;
    int next=1;
    int sum,n;

    cout<<"enter nTh fibonacci series:";
    cin>>n;
    cout<<"The fibonacci series till "<<n<<"is:\n";
    cout<<current<<endl<<next; 
    for(int i=2;i<n;i++){
        sum = current + next;
        current = next;
        next = sum;
        cout<<endl<<next;
    }
    return 0;
}