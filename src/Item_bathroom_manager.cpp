//
// Created by Marti on 25/01/2025.
//

#include "../include/Item_bathroom_manager.h"
#include "Item_bathroom_manager.h"
#include "bn_random.h"
#include "bn_log.h"
#include "bn_sprite_ptr.h"
#include "bn_vector.h"
#include "bn_sprite_items_savon_16.h"
#include "bn_sprite_items_trucabulles_16.h"
#include "bn_sprite_items_barre_savon_16.h"
#include "bn_sprite_items_brossedents_16.h"
#include "bn_sprite_items_canard_16.h"
#include "Item_bathroom.h"

void


Item_bathroom_manager::create_item() {
    bn::random random_generator;
    int random_number = random_generator.get_int(5);
    int rand_x = random_generator.get_int(5);
    int rand_y = random_generator.get_int(5);
    BN_LOG("Random number: ", random_number);
    BN_LOG("Random number x: ", rand_x);
    BN_LOG("Random number y: ", rand_y);

}

