#include<iostream>
using namespace std;


int main(){
 // declare an int pointer
    int* pointInt;
 // declare an float pointer
    float* pointFloat;

    // allocate memory 
    pointInt=new int;
    pointFloat= new float;

    // assign values 
    *pointInt=45;
    *pointFloat=45.5;

    cout << *pointInt << endl;
  cout << *pointFloat << endl;

//   dealloacte

delete pointInt;
delete pointFloat;




}