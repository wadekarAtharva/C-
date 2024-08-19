// C++ program to find the sum of first n natural numbers
// positive integers such as 1,2,3,...n are known as natural numbers

#include <iostream>

using namespace std;

int main() {
    int n=5;
    int sum=0;  //initailize

    for(int i=1;i<=n;++i){
        sum+=i;
    }
    cout<<"Sum:"<<sum<<endl;

    


}