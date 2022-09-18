//3. Logical Operators

#include <iostream>
using namespace std;
 
int main ()
{
   // Local variable declaration:
   int a = 5;
   int b = 20;
 
   // check the boolean condition
   if( a && b )
   {
      // if condition is true then print the following
      cout << "Line 1 - Condition is true" << endl ;
   }
 
   if( a || b )
   {
      // if condition is true then print the following
      cout << "Line 2 - Condition is true" << endl ;
   }
 
   /* lets change the value of  a and b */
   a = 0;
   b = 10;
 
   if( a && b )
   {
      // if condition is true then print the following
      cout << "Line 3 - Condition is true" << endl ;
   }
   else
   {
      // if condition is false then print the following
      cout << "Line 3 - Condition is false" << endl ;
   }
 
   if( !(a && b) )
   {
      // if condition is true then print the following
      cout << "Line 4 - Condition is true" << endl ;
   }
 
   return 0;
}