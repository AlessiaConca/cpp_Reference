#include <iostream>
#include <stdexcept>

int readScore(int score) {
  if (score < 0) {
    throw std::invalid_argument("Score cannot be negative");
  } else if (score > 100) {
    throw std::out_of_range("Score cannot exceed 100");
  }
  return score;
}

int main() {
  try {
    int result = readScore(-10);
    std::cout << "Score read: " << result << std::endl;
  } catch (const std::exception& error) {
    std::cout << "Exception caught: " << error.what() << std::endl;
  }

  try {
    int result = readScore(150);
    std::cout << "Score read: " << result << std::endl;
  } catch (const std::exception& error) {
    std::cout << "Exception caught: " << error.what() << std::endl;
  }

  return 0;
}
