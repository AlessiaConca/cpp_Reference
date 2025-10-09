#include "Device.hpp"
#include <iostream>
using namespace std;

int main() {
  Device device1;
  cout << "Model: " << device1.model << endl;
  cout << "Battery: " << device1.battery << endl;

  Device device2{};
  cout << "Model: " << device2.model << endl;
  cout << "Battery: " << device2.battery << endl;

  Device device3;
  cout << "Model: " << device3.model << endl;
  cout << "Battery: " << device3.battery << endl;

  return 0;
}
