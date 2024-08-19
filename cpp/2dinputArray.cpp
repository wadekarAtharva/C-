// Taking Input for Two Dimensional Array

#include <iostream>
using namespace std;

int main(){

    int num[3][2];

    cout<<"Enter 6 number: ";

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cin>>num[i][j];
     
        
       
        }
    }
     cout << "The numbers are: "<< endl;
    
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cout<<"num["<<i<<"]"<<"["<<j<<"]: " <<num[i][j]<<endl;
        }
    }
}