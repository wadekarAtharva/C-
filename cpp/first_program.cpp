/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   
   int n;
   cin>>n;
   
   int row=1;
   
   while(row<=n){
       int space=n-row;
       while(space){
           cout<<" ";
           space=space-1;
       }
       int col=1;
       while(col<=row){
           cout<<"*";
           col=col+1;
           
       }
       cout<<endl;
       row=row+1;
   }
}