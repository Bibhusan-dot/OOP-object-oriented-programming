/*Write a program that inputs ‘n’ integers from the user. Then, create a function pointer to
find the maximum value among these integers. The function definition itself should also use
pointer for comparison.*/

#include<iostream>
using namespace std;

int maxVal(int a[],int n){
    int *ptr;
    ptr = &a[0];

    for(int i=1;i<n;i++){
        if(*ptr < a[i]){
            ptr = &a[i];
        }
    }
    return *ptr;
}

int main(){
    int arr[100],n;

    cout<<"Enter the value of n:";
    cin>>n;
    cout<<endl<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Max value is:";
    cout<<maxVal(arr,n);

    return 0;
}