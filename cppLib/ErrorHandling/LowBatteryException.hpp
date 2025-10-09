#ifndef LOW_BATTERY_EXCEPTION_H
#define LOW_BATTERY_EXCEPTION_H

#include <exception>

// Define a custom exception by inheriting from std::exception
class LowBatteryException : public std::exception {
public:
    // 'const char* what() const noexcept override' explanation:
    // - 'const char*': The return type must match std::exception::what(), which returns a C-style string.
    // - 'const': The method does not modify the object.
    // - 'noexcept': Guarantees this function will not throw exceptions.
    // - 'override': Ensures this method overrides a virtual function from the base class.
    // We cannot return std::string because the base class expects a const char*.
    const char* what() const noexcept override {
        return "Battery level too low!";
    }
};

#endif