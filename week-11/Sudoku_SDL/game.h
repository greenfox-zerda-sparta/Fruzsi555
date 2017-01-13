#pragma once

#include "gamecontext.h"

class Game {
public:
    virtual void init(GameContext&) = 0;
    virtual void render(GameContext&) = 0;
};

