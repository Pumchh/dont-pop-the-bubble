//
// Created by Marti on 24/01/2025.
//

#include "../include/Background_game1.h"

#include "bn_regular_bg_items_background1.h"

Background_game1::Background_game1():
    _background(bn::regular_bg_items::background1.create_bg(_x, _y)) {
}


void Background_game1::set_coordinates(int x, int y) {
    _x = x;
    _y = y;
}

