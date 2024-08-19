#include<iostream>
#include<fstream>
using namespace std;


int main(){

    string st1;
    ifstream in("test.txt");
    getline(in,st1);
    cout<<st1;

    return 0;
    

}
