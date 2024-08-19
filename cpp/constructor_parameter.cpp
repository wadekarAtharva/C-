#include<iostream>
using namespace std;


//declare a class
class Room{
    private:
    double length;
    double height;

    public:
    //we create constructor with parameter
    Room(double len,double hgt){
        length=len;
        height=hgt;
    }

    double calculateArea(){
        return length*height;

    }
};
int main(){
// create object and initialize data members
 Room room1(10.0,10);
 Room room2(20.0,20);

cout << "Area of Wall 1: " << room1.calculateArea() << endl;
cout << "Area of Wall 2: " << room2.calculateArea();



}