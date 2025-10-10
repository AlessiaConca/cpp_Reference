#include <iostream>
#include <memory>

int main() {
  int price = 200;
  auto showHalfPrice = [halfPrice = price / 2]() {
    std::cout << "Half price: " << halfPrice << std::endl;
  };
  showHalfPrice();

  // std::unique_ptr cannot usually be copied, only moved
  std::unique_ptr<int> numberPtr = std::make_unique<int>(55);
  auto printManagedValue = [movedValue = std::move(numberPtr)]() {
    std::cout << *movedValue << std::endl;
  };
  printManagedValue();

  return 0;
}


/*
The initializer uses std::move to transfer ownership into the lambda instead. 
This is especially helpful when writing performance-sensitive or resource-safe code that relies on lambdas.
*/