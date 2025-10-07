#include <iostream>
#include <vector>
#include <string>

// Function Template
template <typename T>
T add(T a, T b) {
  return a + b;
}

// Class Template
template <typename T>
class Box {
public:
  Box(T value) : value(value) {}
  
  // Member function defined inside the class
  T getValue() const {
    return value;
  }

  // Member function defined outside the class
  void setValue(T val);

private:
  T value;
};

// Member function of class template defined outside
template <typename T>
void Box<T>::setValue(T val) {
  value = val;
}

// Explicit Template Arguments
template <typename T>
void printValue(T value) {
  std::cout << "Value: " << value << std::endl;
}

// Template Specialization
template <>
void printValue<std::string>(std::string value) {
  std::cout << "Specialized String Value: " << value << std::endl;
}

// Variadic Template
template <typename... Args>
void printAll(Args... args) {
  (std::cout << ... << args) << std::endl; // Parameter Pack Expansion
}

// Template Type Deduction Example
template <typename T>
T multiply(T a, T b) {
  return a * b;
}

int main() {
  // Function Template Example
  std::cout << "Addition (int): " << add(3, 7) << std::endl;
  std::cout << "Addition (double): " << add(3.5, 2.5) << std::endl;

  // Class Template Example
  Box<int> intBox(42);
  std::cout << "Box value (int): " << intBox.getValue() << std::endl;
  intBox.setValue(100);
  std::cout << "Updated Box value (int): " << intBox.getValue() << std::endl;

  Box<std::string> stringBox("Hello");
  std::cout << "Box value (string): " << stringBox.getValue() << std::endl;

  // Explicit Template Arguments Example
  printValue<int>(42);
  printValue<std::string>("Hello Templates!");

  // Template Specialization Example
  printValue("Specialization Example");

  // Variadic Template Example with Parameter Pack Expansion
  printAll(1, " apples, ", 2, " bananas, ", 3.5, " oranges.");

  // Template Type Deduction Example
  auto result = multiply(2.5, 4.0);
  std::cout << "Multiplication Result: " << result << std::endl;

  return 0;
}
