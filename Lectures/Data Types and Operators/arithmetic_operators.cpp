//1. Arithmetic Operators

#include <iostream>
using namespace std;
 
int main ()
{
   // Variable declaration
   int a = 21;
   int b = 10;
   int c ;
 
   // Addition
   c = a + b;
   cout << "a + b = " << c << endl;
 
   // Subtraction
   c = a - b;
   cout << "a - b = " << c << endl ;
 
   // Multiplication
   c = a * b;
   cout << "a * b = " << c << endl ;
 
   // Division
   c = a / b;
   cout << "a / b = " << c << endl ;
 
   // Modulus
   c = a % b;
   cout << "a % b = " << c << endl ;
 
   // c = a++;  // Invalid
   // c = a--;  // Invalid
 
   return 0;
}
