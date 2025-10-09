#include "Device.hpp"

int main() {
  Device originalDevice("Phone", 90);

  Device copiedDevice = originalDevice;

  cout << "Original: " << originalDevice.model << ", Battery: " << originalDevice.battery << endl;
  cout << "Copied: " << copiedDevice.model << ", Battery: " << copiedDevice.battery << endl;

  copiedDevice.battery = 50;

  cout << "Original (After Update): " << originalDevice.model << ", Battery: " << originalDevice.battery << endl;
  cout << "Copied (After Update): " << copiedDevice.model << ", Battery: " << copiedDevice.battery << endl;
  
  return 0;
}
