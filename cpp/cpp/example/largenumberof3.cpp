//By if statement


#include<iostream>
using namespace std;


int main(){

int n1,n2,n3;

cout<<"Enter Three number:";
cin>>n1>>n2>>n3;

if(n1>=n2 && n1>=n3)
{
    cout<<"The largest is "<<n1;
}
if(n2>=n1 && n2>=n3)
{
    cout<<"The largest is "<<n2;
}if(n3>=n2 && n3>=n1)
{
    cout<<"The largest is "<<n3;
}

return 0;

}


//by if else

#include<iostream>
using namespace std;


int main(){
int n1,n2,n3;

cout<<"Enter Three number:";
cin>>n1>>n2>>n3;

if((n1 >= n2) && (n1 >= n3))
        cout << "Largest number: " << n1;
    else if ((n2 >= n1) && (n2 >= n3))
        cout << "Largest number: " << n2;
    else
        cout << "Largest number: " << n3;

return 0;

}

//by nested if

#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2) {
        if (n1 >= n3)
            cout << "Largest number: " << n1;
        else
            cout << "Largest number: " << n3;
    }
    else {
        if (n2 >= n3)
            cout << "Largest number: " << n2;
        else
            cout << "Largest number: " << n3;
    }

    return 0;
}