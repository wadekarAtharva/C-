// C++ program to print day name of week

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Num(1-7):";
    cin >> num;

    if (num == 1)
    {
        cout << "Monday";
    }
    else if (num == 2)
    {
        cout << "Tuesday";
    }
    else if (num == 3)
    {
        cout << "Tuesday";
    }
    else if (num == 4)
    {
        cout << "Wednesday";
    }
    else if (num == 5)
    {
        cout << "Thursday";
    }
    else if (num == 6)
    {
        cout << "Friday";
    }
    else
    {
        cout << "Sunday";
    }
    return 0;
}