// C++ Program to find the largest number among three number.

#include<iostream>
using namespace std;


int main(){
    int num1,num2,num3;

    cout<<"Enter 3 Numbers:";
    cin>>num1>>num2>>num3;

    if (num1>=num3 && num1>=num2){
        cout<<num1<<" is the largest number";
    }
    else if (num2>=num1 && num2>=num3)
    {
       cout<<num2<<" is the largest number";
    }
    else
    {
       cout<<num3<<" is the largest number";
    }
    

return 0;

}