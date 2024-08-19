// C++ program to check leap year using conditional Operator.

#include<iostream>
using namespace std;


int main(){
    int year,leap;


    cout<<"Enter a year to check (leap year):";
    cin>>year;

    (year%4==0 && year%100!=0)? cout<<"Leap Year" : (year%400 ==0 ) ? cout << "Leap year" : cout<< year << " is not leap year" ;

    
return 0;

}