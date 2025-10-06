#include <iostream>

// Create a void function
void printTitle() {
  std::string msg = "Codecademy\n";
  std::cout << msg;
}

// Create a function that returns a double
double valueOfPi() {
  return 3.1415;
}

int main()
{
  printTitle(); // Function call
    
  double pi = valueOfPi();  // Function call
    
  std::cout << pi;
  // Uncomment the line below to see the error message
  // std::cout << msg;	

  return 0;
}