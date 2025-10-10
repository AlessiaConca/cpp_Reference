using namespace std;
#include <fstream>
#include <iostream>

int main() {
  int numbers[] = {1, 2, 3, 4, 5};
  int size = sizeof(numbers) / sizeof(numbers[0]);

  ofstream file("data.csv");

  if (file.is_open()) {
    for (int i = 0; i < size; ++i) {
      file << numbers[i];
      if (i != size - 1) file << ",";
    }
    file.close();
  }

  // we can also use flags to append to a file
  // log.txt contains string "Hello World!"
    ofstream outFile("log.txt", ios::app);
    if (outFile.is_open()) {
    outFile << "Appended log entry.\n";
    outFile.close();
    }


  return 0;
}


/*
These are flags inherited from the ios base class:

ios::app: Append to the file. All output is written at the end of the file, preserving existing content.
ios::binary: Use binary mode. Opens the file in binary mode, so data is read and written as raw bytes with no translation.
ios::trunc: Truncate existing content. This is the default if ios::out is used without ios::app.
ios::out: Open for output (default for ofstream). Opens the file for writing; if no other mode is specified, it may overwrite the file.
We specify the open mode when constructing the ofstream object.
*/