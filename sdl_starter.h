#pragma once

#include <SDL2/SDL.h>
#include <iostream>

// psp = 1, vita = 2
const int scale = 1;
const int SCREEN_WIDTH = 480*scale;
const int SCREEN_HEIGHT = 272*scale;

int startSDL(SDL_Window *window, SDL_Renderer *renderer);
