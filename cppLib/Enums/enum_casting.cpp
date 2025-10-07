using namespace std;
#include <iostream>

enum class Color {
  Red = 1,
  Green = 2,
  Blue = 3
};

int main() {
  Color favoriteColor = Color::Green;

  int colorValue = static_cast<int>(favoriteColor);
  cout << "Color value as integer: " << colorValue << endl;


  int userChoice = 1;
  Color userColor = static_cast<Color>(userChoice);

  if (userColor == Color::Red) {
    cout << "User chose Red." << endl;
  } else {
    cout << "User chose a different color." << endl;
  }

  return 0;
}
