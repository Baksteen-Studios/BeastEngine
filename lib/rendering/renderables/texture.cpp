#include <memory>
#include "SDL2/SDL.h"
#include "brickengine/rendering/renderables/texture.hpp"
#include "brickengine/rendering/renderer.hpp"

Texture::Texture(std::shared_ptr<SDL_Texture> texture, int layer, std::unique_ptr<Rect> dst) :
    Renderable(layer), texture(std::move(texture)),
    dst(std::move(dst)), flip(SDL_FLIP_NONE) {}

Texture::Texture(std::shared_ptr<SDL_Texture> texture, int layer, std::unique_ptr<Rect> dst, std::unique_ptr<Rect> src) :
    Renderable(layer), texture(std::move(texture)),
    src(std::move(src)), dst(std::move(dst)), flip(SDL_FLIP_NONE) {}

void Texture::render(Renderer& r) {
    r.render(*this);
}

Rect* Texture::getSrcRect() const {
    return this->src.get();
}

Rect* Texture::getDstRect() const {
    return this->dst.get();
}

SDL_Texture* Texture::getTexture() const {
    return this->texture.get();
}

SDL_RendererFlip Texture::getFlip() const {
    return this->flip;
}

void Texture::setFlip(SDL_RendererFlip flip){
    this->flip = flip;
}