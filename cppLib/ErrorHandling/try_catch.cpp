#include <iostream>
#include <string>

void loadGameLevel(const std::string& levelName) {
  if (levelName.empty()) {
    throw "Level name cannot be empty.";
  }
  if (levelName == "RestrictedArea") {
    throw 403;
  }
  if (levelName == "TestLevel") {
    throw false;
  }
  std::cout << "Loading level: " << levelName << std::endl;
}

int main() {
  std::string selectedLevel;
  try {
    loadGameLevel(selectedLevel);
  } catch (const char* msg) {
    std::cout << "Error: " << msg << std::endl;
  } catch (int errorCode) {
    std::cout << "Error Code: " << errorCode << std::endl;
  } catch (...) {
    std::cout << "An unknown error occurred while loading the level." << std::endl;
  }


  return 0;
}