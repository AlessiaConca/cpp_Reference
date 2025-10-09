#include <iostream>
#include <cstring>
using namespace std;

class Note {
public:
  char* message;

  // Constructor
  Note(const char* msg) {
    std::cout << "Constructor called\n";
    message = new char[std::strlen(msg) + 1];
    std::strcpy(message, msg);
  }

  // Move Constructor
  Note(Note&& other) noexcept {
    std::cout << "Move Constructor called\n";
    message = other.message;
    other.message = nullptr;
  }

  // Destructor
  ~Note() {
    delete[] message;
  }

  // Prevent copying
  Note(const Note&) = delete;
  Note& operator=(const Note&) = delete;
};


int main() {
  Note originalNote("Hello");
  cout << "Original note before move:\n";
  if (originalNote.message)
    cout << "Message: " << originalNote.message << "\n";
  else
    cout << "Message: [null]\n";

  Note movedNote = std::move(originalNote);

  cout << "After move:\n";

  cout << "Original: ";
  if (originalNote.message)
    cout << originalNote.message << "\n";
  else
    cout << "[null]\n";

  cout << "Moved: ";
  if (movedNote.message)
    cout << movedNote.message << "\n";
  else
    cout << "[null]\n";

  return 0;
} 


/*
 Rule of Five. This rule states that if a class defines a destructor, copy constructor, 
 or copy assignment operator, it should also define a move constructor and move assignment 
 operator. By doing so, the class can prevent issues like memory leaks and double deletions 
 during copying, moving, and destruction.
 */