#include <iostream>
#include <string>

class School {
public:
  std::string name;
  int age;
  
  void banner() {
    std::cout << name << " is " << age << " years old.\n";
  }
};

int main()
{
  School codecademy;
  codecademy.name = "Codecademy";
  codecademy.age = 10;
  codecademy.banner();
  
  School harvard;
  harvard.name = "Harvard";
  harvard.age = 385;
  
  School yale;
  yale.name = "Yale";
  yale.age = 319;
  
  harvard.banner();
  yale.banner();

  return 0;
}
