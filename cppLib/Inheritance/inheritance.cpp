#include <iostream>

// Base class
class Animal {
private:
  std::string gender;
  int age;

public:
  Animal(std::string new_gender, int new_age)
    : gender(new_gender), age(new_age) {}
};

// Derived class
class Dog: public Animal  {
private:
  std::string breed;

public:
  // Call base class constructor
  Dog(std::string new_gender, int new_age, std::string new_breed)
    : Animal(new_gender, new_age), breed(new_breed) {}

  void sound() {
    std::cout << "Woof\n";
  }
};

int main() {
  // Calls Dog(string, int, string) constructor
  Dog buddy("male", 8, "Husky");
  
  // Output: Woof
  buddy.sound();

  return 0;
}


/*
When declaring a derived class, the base class may be inherited through three different types of inheritance:

Public Inheritance: The access specifiers of the base class members stay the same in the derived class. This is the most commonly used type of inheritance.
Protected Inheritance: public and protected members of the base class become protected members of the derived class.
Private Inheritance: All base class members become private members of the derived class.
*/