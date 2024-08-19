// Example 3: C++ string using string data type
#include <iostream>
using namespace std;

int main()
{
    // Declaring a string object
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  //--->getline() function takes the input stream as the first parameter which is cin and str as the location of the line to be stored.

    cout << "You entered: " << str << endl;
    return 0;
}