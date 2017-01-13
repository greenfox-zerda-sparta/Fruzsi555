#pragma once

#include "gamecontext.h"
#include "game.h"

class GameEngine {
private:
    GameContext* context;
    Game* game;
public:
    GameEngine(Game*, unsigned int, unsigned int);
    ~GameEngine();
    void run();
};
