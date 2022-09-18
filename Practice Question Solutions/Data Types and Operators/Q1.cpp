/*
This program was written by Munem Hashmi.
*/
/*
Write a C++ program that asks the user to input two integer values, and outputs the sum, difference, product, and quotient of those values:
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, sum, difference, product, quotient;

    cout << "Enter two integer values: ";
    cin >> a >> b;

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;

    cout << "The sum is " << sum << endl;
    cout << "The difference is " << difference << endl;
    cout << "The product is " << product << endl;
    cout << "The quotient is " << quotient << endl;

    return 0;
}