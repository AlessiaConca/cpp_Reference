#include <functional>
#include <iostream>

void performOperation(int a, int b, std::function<int(int, int)> operation) {
  std::cout << "Result: " << operation(a, b) << std::endl;
}

std::function<int(int, int)> addTwoValues = [](int leftOperand, int rightOperand) {
  return leftOperand + rightOperand;
};

int main() {

  std::cout << addTwoValues(3, 4);

  performOperation(10, 5, [](int x, int y) { return x - y; });

}




