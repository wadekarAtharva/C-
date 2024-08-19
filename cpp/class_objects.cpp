class Room {    //---> Class is created
    public:     //--->public for accessing easily
        double length;          //{
        double breadth;             //data memebers created
        double height;          //                  }


        //Functions created
        double calculateArea(){   
            return length * breadth;
        }

        double calculateVolume(){   
            return length * breadth * height;
        }

};

// synatx to declare object

// className objectVariableName;

// sample function
void sampleFunction() {
    // create objects
    Room room1, room2;  //--->Objects created of class Room
}

int main(){
    // create objects 
    Room room3, room4;
}
