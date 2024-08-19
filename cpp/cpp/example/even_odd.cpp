#include<iostream>
using namespace std;


int main(){

    int num;
    cout<<"Enter a number:";
    cin>>num;

    if(num>=0){
        if (num%2==0){
            cout<<"Even number"<<endl;
        }
        else{
            cout<<"Odd number"<<endl;

        }

    }
    else{
            cout<<"Enter a number greater than zero"<<endl;

    }
return 0;

}


// Check Whether Number is Even or Odd using ternary operators
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;
    
  (n % 2 == 0) ? cout << n << " is even." :  cout << n << " is odd.";
    
  return 0;
}