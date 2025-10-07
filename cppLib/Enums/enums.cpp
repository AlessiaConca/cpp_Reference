#include <iostream> 
using namespace std; 

enum Color { 
  RED, 
  GREEN, 
  BLUE 
}; 

int main() { 
  Color myColor = GREEN; 
  
  if (myColor == RED) { 
    cout << "The color is RED." << endl; 
  } else if (myColor == GREEN) { 
    cout << "The color is GREEN." << endl; 
  } else if (myColor == BLUE) { 
    cout << "The color is BLUE." << endl; 
  }   
  return 0; 
} 
