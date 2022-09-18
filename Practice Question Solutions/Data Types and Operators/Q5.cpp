/*
This program was written by Munem Hashmi.
*/
/*
Write a program that asks the user to input an angle in degrees, and outputs the sine, cosine, and tangent of that angle.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double angle;

    cout << "Enter an angle (in degrees): ";
    cin >> angle;

    cout << "The sine of " << angle << " degrees is " << sin(angle*M_PI/180) << endl;
    cout << "The cosine of " << angle << " degrees is " << cos(angle*M_PI/180) << endl;
    cout << "The tangent of " << angle << " degrees is " << tan(angle*M_PI/180) << endl;

    return 0;
}