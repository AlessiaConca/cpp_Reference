
/* Demonstrating inout parameters in C++ */

// include necessary headers
#include <iostream> // for std::cout and std::endl


int main() {

    // Output to console
    std::cout << "Hello World!\n";
    std::cout << "Insert number " << 10 << " in this phrase.";

    // Input from console
    int x, y;
    std::cin >> x >> y;
    std::cout << "You entered " << x << " and " << y;
    
    return 0;
}
