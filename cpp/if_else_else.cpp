//if...else if...else

#include <iostream>
using namespace std;

int main() {
   
    int n;
    cout<<"Enter a number:";
    cin>>n;

    if(n>0){
        cout<<"Positive number";
    }
    else if(n<0){
        cout<<"negative number";

    }
    else{
        cout<<"NUmber is Zero";
    }

}