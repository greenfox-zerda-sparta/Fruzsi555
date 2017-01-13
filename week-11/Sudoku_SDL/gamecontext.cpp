#include "stdafx.h"

#include "gamecontext.h"

GameContext::GameContext(unsigned int SCREEN_WIDTH, unsigned int SCREEN_HEIGHT) {
  SDL_Init(SDL_INIT_VIDEO);
  screen = SDL_CreateWindow("My Game Window",
    SDL_WINDOWPOS_UNDEFINED,
    SDL_WINDOWPOS_UNDEFINED,
    SCREEN_WIDTH, SCREEN_HEIGHT,
    0);
  renderer = SDL_CreateRenderer(screen, -1, 0);
}

GameContext::~GameContext() {
  for (std::map<std::string, SDL_Texture*>::iterator it = tiles.begin(); it != tiles.end(); ++it) {
    SDL_DestroyTexture(it->second);
  }
  SDL_Quit();
}

void GameContext::load_file(std::string name) {
  SDL_Surface* result = SDL_LoadBMP(name.c_str());
  SDL_SetColorKey(result, SDL_TRUE, SDL_MapRGB(SDL_AllocFormat(SDL_GetWindowPixelFormat(screen)), 0xFF, 0, 0xFF));
  tiles[name] = SDL_CreateTextureFromSurface(renderer, result);
  SDL_FreeSurface(result);
}

void GameContext::draw_tile(std::string name, int x, int y, int w, int h) {
  SDL_Rect temp;
  temp.x = x;
  temp.y = y;
  temp.w = w;
  temp.h = h;
  SDL_RenderCopy(renderer, tiles[name], NULL, &temp);
}

void GameContext::render() {
  SDL_RenderPresent(renderer);
}

void GameContext::on_key_down(unsigned int key_code) {
  key_pressed = key_code;
}

unsigned int GameContext::get_key_pressed() {
  unsigned int old_key = key_pressed;
  key_pressed = 0; // take key out of buffer
  return old_key;
}

void GameContext::set_mouse_coordinates(int x, int y) {
  mouseX = x;
  mouseY = y;
}

int GameContext::get_mouse_coordinate_x() {
  return mouseX;
}

int GameContext::get_mouse_coordinate_y() {
  return mouseY;
}
