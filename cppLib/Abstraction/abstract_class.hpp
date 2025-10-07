#include <iostream>
#include <string>
using namespace std;

class Animal { 
protected:
  string name;
public: 
  // Pure virtual function
  virtual void makeSound() = 0; 

  void setName(string newName);
  string getName();
}; 


/*
To create an abstract class in C++, we create an ordinary class and include at least one pure virtual function. 
A pure virtual function is a function only declared in a base class and not defined. Any class that inherits from 
the abstract base class must provide a definition for this function.


Abstract classes can inherit from other abstract classes. The pure virtual functions will be passed down 
and must be implemented in a final derived class. If a class inherits from an abstract base class and does 
not implement all pure virtual functions, it will itself be considered an abstract class.
*/