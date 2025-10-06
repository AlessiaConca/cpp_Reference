#include <iostream>

using namespace std;

int main ()
{
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    std::cout << i;
  }
  
  std::cout << "\n";
  
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    std::cout << i;
  }
  
  return 0;
}
