#include <iostream>
using namespace std;


struct Person
{
    char name[50];
    int age;
    float salary;

};

int main(){

    Person p1;  //--->p1 variable of Person

    cout<<"Enter your name: ";
    cin.get(p1.name,50);  //--->p1.name --- to access

    cout<<"Enter your age: ";
    cin>>p1.age;

    cout<<"Enter your Salary: ";
    cin>>p1.salary;


    cout<<"\nDisplaying the information:"<<endl;
    cout<<"Name: "<<p1.name<<endl;
    cout<<"Age: "<<p1.age<<endl;
    cout<<"Salary: "<<p1.salary<<endl;

}