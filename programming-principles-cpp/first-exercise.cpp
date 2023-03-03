#include "std_lib_facilities.h"
// this program converts miles to kilometers and is an exercise from page 261 of
// the book
int main() {
  int numberToConvert = 0;
  cout << "Input the number in miles:\n";
  cin >> numberToConvert;
  int numberInKilometers = numberToConvert * 1.609;
  cout << "Your conversion is " << numberInKilometers << " kilometers.\n";
}