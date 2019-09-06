#ifndef FILE_IMAGE_HPP
#define FILE_IMAGE_HPP
#include <memory>
#include <string>

#include "SDL2/SDL.h"

class Image
{
private:
    std::unique_ptr<SDL_Surface> surface;
public:
    Image(const std::string path);
    ~Image();
};

#endif /* FILE_IMAGE_HPP */