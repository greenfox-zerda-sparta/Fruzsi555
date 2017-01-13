#include "stdafx.h"

#include "gameengine.h"

GameEngine::GameEngine(Game* g, unsigned int SCREEN_WIDTH, unsigned int SCREEN_HEIGHT) {
  context = new GameContext(SCREEN_WIDTH, SCREEN_HEIGHT);
  game = g;
  game->init(*context);
}

GameEngine::~GameEngine() {
  delete context;
}

void GameEngine::run() {
  SDL_Event event;
  int gameover = 0;
  while (!gameover) {
    if (SDL_PollEvent(&event)) {
      switch (event.type) {
      case SDL_QUIT:
        gameover = 1;
        break;
      case SDL_MOUSEBUTTONUP:
        context->set_mouse_coordinates(event.button.x, event.button.y);
        break;
      case SDL_KEYDOWN:
        switch (event.key.keysym.sym) {
        case SDLK_ESCAPE:
        case SDLK_q:
          gameover = 1;
          break;
        default:
          context->on_key_down(event.key.keysym.sym);
          break;
        }
        break;
      }
    }
    game->render(*context);
  }
}


