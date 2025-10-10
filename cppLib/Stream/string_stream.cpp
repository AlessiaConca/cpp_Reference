#include <iostream>
#include <sstream>
using namespace std;

int main() {
  stringstream userStream;
  int age;
  string name;
  
  userStream << 25 << "Alex";
  userStream >> age >> name;
  cout << "User: " << name << ", Age: " << age << endl;

  userStream.clear();
  userStream.str("32 Jamie");        
  userStream >> age >> name;
  cout << "Updated User: " << name << ", Age: " << age << endl;

  return 0;
}