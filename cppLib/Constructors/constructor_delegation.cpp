#include <string>
#include <iostream>

class Person {
public:
  std::string name;
  int age;

  Person(const std::string& name, int age) : name(name), age(age) {}

  // Delegating constructor
  Person(const std::string& name) : Person(name, 30) {}
};

int main() {
  Person p1("Alice", 30);
  Person p2("Bob");
} 
