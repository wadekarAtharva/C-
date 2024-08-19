// Sum of Positive Numbers Only

#include <iostream>
using namespace std;

int main()
{

    int n = 0;
    int sum = 0;

    cout << "enter a number: ";
    cin >> n;

    do
    {
        sum += n;
        cout << "enter a number: ";
        cin >> n;
    }
    while (n>=0);
        cout << "\nThe sum is " << sum << endl;
    
    
}