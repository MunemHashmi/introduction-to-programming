//4. Bitwise Operators

#include <iostream>  
using namespace std;

int main() 
{ 
    // Initialize x and y as 7 and 15 
    int x = 7, y = 15; 
  
    // Calculates the no. with 3 set bits 
    // starting from right 
    cout << (y ^ (y >> 1)) << endl; 
  
    // Calculates the no. with 5 set bits 
    // starting from right 
    cout << (y ^ ((y >> 2) | (1 << 2))) << endl; 
  
    // Calculates the no. of set bits in y 
    cout << __builtin_popcount(y) << endl; 
  
    // Calculates the no. of set bits 
    // from right, in x 
    cout << x & ~(x - 1) << endl;
  
    // Swap the contents of x and y 
    x = x ^ y; 
    y = x ^ y; 
    x = x ^ y; 
  
    cout << "After Swap: "
         << " x = " << x
         << ", y = " << y; 
    return 0; 
}