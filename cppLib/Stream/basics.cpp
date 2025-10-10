using namespace std;
#include <iostream>

int main() {
  int age;
  cout << "Enter your age: ";
  cin >> age;

  if (cin.good()) {
    cout << "Your age: " << age << endl;
  } else if (cin.fail()) {
    cout << "Invalid input!" << endl;
  }

  return 0;
}
