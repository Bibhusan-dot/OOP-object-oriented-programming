/*There is a vacancy for a seasonal job. Applicants are qualified to apply for the job only if they
can lift at least 50 kg weight and are between 18 to 24 yrs of age. However, if the applicants
have more than 4 yrs of experience in the field, they can qualify even if they can lift just 35 kg
and are over 24 yrs of age. Write a program in C++ to input the information of applicants and
check if they meet the required credentials for the job.*/

#include<iostream>
using namespace std;

int main(){
    char name[100];
    int age;
    int weight;
    int experience;

    cout<<"Enter name:";
    cin>>name;
    cout<<"age";
    cin>>age;
    cout<<"experience";
    cin>>experience;
    cout<<"weight";
    cin>>weight;

    if(weight >= 50 && age>=18 && age<=24){
        cout<<name<<" is qualified";
    }
    else if(experience >= 4 && weight >=35 && age>=24){
        cout<<name<<"is qualified";
    }
    else{
        cout<<"is not qualified";
    }
    return 0;
}