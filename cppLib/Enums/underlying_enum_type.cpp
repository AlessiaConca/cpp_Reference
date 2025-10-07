#include <iostream>

using namespace std;

enum class StatusCode: unsigned char {
  SUCCESS = 'S',
  WARNING = 'W',
  ERROR   = 'E'
};

int main() {
  StatusCode code = StatusCode::WARNING;

  cout << "Size of StatusCode: " << sizeof(StatusCode) << " byte(s)" << endl;
  cout << "Size of int: " << sizeof(int) << " byte(s)" << endl;

  unsigned char codeValue = static_cast<unsigned char>(code);
  cout << "Underlying value of code (as unsigned char): " << codeValue << endl;
  cout << "Character representation: " << codeValue << endl;
  cout << "Integer representation: " << static_cast<int>(codeValue) << endl;

  return 0;
}
