// C++ program to check alphabets using conditional operator.

#include<iostream>
using namespace std;


int main(){
    char str1;

    cout<<"Enter any character:";
    cin>>str1;

    cout<<"It is "<<(((str1>='a' && str1<='z') || (str1>='A' && str1<='Z'))? "alphabet":"not alphabet");
return 0;

}