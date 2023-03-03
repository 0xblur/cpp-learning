#include "std_lib_facilities.h"
// This program takes a number and indicates if It is odd or even.

int main() {
  // Variables
  int val1;

  // Main program
  
  // Input value
  cout << "Input a number: ";
  cin >> val1;
  
  // Define odd/even and outputs result

  if (val1 % 2 == 0) {
    cout << val1 << " is an even number.\n";
  } else {
    cout << val1 << " is an odd number.\n";
  }
}