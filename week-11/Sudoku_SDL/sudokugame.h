#pragma once

#include "game.h"

#include <vector>

#define N 9

enum GameState {
  GAME_STATE_IN_PROGRESS,
  GAME_STATE_WON
};

class SudokuGame : public Game {
private:
  void load(std::string);
  bool cell_to_be_solved(int board[N][N], int&, int&);
  bool is_valid_sudoku(int board[N][N], int, int, int);
  bool is_won();
  bool used_in_row(int board[N][N], int, int);
  bool used_in_col(int board[N][N], int, int);
  bool used_in_box(int board[N][N], int, int, int);
  bool solve_sudoku(int board[N][N]);
  void render_board(GameContext&);
  int table[N][N];
  GameState state;
public:
  SudokuGame();
  void init(GameContext&);
  void render(GameContext&);
};

