#include "GameEngine.h"
#include "Board.h"

int main(int argc, char* argv[]) {
  Board game;
  GameEngine engine(&game, SCREEN_WIDTH, SCREEN_HEIGHT);
  engine.run();

  //system("pause");
  return 0;
}