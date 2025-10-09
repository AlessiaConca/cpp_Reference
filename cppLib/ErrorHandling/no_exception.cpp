#include <iostream>
#include <stdexcept>

void logConnectionStatus(const char* statusMessage) noexcept {
  std::cout << "Connection Status: " << statusMessage << std::endl;
}

constexpr bool isConnectionSecure = true;

void establishConnection() noexcept(isConnectionSecure) {
  if (!isConnectionSecure) {
    throw std::runtime_error("Insecure connection attempt blocked!");
  }
  std::cout << "Connection established securely." << std::endl;
}

int main() {
  logConnectionStatus("Initializing connection");
  try {
    establishConnection();
  } catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}