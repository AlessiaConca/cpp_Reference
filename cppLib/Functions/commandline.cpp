/*This program exemplifies the usage of command line arguments*/

#include <iostream>

int main(int argc, char* argv[]) {
  for(int i = 0; i < argc; i++) {
    std::cout << "arg " << i << ": " << argv[i] << "\n";
  }
  return 0;
}

/*
Execute with:

./greeting Code cademy

Output:

arg 0: ./greeting
arg 1: Code
arg 2: cademy

argv[0] is always the program name
arg[1], arg[2], ... are the command line arguments

Note:

If an argument itself contains spaces, it needs to be enclosed in double-quotes " " to be considered one single string.

./greeting "Code cademy"

arg 0: ./greeting
arg 1: Code cademy

If an argument contains literal double quotes, the double quotes need to be labeled with backslash \:

./greeting \"Code cademy\"
arg 0: ./greeting
arg 1: "Code 
arg 2: cademy"

*/