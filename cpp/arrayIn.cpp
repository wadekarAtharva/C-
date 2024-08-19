//  Take Inputs from User and Store Them in an Array
#include<iostream>
using namespace std;

int main(){

    int number[5];

    cout<<"Enter 5 Number: "<<" ";
    
    //  store input from user to array
    for(int i=0;i<5;i++){
        cin>>number[i];

    }

    cout<<"The number are: ";

    //printing a array
    for (int n = 0; n< 5; n++)
    {
        cout<<number[n]<<" ";
    }
    



}
