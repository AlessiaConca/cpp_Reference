#include <string>
#include <iostream>

class Person {
public:
  std::string name;
  int age;

  Person(const std::string& name, int age) : name(name), age(age) {}
  Person() = default;  // Restore default constructor
};

int main() {
  Person person1("Alice", 30); // OK
  Person person2;              // OK
}
