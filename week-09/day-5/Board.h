#pragma once
#ifndef BOARD_H
#define BOARD_H

#include "GameEngine.h"
#include <vector>

class Board : public Game {
private:
  std::vector<std::vector<int>> board_vector;
public:
  Board();
  void init(GameContext& context);
  void render(GameContext& context);
  ~Board();
};

#endif

