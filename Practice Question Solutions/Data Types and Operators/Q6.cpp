/*
This program was written by Munem Hashmi.
*/
/*
Write a program that asks the user to input an angle in radians, and outputs the sine, cosine, and tangent of that angle.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double rad, sinx, cosx, tanx;

    cout << "Enter angle in radians: ";
    cin >> rad;

    sinx = sin(rad);
    cosx = cos(rad);
    tanx = tan(rad);

    cout << "Sine: " << sinx << endl;
    cout << "Cosine: " << cosx << endl;
    cout << "Tangent: " << tanx << endl;

    return 0;
}