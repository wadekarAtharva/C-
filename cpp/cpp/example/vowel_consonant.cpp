#include<iostream>
using namespace std;


int main(){
    char c;
    bool isLower ,isUpper;

    cout<<"Enter a alphabet:";
    cin>>c;


    isLower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

    isUpper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if (!isalpha(c))
    {
        cout<<"Error,Enter a alphabet";

    }
    else if (isLower || isUpper)
    {
       cout<<"Vowels";

    }
    else{
        cout<<"Consonant";
    }
    
    



return 0;

}