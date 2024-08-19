// C++ program to check number is positive, negative or zero.

#include<iostream>
using namespace std;


int main(){

    int num;

    cout<<"Enter a Number:";
    cin>>num;

    if (num<0)
    {
        /* code */
        cout<<"Negative Number";
    }
    else if (num>0)
    {
        /* code */
        cout<<"Positve number";

    }
    else if (num==0)
    {
        /* code */
        cout<<"You entered Zero";

    }
    else{
        cout<<"Wrong input";
    }
    
    
return 0;

}