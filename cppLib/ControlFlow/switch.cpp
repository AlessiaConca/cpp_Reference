/*This code demonstrates the usage of switch statements*/

/* the switch statement is also more optimized than 
the original if statement because the expression is only 
evaluated once. */

#include <iostream>

int main() {
  
   int day = 4;
   switch (day) {
     case 1:
       std::cout << "Monday";
       break;
     case 2:
       std::cout << "Tuesday";
       break;
     case 3:
       std::cout << "Wednesday";
       break;
     case 4:
       std::cout << "Thursday";
       break;
     case 5:
       std::cout << "Friday";
       break;
     case 6:
       std::cout << "Saturday";
       break;
     case 7:
       std::cout << "Sunday";
       break;
     default:
       std::cout << "Invalid day";
   }
  
   return 0;
}