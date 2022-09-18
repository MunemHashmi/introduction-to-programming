/*
This program was written by Munem Hashmi.
*/
/*
Write a C++ program that asks the user to input an integer value, and outputs the value plus 1, the value minus 1, the value squared, and the value divided by 3:
*/

#include <iostream>
using namespace std;

int main()
{
    int value;

    cout << "Enter an integer value: " << endl;
    cin >> value;

    cout << "Value plus 1: " << value + 1 << endl;
    cout << "Value minus 1: " << value - 1 << endl;
    cout << "Value squared: " << value * value << endl;
    cout << "Value divided by 3: " << value / 3 << endl;

    return 0;
}