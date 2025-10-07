#include "FlyingCar.hpp"

int main() {
  Aircraft* firstFlyingCar = new FlyingCar();
  firstFlyingCar -> fly(200);
  Car* secondFlyingCar = new FlyingCar();
  secondFlyingCar -> drive(50);
  delete firstFlyingCar;
  delete secondFlyingCar;
  return 0;
}