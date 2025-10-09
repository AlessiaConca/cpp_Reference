#include <iostream>
#include "LowBatteryException.hpp"

void checkBatteryLevel(int batteryLevel) {
  if (batteryLevel < 5) {
    throw LowBatteryException();
  }
  std::cout << "Battery level: " << batteryLevel << "%" << std::endl;
}

int main() {
  try {
    checkBatteryLevel(3);
  } catch (const LowBatteryException& e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}