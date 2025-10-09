#include <iostream>
#include <stdexcept>
#include "NetworkConnection.hpp"

int main() {
    try {
        NetworkConnection nc(true);
    }
    catch (const std::exception& e) {
        std::cout << "Error while creating NetworkConnection: " << e.what() << std::endl;
    }

    return 0;
}
