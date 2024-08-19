#include<iostream>
using namespace std;

int main(){

    int arr[5]={ 8,9,65,75,75};

    cout<<"The Numbers are using ranged for loop: ";

    //Printing An Array using loop
    //Ranged for loop

    for(int &n :arr){
        cout<<n<<" ";

    }
    cout<<endl;

    cout<<"The Numbers are using normal for loop: ";
    //using normal for loop
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    //using while loop
    int i=0;
    cout<<"The Numbers are using while loop: ";
    while(i<5){
        cout<<arr[i]<<" ";
        i++;

    }
}