#include "Player.hpp"

Player::Player(int initialScore) : score(initialScore) {}

int Player::getScore() const
{
  return score;
}

void Player::addScore(int delta)
{
  score += delta;
}