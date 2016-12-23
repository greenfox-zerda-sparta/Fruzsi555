#include "Board.h"
#include "GameEngine.h"
#include <string>

Board::Board() {
  board_vector = std::vector<std::vector<int>>(19, std::vector<int>(19, 0));
}

void Board::init(GameContext& context) {
  context.load_file("tile.bmp");
}

void Board::render(GameContext& context) {
  for (unsigned int x = 0; x < board_vector.size(); ++x) {
    for (unsigned int y = 0; y < board_vector.size(); ++y) {
      if (board_vector[x][y] == 0) {
        context.draw_tile("tile.bmp", y * WIDTH, x * HEIGHT);
      }
    }
  }
  context.render();
}

Board::~Board() {
}
