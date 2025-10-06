/*This program demonstrates the use of variables*/

#include <string>

int main() {
    // Define a variable called letter
    char letter;

    // Declare a variable called number and initialize it to 21
    int number = 21; // An integer variable requires 4 bytes of memory space and is sufficient for storing values from -2,147,483,648 to 2,147,483,647
    double d = 2.2; // A double variable requires 8 bytes of memory space and is sufficient for storing up to 15 decimal digits
    const double pi = 3.14;

    // Assign 18 to number
    number = 18; // number is now 18

    // Converting a double to an int
    double a = 3.5;
    int b = (int) a; // b is now 3, no rounding occurs

    // Converting an int to a double
    int c = 5;
    double d = (double) c; // d is now 5.0

    std::string first_word = "Hello";
    std::string second_word = "World";

    std::string message = first_word + " " + second_word;
    // message is now "Hello World"

    char letter = message[1];
    // letter is now ‘e’

    int length = message.length();
    // length is now 11

    bool underaged = true;
    bool certified = false;

    return 0;
}