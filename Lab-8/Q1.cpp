//(1) Make use of a friend class to access private data members of another class.

#include<iostream>
using namespace std;

class access;
class Person{
    private:
    int id;
    char name[50];

    public:
    friend
     class access;

    void setInfo(){
        cout<<"Enter id:";
        cin>>id;
        cout<<"Enter name:";
        cin>>name;
    }
};
class access{
    public:
    void getInfo(Person temp){
        cout<<"id :"<<temp.id<<" name:"<<temp.name;
    }
};
int main(){

    Person p1;
    p1.setInfo();
    access a1;

    a1.getInfo(p1);
    return 0;
}