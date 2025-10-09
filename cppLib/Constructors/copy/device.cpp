#include "Device.hpp"

Device::Device(string m, int b) {
  model = m;
  battery = b;
}

Device::Device(const Device& other) {
  model = other.model;
  battery = other.battery;
}
