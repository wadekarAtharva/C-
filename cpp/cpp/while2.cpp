// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

#include <iostream>
using namespace std;

int main(){

    int num;
    int sum=0;

    cout<<"Enter a Number: ";
    cin>>num;

    while(num>=0){
        sum+=num;

        cout<<"Enter a number: ";
        cin>>num;

    }
    cout<<"\nThe Sum is "<<sum<<endl;
}