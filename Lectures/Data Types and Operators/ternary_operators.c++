//5. Ternary Operator

#include <iostream>
using namespace std;
 
int main()
{
   int a, b;
 
   a = 10;
   /* Check the boolean condition */
   (a == 1) ? cout << "a is 1" : cout << "a is not 1";
   cout << endl;
 
   b = 20;
   /* If condition is true ? then followed by : (else)*/
   (a == b) ? cout << "Line 1 - a is equal to b" << endl 
            : cout << "Line 1 - a is not equal to b" << endl ;
 
   /* condition ? if true : if false */
   (a == b) ? (cout << "Line 2 - a is equal to b") 
            : (cout << "Line 2 - a is not equal to b");
   cout << endl ;
 
   /* Prints "Condition is true" if 'a' is less than 0 */
   (a < 0) ? cout << "Condition is true" << endl 
   	   : cout << "Condition is false" << endl;
 
 
   (a > b) ? cout << "Line 4 - a is greater than  b" << endl 
   	   : cout << "Line 4 - a is not greater than  b" << endl ;
 
   /* Nested ? : conditions */
   (a == 1) ? cout << "Line 5 - a is equal to 1" 
   	   : (b == 1) ? cout << "Line 5 - b is equal to 1" 
   	   : cout << "Line 5 - Neither a is equal to 1 nor b is equal to 1";
   cout << endl ;
 
   return 0;
}