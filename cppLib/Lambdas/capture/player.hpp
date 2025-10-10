#pragma once

class Player
{
public:
  explicit Player(int initialScore = 0);

  int  getScore() const;
  void addScore(int delta);

private:
  int score;
};