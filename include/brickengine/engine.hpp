#ifndef   FILE_INCLUDE_BRICKENGINE_HPP
#define   FILE_INCLUDE_BRICKENGINE_HPP

#include <string>
#include "SDL2/SDL.h"

class BrickEngine {
public:
    void Start(std::string window_name);
    void Shutdown();
    void Delay(Uint32 ms);
    BrickEngine();
    ~BrickEngine();
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Surface* screenSurface;
};

#endif /* FILE_INCLUDE_BRICKENGINE_HPP */
