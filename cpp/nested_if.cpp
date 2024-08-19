#include <iostream>
using namespace std;

int main() {
   
   int n;
    cout<<"Enter a Number:";
    cin>>n;

//Outer if statemnet
    if(n=!0){
        if(n>0){
            cout<<"positve number";
        }
        else{
            cout<<"Negative number";

        }
    }
    //Outer else
    else{
        cout<<"The number enter is 0 ";
    }
    
}