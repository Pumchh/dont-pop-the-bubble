//
// Created by Marti on 24/01/2025.
//

#ifndef DONT_POP_THE_BUBBLE_STEP1_H
#define DONT_POP_THE_BUBBLE_STEP1_H

#include "bn_regular_bg_ptr.h"

class Background_game1 {

public:
    Background_game1();
    void set_coordinates(int x, int y);

private:
    bn::regular_bg_ptr _background;
    int _x = 0;
    int _y = 0;

};

#endif //DONT_POP_THE_BUBBLE_STEP1_H
