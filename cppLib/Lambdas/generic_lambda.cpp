#include <iostream>
#include <string>
#include <functional>

template<typename Func>
void sampleTester(Func func) {
  func("Hello", 3);
  func(42, 2);
  func('*', 4);
}

int main() {
  auto repeatPrint = [](auto item, int count) {
    for (int i = 0; i < count; ++i) {
      std::cout << item << std::endl;
    }
  };

  sampleTester(repeatPrint);

  return 0;
}
