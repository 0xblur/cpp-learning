#include "std_lib_facilities.h"

int main() {
  cout << "Enter the name of the person you want to write to: \n";
  string first_name;
  cin >> first_name;
  cout << "Dear " << first_name << ",\n";
  cout << "Hi, hope you are doing fine. I would like to talk to you about your "
          "friend. What was their name?: ";
  string friend_name;
  cin >> friend_name;
  cout << "Have you seen " << friend_name << " lately? \n";
  char friend_sex{0};
  cout << "Enter 'f' if female or 'm' if male:\n";
  cin >> friend_sex;

  if (friend_sex == 'm') {
    cout << "If you see " << friend_name << " please ask him to call me";
  }

  if (friend_sex == 'f') {
    cout << "If you see " << friend_name << " please ask her to call me\n";
  }

  cout << "Tell me the age of your friend: ";
  int age = '0';
  cin >> age;

  if (age <= 0 || age >= 110) {
    simple_error("You're kidding!");
  }
}