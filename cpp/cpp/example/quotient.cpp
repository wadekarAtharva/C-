#include <iostream>
using namespace std;

int main(){

    int dividend,divisor,remainder,quotient;

    cout<<"Enter a dividend: " ;
    cin>>dividend;

    cout<<"Enter a divisor: ";
    cin>>divisor;

    remainder=dividend % divisor;
    quotient=dividend/divisor;

    
    cout<<"The reaminder is "<<remainder<<endl;
    cout<<"The quotient is "<<quotient<<endl;

}