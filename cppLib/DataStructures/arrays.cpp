#include <iostream>

int main () {  
  
  char grade[5] = {'A', 'B', 'C', 'D', 'F'};
  std::cout << grade[0] << "\n";    // Outputs: A
  grade[0] = 'S';
  std::cout << grade[0] << "\n";    // Now outputs S instead of A


  int table[3][5] = {
    {0, 1, 2, 3, 4} ,      /* initializers for first row */
    {5, 6, 7, 8, 9} ,      /* initializers for second row */
    {10, 11, 12, 13, 14}   /* initializers for third row */
  };
  std::cout << table[2][1] << "\n";    // Output: 11



  int fibonacci[5] = {0, 1, 1, 2, 3};
for (int i = 0; i < 5; i++) {
  std::cout << fibonacci[i];
} // Outputs: 01123
std::cout << "\n";

char game[3][3] = {
  {'x', 'o', 'o'} , 
  {'o', 'x', 'x'} , 
  {'o', 'o', 'x'}  
};
 
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    std::cout << game[i][j];
  }
  std::cout << "\n";
}


  return 0;
}


