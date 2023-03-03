#include "std_lib_facilities.h"
// this program takes two numbers, compares them, and make some operations
// between them
int main() {
  int vals[2];
  cout << "Enter your first number: ";
  cin >> vals[0];
  cout << "Enter your second number: ";
  cin >> vals[1];

  if (vals[0] > vals[1]) {
    cout << vals[0] << " is larger than " << vals[1] << "\n";
    cout << "The difference is: " << vals[0] - vals[1] << "\n";
    cout << "The ratio is: " << vals[0] / vals[1] << "\n";
  }

  if (vals[0] < vals[1]) {
    cout << vals[0] << " is smaller than " << vals[1] << "\n";
  }

  if (vals[1] > vals[0]) {
    cout << vals[1] << " is larger than " << vals[0] << "\n";
    cout << "The difference is: " << vals[1] - vals[0] << "\n";
    cout << "The ratio is: " << vals[1] / vals[0] << "\n";
  }

  if (vals[1] < vals[0]) {
    cout << vals[1] << " is smaller than " << vals[0] << "\n";
  }

  cout << "The sum is: " << vals[0] + vals[1] << "\n";
  cout << "The product is: " << vals[0] * vals[1] << "\n";
  // std::sort(std::rbegin(vals), std::rend(vals));
  // std::cout << vals[0] << " is larger than " << vals[1];
}