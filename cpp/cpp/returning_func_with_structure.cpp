// Returning structure from function in C++
#include <iostream>
using namespace std;

struct Person {
    char name[50];
    int age;
    float salary;
};

Person getData(Person); //--->function of structure
void displayData(Person); 

int main() {

    Person p, temp; //--->two variable of structure

    temp = getData(p);
    p = temp;
    displayData(p);

    return 0;
}

Person getData(Person p) {   //defining func of structure

    cout << "Enter Full name: ";
    cin.get(p.name, 50);

    cout << "Enter age: ";
    cin >> p.age;

    cout << "Enter salary: ";
    cin >> p.salary;

    return p;
}

void displayData(Person p) {
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}