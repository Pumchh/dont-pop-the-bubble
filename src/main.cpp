#include "bn_core.h"
#include "Background_game1.h"
#include "Player.h"
#include "bn_keypad.h"
#include "bn_log.h"
#include "Item_bathroom.h"
#include "bn_timer.h"
#include "bn_random.h"
#include "Item_bathroom_manager.h"


int main()
{
    bn::core::init();


    Background_game1 background;
    Player player;

    Item_bathroom item;
    Item_bathroom item2;

    item.generate_item();
    item2.generate_item();

    while (true) {
        player.update();
        bn::core::update();
    }
}