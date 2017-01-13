#pragma once

#include <map>
#include <string>
#include <SDL.h>
#include <SDL_net.h>
#undef main

const int SCREEN_WIDTH = 540;
const int SCREEN_HEIGHT = 540;

class GameContext {
private:
    SDL_Window* screen;
    SDL_Renderer* renderer;
    std::map<std::string, SDL_Texture*> tiles;
    unsigned int key_pressed;
public:
    GameContext(unsigned int, unsigned int);   
    ~GameContext();
    
    void load_file(std::string);
    void draw_tile(std::string, int, int, int, int) ;
    void render();
    void on_key_down(unsigned int);
    unsigned int get_key_pressed();
    
    void set_mouse_coordinates(int, int);
    int get_mouse_coordinate_x();
    int get_mouse_coordinate_y();
    
    int mouseX;
    int mouseY;
};



