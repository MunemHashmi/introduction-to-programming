/*
This program was written by Munem Hashmi.
*/
/*
Write a C++ program that asks the user to input two real values, and outputs the sum, difference, product, and quotient of those values:
*/

#include <iostream>
using namespace std;

int main()

{
    double n1, n2, sum, difference, product, quotient;

    cout << "Please input two real values:" << std::endl;
    cin >> n1;
    cin >> n2;

    sum = n1 + n2;
    difference = n1 - n2;
    product = n1 * n2;
    quotient = n1 / n2;

    cout << "The sum of the values is: " << sum << endl;
    cout << "The difference of the values is: " << difference << endl;
    cout << "The product of the values is: " << product << endl;
    cout << "The quotient of the values is: " << quotient << endl;

    return 0;
}