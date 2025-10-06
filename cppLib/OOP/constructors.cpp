#include <iostream>

using namespace std;

class House {
private:
  std::string location;
  int rooms;

public:
  // Constructor with default parameters
  House(std::string loc = "New York", int num = 5) {
    location = loc;
    rooms = num;
  } // see also member initializer list below

  void summary() {
    std::cout << location << " house with " << rooms << " rooms.\n";
  }
  
  // Destructor
  ~House() {
    std::cout << "Moved away from " << location << "\n";
  } //automatically called when object goes out of scope
};

int main()
{
  House default_house;	// Calls House("New York", 5)
  House texas_house("Texas");	// Calls House("Texas", 5)
  House big_florida_house("Florida", 10);	// Calls House("Florida", 10)

  default_house.summary();
  texas_house.summary();
  big_florida_house.summary();
  
  return 0;
}