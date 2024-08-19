// Using public and private in C++ Class

#include <iostream>
using namespace std;


//Creation of class
class Room{

    private:

    double length;
    double height;
    double breadth;

    public:
    //making a function to access variable in private
    void getData(double len,double hgt,double brdt){
        length=len;
        height=hgt;
        breadth=brdt;

    }

    //create function to calculate
    double calculateArea(){
        return length*breadth;

    }

    double calculateVolume(){
        return length*breadth*height;
    }
};


int main(){
    //create a object
    Room room1;

    // pass the values of private variables as arguments
    room1.getData(10,10,10);

     cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;


}