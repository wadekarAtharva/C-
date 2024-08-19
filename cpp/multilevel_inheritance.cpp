#include <iostream>
using namespace std;

class A{

    public:
    void display(){

        cout<<"base count display";

    }

};

class B:public A{};

class C:public B{};


int main(){
    C obj1;

    obj1.display();


}