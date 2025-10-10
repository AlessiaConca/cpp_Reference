#include <iostream>
#include "Player.hpp"

int main() {
  int width  = 5;
  int height = 3;
  // Write and call printArea() here
  auto printArea = [=]() {
    std::cout << "Area: " << width * height << std::endl;
  };
  printArea();

  Player player; 
  std::cout << "Initial score: " << player.getScore() << std::endl;
  // Write and call boostScore() here
  auto boostScore = [&player]() {
    player.addScore(10);
  };
  boostScore();
  std::cout << "After boost:  " << player.getScore() << std::endl;

  int xCoord = 4;
  int yCoord = 7;
  std::cout << "Initial yCoord: " << yCoord << std::endl;
  // Write and call updateY() here
  auto updateY = [xCoord, &yCoord]() {
    yCoord += xCoord;
  };
  updateY();
  std::cout << "After updateY:  " << yCoord << std::endl;

  return 0;
}