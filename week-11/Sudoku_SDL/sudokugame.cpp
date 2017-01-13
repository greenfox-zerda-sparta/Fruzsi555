#include "stdafx.h"

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "sudokugame.h"
#include "util.h"

const unsigned int KEY_CODE_ZERO = 48;

const int WIDTH = 60;
const int HEIGHT = 60;

SudokuGame::SudokuGame() : state(GAME_STATE_IN_PROGRESS) {
}

void SudokuGame::init(GameContext& context) {
  load("sudoku.txt");
  //load("sudoku_almost_won.txt");

  context.load_file("1.bmp");
  context.load_file("2.bmp");
  context.load_file("3.bmp");
  context.load_file("4.bmp");
  context.load_file("5.bmp");
  context.load_file("6.bmp");
  context.load_file("7.bmp");
  context.load_file("8.bmp");
  context.load_file("9.bmp");
  context.load_file("tile.blue.bmp");
  context.load_file("win.bmp");
}

void SudokuGame::load(std::string filename) {
  std::ifstream map;
  map.open(filename);
  if (map.fail()) {
    std::cout << "Error: could not open file " << filename;
    return;
  }
  std::string line;
  int line_count = 0;
  for (unsigned int i = 0; i < 9; ++i) {
    getline(map, line);
    for (unsigned int j = 0; j < line.length(); ++j) {
      int read_number = line[j] - '0'; // convert character to number
      if (read_number >= 0 && read_number <= 9) {
        table[i][j] = read_number;
      }
      else {
        printf("Error: unknown character %d found in file", read_number);
      }
    }
  }
  map.close();
}

void SudokuGame::render(GameContext& context) {
  render_board(context);

  switch (state) {
  case GAME_STATE_WON:
  {
    context.draw_tile("win.bmp", 0, 0, 512, 512);
    break;
  }

  default:
  {
    int key_pressed = context.get_key_pressed() - KEY_CODE_ZERO; // convert keycode to the actual number pressed

    if (key_pressed >= 0 && key_pressed < 10) {
      int x = context.get_mouse_coordinate_x() / WIDTH;
      int y = context.get_mouse_coordinate_y() / HEIGHT;
      printf("User pressed key %d at click position %d %d\n", key_pressed, x, y);

      table[y][x] = key_pressed;

      if (is_won()) {
        state = GAME_STATE_WON;
      }
      else {
        state = GAME_STATE_IN_PROGRESS;
      }
    }
    else if (key_pressed == -16) { // space
      solve_sudoku(table);
    }
    break;
  }
  }
  context.render();
}

void SudokuGame::render_board(GameContext& context) {
  for (unsigned int i = 0; i < N; ++i) {
    for (unsigned int j = 0; j < N; ++j) {
      if (table[i][j] == 0) {
        context.draw_tile("tile.blue.bmp", j * WIDTH, i * HEIGHT, WIDTH, HEIGHT);
      }
      if (table[i][j] == 1) {
        context.draw_tile("1.bmp", j * WIDTH, i * HEIGHT, WIDTH, HEIGHT);
      }
      if (table[i][j] == 2) {
        context.draw_tile("2.bmp", j * WIDTH, i * HEIGHT, WIDTH, HEIGHT);
      }
      if (table[i][j] == 3) {
        context.draw_tile("3.bmp", j * WIDTH, i * HEIGHT, WIDTH, HEIGHT);
      }
      if (table[i][j] == 4) {
        context.draw_tile("4.bmp", j * WIDTH, i * HEIGHT, WIDTH, HEIGHT);
      }
      if (table[i][j] == 5) {
        context.draw_tile("5.bmp", j * WIDTH, i * HEIGHT, WIDTH, HEIGHT);
      }
      if (table[i][j] == 6) {
        context.draw_tile("6.bmp", j * WIDTH, i * HEIGHT, WIDTH, HEIGHT);
      }
      if (table[i][j] == 7) {
        context.draw_tile("7.bmp", j * WIDTH, i * HEIGHT, WIDTH, HEIGHT);
      }
      if (table[i][j] == 8) {
        context.draw_tile("8.bmp", j * WIDTH, i * HEIGHT, WIDTH, HEIGHT);
      }
      if (table[i][j] == 9) {
        context.draw_tile("9.bmp", j * WIDTH, i * HEIGHT, WIDTH, HEIGHT);
      }
    }
  }
}

bool SudokuGame::cell_to_be_solved(int board[N][N], int &row, int &col) {
  for (row = 0; row < N; ++row)
    for (col = 0; col < N; ++col)
      if (table[row][col] == 0)
        return true;
  return false;
}

const int winning_sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9;

bool SudokuGame::is_won() {
  for (int row = 0; row < N; ++row) {
    int sum = 0;
    for (int col = 0; col < N; ++col) {
      if (table[row][col] == 0) {
        return false;
      }
      sum += table[row][col];
    }
    if (sum != winning_sum) {
      return false;
    }
  }
  for (int box_row = 0; box_row < N; box_row += 3) {
    for (int box_col = 0; box_col < N; box_col += 3) {
      int sum = 0;
      for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
          sum += table[box_row + row][box_col + col];
        }
      }
      if (sum != winning_sum) {
        return false;
      }
    }
  }
  return true;
}



bool SudokuGame::solve_sudoku(int board[N][N]) {
  int row, col;
  if (!cell_to_be_solved(board, row, col))
    return true;
  for (int num = 1; num <= 9; ++num) {
    if (is_valid_sudoku(board, row, col, num)) {
      board[row][col] = num;
      if (solve_sudoku(board))
        return true;
      board[row][col] = 0;
    }
  }
  return false;
}

bool SudokuGame::used_in_row(int board[N][N], int row, int num) {
  for (int col = 0; col < N; ++col)
    if (board[row][col] == num)
      return true;
  return false;
}

bool SudokuGame::used_in_col(int board[N][N], int col, int num) {
  for (int row = 0; row < N; ++row)
    if (board[row][col] == num)
      return true;
  return false;
}

bool SudokuGame::used_in_box(int board[N][N], int box_start_row, int box_start_col, int num) {
  for (int row = 0; row < 3; ++row)
    for (int col = 0; col < 3; ++col)
      if (board[row + box_start_row][col + box_start_col] == num)
        return true;
  return false;
}

bool SudokuGame::is_valid_sudoku(int board[N][N], int row, int col, int num) {
  return !used_in_row(board, row, num) && !used_in_col(board, col, num) &&
    !used_in_box(board, row - row % 3, col - col % 3, num);
}


