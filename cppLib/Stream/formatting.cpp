using namespace std;
#include <iostream>

int main() {
  double pi = 3.14159;
  int value = 255;

  // Format float using fixed-point notation
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << "Fixed-point: " << pi << endl;

  // Format integer as hexadecimal
  cout.setf(ios::hex, ios::basefield);
  cout << "Hexadecimal: " << value << endl;

  // Reset format using flags()
  cout.flags(ios::fixed);  // Replaces all flags with fixed format
  cout << "Flags fixed-point: " << pi << endl;

  return 0;
}
