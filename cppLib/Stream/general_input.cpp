#include <iostream>
#include <string>
#include <limits>
using namespace std;

class User {
public:
  string name;
  int age;
};

// Read one User record from any istream
bool readUser(istream& in, User& result) {
  cout << "Enter your name, then your age: ";
  in >> result.name >> result.age;

  if (in.fail()) {
    cout << "Invalid data" << endl;
    in.clear();  
    in.ignore(1000, '\n');        
    return false;
  }

  // Peek ahead to see if more input is present
  int next = in.peek();
  if (next != EOF && next != '\n') {
    cout << "Extra characters detected after age.\n";
  }

  return true;
}


#include <sstream>

int main() {
  User currentUser;

  if (readUser(cin, currentUser)) {
    cout << "Hello, " << currentUser.name << endl;
    cout << "You are " << currentUser.age << " years old" << endl;
  }

  istringstream fake("Alice 30");
  if (readUser(fake, currentUser)) {
    cout << "Hello, " << currentUser.name << endl;
    cout << "You are " << currentUser.age << " years old" << endl;
  }
}
