#ifndef FILE_BRICKENGINE_HPP
#define FILE_BRICKENGINE_HPP

#include <optional>
#include <iostream>
#include <string>
#include <memory>
#include <string>
#include <chrono>

#include "SDL2/SDL.h"
#include "SDL2/SDL2_gfxPrimitives.h"

#include "brickengine/rendering/renderer.hpp"
#include "brickengine/rendering/renderable_factory.hpp"

class BrickEngine {
public:
    // You need to supply all the used layers to this constructors, layers that the engine doesn't know of will not get drawn!
    BrickEngine(const std::string window_name, const int window_width, const int window_heigth, std::vector<int> layers, int fps_cap);
    ~BrickEngine();
    void delay(std::chrono::time_point<std::chrono::high_resolution_clock> start_time,
                std::chrono::time_point<std::chrono::high_resolution_clock> end_time);
    void drawFpsCounter();
    RenderableFactory* getRenderableFactory() const;
    Renderer* getRenderer() const;
    int getFps() const;
    double getDeltatime() const;
private:
    int top_layer;
    int fps;
    int fps_cap;
    double delta_time;
    std::unique_ptr<Renderable> fps_counter;
    std::unique_ptr<SDL_Window, void(*)(SDL_Window*)> window;
    std::shared_ptr<Renderer> renderer;
    std::unique_ptr<RenderableFactory> renderableFactory;
};

#endif /* FILE_BRICKENGINE_HPP */
