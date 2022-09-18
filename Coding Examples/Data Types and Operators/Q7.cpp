/*
This program was written by Munem Hashmi.
*/
/*
Write a program that asks the user to input an integer value, and outputs the value in binary, octal, and hexadecimal.
*/

#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter an integer: ";
    cin >> x;
    
    cout << "The value in binary is: ";
    for (int i = 31; i >= 0; i--)
        cout << ((x >> i) & 1U);
    cout << endl
         << "The value in octal is: " << oct << x << endl;
    cout << "The value in hexadecimal is: " << hex << x << endl;
    
    return 0;
}