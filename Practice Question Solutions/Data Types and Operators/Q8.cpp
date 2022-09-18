/*
This program was written by Munem Hashmi.
*/
/*
Write a C++ program that asks the user to input an integer value, and outputs the value in exponential notation:
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int input;

    cout << "Enter an integer: ";
    cin >> input;

    cout << input << " in exponential notation is " << pow(10, input) << endl;
    
    return 0;
}