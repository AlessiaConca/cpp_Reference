/*This program shows the usage of if else statement*/

#include <iostream>
#include <string>

int main() {
  
   int temperature = 60;
  
    if (temperature < 65) {
        std::cout << "Too cold!";
    }
    else if (temperature > 75) {
        std::cout << "Too hot!";
    }
    // brackets may be omitted
    else	
        std::cout << "Just right...";

    // no brackets version
    if (temperature < 65) std::cout << "Too cold!";
    else if (temperature > 75) std::cout << "Too hot!";
    else std::cout << "Just right...";

    // shorthand
    int time = 10;
    std::string greeting = (time < 12) ? "Good morning" : "Good afternoon";
    // greeting becomes "Good morning"
  
     return 0;
}

