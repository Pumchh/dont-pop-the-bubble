//
// Created by Marti on 25/01/2025.
//

#ifndef DONT_POP_THE_BUBBLE_ITEM_BR_H
#define DONT_POP_THE_BUBBLE_ITEM_BR_H

#include "bn_sprite_ptr.h"

class Item_bathroom {

private:
    bn::sprite_ptr _sprite;

public:
    Item_bathroom(int x, int y);
    auto get_x(){return _sprite.x();}
    auto get_y(){return _sprite.y();}
    void set_x(int x){_sprite.set_x(x);}
    void set_y(int y){_sprite.set_y(y);}
    bool check_collision(bn::fixed_t<12> player_x, bn::fixed_t<12> player_y);
    bn::sprite_ptr get_sprite(){return _sprite;}

};


#endif //DONT_POP_THE_BUBBLE_ITEM_BR_H
