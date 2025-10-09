#include <iostream>
#include <stdexcept>

// A simple custom exception that inherits from std::exception
class NegativeNumberException : public std::exception {
public:
  const char* what() const noexcept override {
    return "Negative numbers are not allowed here!";
  }
};

// A function that can throw different types of exceptions
int processNumber(int value) {
  if (value < 0) {
    // Throw our custom exception
    throw NegativeNumberException();
  } else if (value == 0) {
    // Throw a standard library exception
    throw std::runtime_error("Value cannot be zero.");
  }
  return 100 / value; // Could throw division-by-zero if value was zero
}

int main() {
  try {
    // This call will trigger our custom exception
    std::cout << "Result: " << processNumber(-5) << std::endl;
    
    // We won't reach this line because of the exception above
    std::cout << "Result: " << processNumber(0) << std::endl;
  } 
  catch (const NegativeNumberException& ex) {
    std::cout << "Caught custom exception: " << ex.what() << std::endl;
    // Rethrow if you want to handle it higher up:
    // throw;
  }
  catch (const std::exception& ex) {
    std::cout << "Caught standard exception: " << ex.what() << std::endl;
  }
  catch (...) {
    std::cout << "Caught an unknown exception!" << std::endl;
  }
  
  return 0;
}