// C++ program to check uppercase or lowercase alphabets.

#include<iostream>
using namespace std;


int main(){
    char ch;

    cout<<"Enter any character:";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<ch <<" is in lower case";
    }
    else  if(ch>='A' && ch<='Z'){
        cout<<ch <<" is in upper case";
    }
    else{
        cout<<"not a alphabet";

    }
return 0;

}