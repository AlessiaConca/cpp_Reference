/*This program demonstrates the usage of pointers and refs*/

#include <iostream>
#include <string>

int main() {

    /*Refernces*/
    /*The primary application for references in C++ is in function parameters. 
    Because the reference parameter acts as an alias for the argument, a function that uses a 
    reference parameter is able to modify the argument passed in.*/
    int exam_grade = 85;
    int& score = exam_grade;

    // changing score will also change exam_grade
    score += 7;
    std::cout << exam_grade << std::endl; //goes to newline
    std::cout << score << std::endl;
  
    // print the memory address of message
    std::string message = "Hello World!";
    std::cout << message << std::endl; //print value
    std::cout << &message << std::endl; //print address

    /*Pointers*/
    std::string name = "John";
    std::string* ptr = nullptr;
  
    ptr = &name;
  
    std::cout << ptr << '\n';  //address
    std::cout << *ptr << '\n'; //value
  
    *ptr = "Robin"; //change value at address, both name and *ptr are now "Robin"
  
    std::cout << *ptr << '\n'; 
    std::cout << name << '\n';
  
    return 0;
}
