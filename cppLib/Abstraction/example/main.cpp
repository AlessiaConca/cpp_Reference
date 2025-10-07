#include "FlyingCar.hpp"

int main() {
  int main() {
  // use pointer as the base method is virtual + do not lose derived behaviour + dunamic allocation
  Aircraft* firstFlyingCar = new FlyingCar(); // 'new' allocates memory for a FlyingCar object and calls its constructor, returning a pointer to Aircraft
  firstFlyingCar -> fly(200); // '->' is used to access the fly method through the pointer
  
  Car* secondFlyingCar = new FlyingCar(); // 'new' allocates memory for another FlyingCar object and calls its constructor, returning a pointer to Car
  secondFlyingCar -> drive(50); // '->' is used to access the drive method through the pointer
  
  delete firstFlyingCar; // 'delete' frees the memory allocated for the firstFlyingCar object and calls its destructor
  delete secondFlyingCar; // 'delete' frees the memory allocated for the secondFlyingCar object and calls its destructor
  
  return 0; // Return 0 to indicate successful program execution
}


