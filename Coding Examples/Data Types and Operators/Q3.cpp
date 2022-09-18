/*
This program was written by Munem Hashmi.
*/
/*
Write a program that asks the user to input an integer value, and outputs the value in kilometers, miles, feet, and inches.
*/

#include <iostream>
using namespace std;

int main()
{
    int value;

    cout << "Please input an integer value: ";
    cin >> value;

    cout << "The value in kilometers is: " << value / 100000 << endl;
    cout << "The value in miles is: " << value / 160934 << endl;
    cout << "The value in feet is: " << value / 3048 << endl;
    cout << "The value in inches is: " << value / 2.54 << endl;

    return 0;
}