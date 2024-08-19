#include<iostream>
using namespace std;

//create a class
class Base{

    private:
    int pvt=1;

    protected:
    int pro=2;

    public:
    int pub=3;

    //function to access private
    int getPvt(){
     return pvt;
    }

};

//create a derived class

class publicDerived:public Base{

 // function to access protected member from Base
    public:
    int getPro(){
        return pro;
    }
};


int main(){

//create a object of derived class
publicDerived pub1;

cout<<"public="<<pub1.pub<<endl;
cout<<"private="<<pub1.getPvt()<<endl;    //here we get values from the function so we call them by function
cout<<"protected="<<pub1.getPro()<<endl;


}