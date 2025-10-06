/*This programme exemplifies basic polymorphism*/

/*Polymorphism allows a derived class to override methods 
inherited from its base class. Although they have the same 
function signature, the C++ compiler will resolve function 
execution depending on the type of object that invokes the 
function.*/

#include <iostream>

class Animal {
public:
  void action() {
    std::cout << "The animal does something.\n";
  }
};

class Fish: public Animal {
public:
  void action() {
    std::cout << "Fishes swim.\n";
  }
};

class Bird: public Animal {
public:
  void action() {
    std::cout << "Birds fly.\n";
  }
};

int main() {
  Animal newAnimal;
  Fish newFish;
  Bird newBird;

  newAnimal.action();
  newFish.action();
  newBird.action();

  return 0;
}