//declaring with parameter

#include<iostream>
using namespace std;

void displayNum(int n1,float n2){

    cout<<"Int number = "<<n1<<endl;
    cout<<"Float number = "<<n2<<endl;


}

int main (){

    int num=5;
    double num1=6.555;

    displayNum(num,num1);
}