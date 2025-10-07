#include <string>
#include <iostream>


namespace GameSettings {
  int savedHighScore = 42;

  void resetHighScore() {
    savedHighScore = 0;
  }

  class Player {
  public:
    std::string name;
  public:
    
    std::string name = "PlayerOne";
  };
}


int main() {

  //scope resolutor operator ::
  int currentHighScore = GameSettings::savedHighScore;
  
  GameSettings::resetHighScore();

  GameSettings::Player mainPlayer;
  
  std::cout << "Player Name: " << mainPlayer.name << std::endl;
  
  return 0;
}


/*
A namespace is the standard namespace (std), which contains the cout and endl 
objects
Preview: Docs In C++, an object is an instance of a class that encapsulates data and functionality pertaining to that data.
 you have been using to print to the screen.

Just like classes, we can write namespaces in header 
files
Preview: Docs Computers use file systems to store and retrieve data. The fstream library, short for file stream, enables working with files in C++.
 (.hpp files) and import them with #include when we want to use them.
*/