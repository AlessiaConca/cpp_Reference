#include <fstream>
#include <streambuf>
#include <iostream>
using namespace std;

int main() {
  ifstream file("input.txt");  //change to file path
  string text;
  streambuf* newBuf = file.rdbuf();
  cin.rdbuf(newBuf);

  if (file.is_open()) {
    cin >> text;
    cout << text;
    file.close(); 
  } else {
    cout << "Failed to open file." << endl;
  }

  return 0;
}