/*
This program was written by Munem Hashmi.
*/
/*
Write a program that asks the user to input a real value, and outputs the value in scientific notation.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double value;
    
    cout << " Enter a real value: ";
    cin >> value;

    cout << scientific << value;

    return 0;
}