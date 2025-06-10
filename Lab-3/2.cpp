#include<iostream>
using namespace std;

struct employee{
    char name[50];
    int id;
    char address[50];
    int isHead=0;
};

struct department{
    char name[50];
    struct employee e[5];
};


int main(){

    struct department d[3];
    for(int i=0;i<3;i++){
        cout<<endl<<"Department name "<<i+1;
        cin>>d[i].name;
        cout<<"input employee information";
        for(int j=0;j<5;j++){
            cout<<"Enter name:";
            cin>>d[i].e[j].name;
            cout<<"Enter id";
            cin>>d[i].e[j].id;
            cout<<"Enter address:";
            cin>>d[i].e[j].address;
            cout<<"is head then type 1";
            cin>>d[i].e[j].isHead;
        }
    }

    cout<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            if(d[i].e[j].isHead==1){
                cout<<"name:"<<endl;
                cout<<d[i].e[j].name;
            }
        }
    }

    return 0;
}