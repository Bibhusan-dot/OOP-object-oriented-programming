#include<iostream>
using namespace std;

int factorial(int a){
    if(a <= 1){
        return 1;
    }
    return a + factorial(a-1);

}
int main(){
    int ans = 0,n;

    cout<<"Enter the value of n:";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i % 2 == 0){
            ans -= (i*i)/factorial(i);
        }
        else{
            ans += (i*i)/factorial(i);
        }
    }

    cout<<"The answer is :";
    cout<<ans;

    return 0;
}

