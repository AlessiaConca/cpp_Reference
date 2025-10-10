#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream file("greetings.txt"); // change to file path
  string word;

  if (file.is_open()) {
    while (file >> word) {
      cout << word << " ";
    }
    file.close(); 
  } else {
    cout << "Failed to open file." << endl;
  }

  return 0;
}
