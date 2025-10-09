#include <iostream>
using namespace std;

class Device {
public:
  string model;
  int battery;

  Device(string m, int b);

  Device(const Device& other);
};
