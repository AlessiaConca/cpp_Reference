#include "FlyingCar.hpp"
#include <iostream>

using namespace std;

void FlyingCar::drive(int carSpeed) {
  speed = carSpeed;
  cout << "Flying car is driving at: " << carSpeed << " km/h" << endl;
}

void FlyingCar::stop() {
  speed = 0;
  cout << "Flying car is stopped" << endl;
}

void FlyingCar::fly(int aircraftHeight) {
  height = aircraftHeight;
  cout << "Flying car is flying high at " << aircraftHeight << " meters" << endl;
}

void FlyingCar::land() {
  height = 0;
  cout << "Flying car has landed" << endl;
}