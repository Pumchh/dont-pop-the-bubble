#include "bn_core.h"
#include "Background_game1.h"
#include "Player.h"
#include "bn_keypad.h"
#include "bn_log.h"
#include "Item_bathroom.h"
#include "bn_timer.h"
#include "Item_bathroom_manager.h"


int main()
{
    bn::core::init();

    Background_game1 background;
    Player player;
    Item_bathroom item;

    item.generate_item();
    item.generate_item();
    item.generate_item();
    item.generate_item();

    /*Item_bathroom item2;
    item2.generate_item();

    Item_bathroom item3;
    item3.generate_item();

    Item_bathroom item4;
    item4.generate_item();

    Item_bathroom item5;
    item5.generate_item();*/

    while (true) {

        item.update();
        player.update();
        bn::core::update();
    }
}