/*Create a class for an account holder with data members as account_no,
account_holder_name and balance. Create two methods to store and retrieve these values of 3
customers.*/

#include<iostream>
using namespace std;

class accountHolder{
    private:
    int account_no;
    char account_holder_name[50];
    long balance;
    public:
    void setAccHolder(){
        cout<<"Enter acc no:";
        cin>>account_no;
        cout<<endl<<"Acc name:";
        cin>>account_holder_name;
        cout<<endl<<"balance";
        cin>>balance;
    }
    public:
    void getAccHolder(){
        cout<<"acc no:"<<account_no;
        cout<<endl<<"Acc name:"<<account_holder_name;
        cout<<endl<<"balance"<<balance;
    }
};
int main(){
    class accountHolder c[3];
    for(int i=0;i<3;i++){
        c[i].setAccHolder();
    }
    for(int i=0;i<3;i++){
        c[i].getAccHolder();
    }
    return 0;
}