//
// Created by Marti on 25/01/2025.
//

#include "../include/Item_bathroom.h"
#include "bn_array.h"
#include "bn_random.h"
#include "bn_log.h"
#include "bn_sprite_items_bulle16.h"
#include "bn_core.h"


Item_bathroom::Item_bathroom() :
        _sprite(bn::sprite_items::bulle16.create_sprite(256, 256))
    {
}

Item_bathroom::Item_bathroom(int x, int y) :
        _sprite(bn::sprite_items::bulle16.create_sprite(x, y))
{
}



bool Item_bathroom::check_collision(bn::fixed_t<12> player_x, bn::fixed_t<12> player_y) const {
    return (player_x >= _sprite.x() - 8 && player_x <= _sprite.x() + 8) &&
           (player_y >= _sprite.y() - 8 && player_y <= _sprite.y() + 8);
}

bool Item_bathroom::is_expired() {
    return _lifetime_timer.elapsed_ticks() >= _lifetime;
}

void Item_bathroom::update() {
    if (_lifetime_timer.elapsed_ticks() > 5 * 60) {
        _sprite.set_visible(false);
    }
}


void Item_bathroom::generate_item() {
    bn::random r;
    r.update();
    int random_number = r.get() % 5;
    int rand_x = r.get() % 240 - 120;
    int rand_y = r.get() % 160 - 80;
    _sprite = bn::sprite_items::bulle16.create_sprite(rand_x, rand_y);

}

