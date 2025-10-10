#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <memory>

int main() {
  std::cout << "=== Exercise 2: Basic Lambda ===\n";
  int factor = 2;
  auto multiply = [factor](int inputValue) -> int {
    return inputValue * factor;
  };
  std::cout << "multiply(5) = " << multiply(5) << "\n\n";

  std::cout << "=== Exercise 3: Capturing ===\n";
  int firstValue = 5;
  int secondValue = 10;
  auto sum = [=]() {
    return firstValue + secondValue;
  };
  std::cout << "sum() = " << sum() << "\n";

  int counterOne = 5;
  int counterTwo = 10;
  auto incrementCounters = [&]() {
    counterOne += 1;
    counterTwo += 1;
  };
  incrementCounters();
  std::cout << "counters after increment: " << counterOne << ", " << counterTwo << "\n";

  int baseValue = 3;
  int multiplier = 4;
  auto computeProduct = [baseValue, &multiplier]() {
    multiplier += 2;
    return baseValue * multiplier;
  };
  std::cout << "computeProduct() = " << computeProduct() << ", multiplier = " << multiplier << "\n\n";

  std::cout << "=== Exercise 4: Generic Lambdas ===\n";
  auto printTwice = [](auto value) {
    std::cout << value << " " << value << "\n";
  };
  printTwice(42);
  printTwice("hello");

  auto add = [](auto first, auto second) {
    return first + second;
  };
  std::cout << "add(3, 4) = " << add(3, 4) << "\n";
  std::cout << "add(2.5, 1.2) = " << add(2.5, 1.2) << "\n\n";

  std::cout << "=== Exercise 5: Reusing Lambdas ===\n";
  std::function<int(int, int)> addTwoValues = [](int leftOperand, int rightOperand) {
    return leftOperand + rightOperand;
  };
  std::cout << "addTwoValues(3, 4) = " << addTwoValues(3, 4) << "\n";

  auto performOperation = [](int a, int b, std::function<int(int, int)> operation) {
    std::cout << "Result: " << operation(a, b) << "\n";
  };
  performOperation(10, 5, [](int x, int y) { return x - y; });

  std::vector<int> numbers = {1, 2, 3, 4, 5};
  std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int x) {
    return x * 2;
  });
  std::cout << "numbers after transform: ";
  for (int n : numbers) std::cout << n << " ";
  std::cout << "\n\n";

  std::cout << "=== Exercise 6: Capture Initializers ===\n";
  int score = 100;
  auto discountedDisplay = [discounted = score * 0.8]() {
    std::cout << "Discounted score: " << discounted << "\n";
  };
  discountedDisplay();

  std::unique_ptr<int> ptr = std::make_unique<int>(42);
  auto showValue = [movedPtr = std::move(ptr)]() {
    std::cout << "Unique ptr value: " << *movedPtr << "\n";
  };
  showValue();

  return 0;
}