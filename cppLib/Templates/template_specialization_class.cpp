#include <iostream>
#include <string>

template <typename T> 
class Printer {
private:
  T value;
public:
  Printer(T mValue): value(mValue) {}
  void print() {
    std::cout << "Generic value: " << value << std::endl;
  }
};


// IN A SEPRATE .hpp:
// template <>
// class Printer<string> {
// private:
//   string value;
// public:
//   Printer(string mValue): value(mValue) {}
//   void print() {
//     std::cout << "Generic value: " << value << std::endl;
//   }
//   void specialFunction() {
//     std::cout << "Special function called!"  << std::endl;
//   }
// };


int main() {
  Printer<int> intPrinter(42);
  intPrinter.print();

//   Printer<string> stringPrinter("Hello, World!");
//   stringPrinter.print();
//   stringPrinter.specialFunction();

  return 0;
}