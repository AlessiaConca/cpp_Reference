#include <iostream>
#include <stdexcept>

void validatePlayerHealth(int health) {
  try {
    if (health < 0) {
      throw std::runtime_error("Health cannot be negative!");
    }
  } catch (const std::exception& e) {
    std::cout << "Error in validatePlayerHealth" << std::endl;
    throw;
  }
}

int main() {
  try {
    validatePlayerHealth(-5);
  } catch (const std::exception& e) {
    std::cout << "Caught in main: " << e.what() << std::endl;
  }
  return 0;
}
