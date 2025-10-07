#include <iostream>

using namespace std;

template<typename T>
T getMax(T value1, T value2){
  if(value1 > value2) {
    return value1;
  } else {
    return value2;
  }
}

template <typename T, typename U>
bool areNumbersEqual(T num1, U num2) {
  return num1 == num2;
}


int main() {
  cout << "The maximum value is: " << getMax(5, 10) << endl;
  cout << "The maximum value is: " << getMax(3.5, 7.2) << endl;
  
   // Explicitly sets T to int and U to double
   bool result2 = areNumbersEqual<int, double>(5, 5.0);
   cout << "Are the numbers equal? " << (result2 ? "Yes" : "No") << endl;
  
  return 0;
}