/*
This program was written by Munem Hashmi.
*/
/*
Write a program that asks the user to input two integer values, and outputs the distance between those values in kilometers, miles, feet, and inches.
*/

#include <iostream>
using namespace std;

int main() 
{  
    int num1, num2;

    cout << "Enter 2 integer values";
    cin >> num1;
    cin >> num2;

    cout << "The integers input were: " << num1 << " and " << num2 << endl;

    int km = ( num1 + num2 ) / 2;
    cout << "The total distance in km is: " << km << endl;

    int mi = km * 0.6;
    cout << "The total distance in mi is: " << mi << endl;

    int ft = mi * 5280;
    cout << "The total distance in ft is: " << ft << endl;

    int in = ft * 12;
    cout << "The total distance in in is: " << in << endl;

    return 0;
}