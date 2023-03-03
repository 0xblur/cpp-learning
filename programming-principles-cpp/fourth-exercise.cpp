#include "std_lib_facilities.h"
// This program takes three strings and sorts them in alphabetical order

void sortNames(string &val1, string &val2, string &val3);
int main() {
  // Variables
  string val1;
  string val2;
  string val3;

  // Main program
  cout << "Enter your first integer: "
       << "\n";
  cin >> val1;
  cout << "Enter your second integer: "
       << "\n";
  cin >> val2;
  cout << "Enter your third integer: "
       << "\n";
  cin >> val3;

  sortNames(val1, val2, val3);
  std::cout << "Numbers in order: " << val1 << ' ' << val2 << ' ' << val3
            << '\n';
}

// Sorting
void sortNames(string &val1, string &val2, string &val3) {
  // First string swap
  if (val1 > val2) {
    string temp = val1;
    val1 = val2;
    val2 = temp;
  }
  // Second string swap
  if (val2 > val3) {
    string temp = val2;
    val2 = val3;
    val3 = temp;
  }
}