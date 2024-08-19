// declare function to display marks of each student
// take a 1d array as parameter

#include <iostream>
using namespace std;

void displayArr(int m[5])
{

    cout << "Displaying marks:" << endl;

    // displaying the marks
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << ":" << m[i] << endl;
    }
}
int main()
{

    // declare and initialize an array
    int marks[5] = {85, 75, 96, 57, 26};

    // call display function
    // pass array as argument
    displayArr(marks);
}