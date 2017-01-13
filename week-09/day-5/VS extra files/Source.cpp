#include "stdafx.h"

#include <iostream>
#include "gameengine.h"
#include "sudokugame.h"

int main(int argc, const char * argv[]) {
  SudokuGame* game = new SudokuGame();
  GameEngine* engine = new GameEngine(game, SCREEN_HEIGHT, SCREEN_WIDTH);
  engine->run();

  return 0;
}