#include <string>
#include <iostream>

// Anonymous namespace
namespace {
  // This helper function is only visible in this file
  std::string formatDebugMessage(const std::string& msg) {
    return "[DEBUG] " + msg;
  }
}

int main() {
  std::string message = "App started!";
  std::cout << formatDebugMessage(message) << std::endl;
  return 0;
}
