#include <iostream>

class Computer {
private:// Encapsulated attribute
  int password;
  
public:
  double price;

  int getPassword() {
    return password;
  }

  void setPassword(int new_password) { //Mutator method
    password = new_password;
  }
};

int main()
{
  Computer dell;
  
  dell.price = 469.99;

  // Uncomment the line below to see the error
  // dell.password = 12345;

  dell.setPassword(12345);
  std::cout << dell.getPassword();

  return 0;
}
