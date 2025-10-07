#include "Car.hpp"
#include "Aircraft.hpp"

class FlyingCar : public Aircraft, public Car {
private:
  int speed;
  int height;

public:
  void drive(int carSpeed) override;
  void stop() override;
  void fly(int aircraftHeight) override;
  void land() override;
};