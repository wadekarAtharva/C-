//Display Sum and Average of Array Elements Using for Loop

#include<iostream>
using namespace std;

int main(){

    double arr1[]={10,10,10,10,10};

    double sum=0;
    double avg=0;
    double count=0;
cout<<"The number are ";
    for (double &i: arr1 )
    {
        cout<<i<<" ";
        sum+=i;

        ++count;
    }

    cout<<"\nThe sum is: "<<sum<<endl;

avg=sum/count;
cout<<"The average is: "<<avg;
    
}