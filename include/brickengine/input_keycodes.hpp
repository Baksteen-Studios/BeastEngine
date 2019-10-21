#ifndef FILE_INPUT_KEYCODES_HPP
#define FILE_INPUT_KEYCODES_HPP

#include "SDL2/SDL.h"

enum InputKeyCodes {
    // Numbers
    EKey_0 = SDLK_0,
    EKey_1 = SDLK_1,
    EKey_2 = SDLK_2,
    EKey_3 = SDLK_3,
    EKey_4 = SDLK_4,
    EKey_5 = SDLK_5,
    EKey_6 = SDLK_6,
    EKey_7 = SDLK_7,
    EKey_8 = SDLK_8,
    EKey_9 = SDLK_9,

    // Letters
    EKey_a = SDLK_a,
    EKey_b = SDLK_b,
    EKey_c = SDLK_c,
    EKey_d = SDLK_d,
    EKey_e = SDLK_e,
    EKey_f = SDLK_f,
    EKey_g = SDLK_g,
    EKey_h = SDLK_h,
    EKey_i = SDLK_i,
    EKey_j = SDLK_j,
    EKey_k = SDLK_k,
    EKey_l = SDLK_l,
    EKey_m = SDLK_m,
    EKey_n = SDLK_n,
    EKey_o = SDLK_o,
    EKey_p = SDLK_p,
    EKey_q = SDLK_q,
    EKey_r = SDLK_r,
    EKey_s = SDLK_s,
    EKey_t = SDLK_t,
    EKey_u = SDLK_u,
    EKey_v = SDLK_v,
    EKey_w = SDLK_w,
    EKey_x = SDLK_x,
    EKey_y = SDLK_y,
    EKey_z = SDLK_z,

    // Arrow keys
    EKey_right = SDLK_RIGHT,
    EKey_left = SDLK_LEFT,
    EKey_down = SDLK_DOWN,
    EKey_up = SDLK_UP,

    // Special
    EKey_lshift = SDLK_LSHIFT,
    EKey_lctrl = SDLK_LCTRL,
    EKey_space = SDLK_SPACE,
    Ekey_enter = SDLK_KP_ENTER,
    EKey_backspace = SDLK_BACKSPACE

    // More to be added?
};

 #endif // FILE_INPUT_KEYCODES_HPP 
