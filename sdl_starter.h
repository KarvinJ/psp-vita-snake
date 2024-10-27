#pragma once

#include <SDL2/SDL.h>
#include <iostream>

// psp = 1, vita = 2
const int scale = 1;

//psp
const int CELL_SIZE = 11;
const int CELL_COUNT = 25;

//vita
// const int CELL_SIZE = 23;
// const int CELL_COUNT = 23;

const int SCREEN_WIDTH = CELL_SIZE * CELL_COUNT;
const int SCREEN_HEIGHT = CELL_SIZE * CELL_COUNT;

int startSDL(SDL_Window *window, SDL_Renderer *renderer);
