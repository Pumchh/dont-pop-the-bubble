//
// Created by Marti on 25/01/2025.
//

#ifndef DONT_POP_THE_BUBBLE_PLAYER_H
#define DONT_POP_THE_BUBBLE_PLAYER_H

#include "bn_sprite_ptr.h"
#include "bn_sprite_animate_actions.h"


class Player {

private:

    bn::sprite_ptr _sprite;
    bn::sprite_animate_action<3> _action;
    int _level = 1;
    int _speed = 3;

public:
    Player();
    void move_up(int speed);
    void move_down(int speed);
    void move_left(int speed);
    void move_right(int speed);
    bn::fixed_t<12> get_x() {return _sprite.x();}
    bn::fixed_t<12> get_y() {return _sprite.y();}
    void level_up(){_level++;};
    void update();

};


#endif //DONT_POP_THE_BUBBLE_PLAYER_H
