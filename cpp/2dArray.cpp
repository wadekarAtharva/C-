// C++ Program to display all elements
// of an initialised two dimensional array

#include <iostream>
using namespace std;

int main(){

    int test[3][2]={

        {5,6},
        {8,4},
        {12,89}
    };

    for(int i = 0; i < 3; i++){
    
        for (int j = 0; j < 2; j++){
            cout<<"test[" <<i<< "]" "["<<j<<"]"<<test[i][j]<<endl;
        }
    }
    
}