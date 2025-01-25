//
// Created by Marti on 25/01/2025.
//

#include "../include/Item_bathroom.h"
#include "bn_array.h"
#include "bn_random.h"
#include "bn_log.h"
#include "bn_sprite_items_savon_16.h"
#include "bn_sprite_items_trucabulles_16.h"
#include "bn_sprite_items_barre_savon_16.h"
#include "bn_sprite_items_brossedents_16.h"
#include "bn_sprite_items_canard_16.h"

Item_bathroom::Item_bathroom(int x, int y) :
        _sprite([](int x, int y) -> bn::sprite_ptr
               {
                   bn::array<bn::sprite_item, 2> list_items = {bn::sprite_items::savon_16, bn::sprite_items::trucabulles_16
                   };

                   bn::random random_gene;
                   int random_nb = random_gene.get_int(list_items.size());

                   return list_items[random_nb].create_sprite(x, y);
               }(x, y))
{
}

bool Item_bathroom::check_collision(bn::fixed_t<12> player_x, bn::fixed_t<12> player_y)
{
    return (player_x >= _sprite.x() - 8 && player_x <= _sprite.x() + 8) &&
           (player_y >= _sprite.y() - 8 && player_y <= _sprite.y() + 8);
}


