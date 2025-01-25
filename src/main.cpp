#include "bn_core.h"
#include "Background_game1.h"
#include "Player.h"
#include "bn_keypad.h"
#include "bn_log.h"
#include "Item_bathroom.h"
#include "bn_timer.h"
#include "bn_random.h"


int main()
{
    bn::core::init();

    Background_game1 background;
    Player player;

    Item_bathroom item1(20, 20);
    Item_bathroom item2(-20, 40);
    Item_bathroom item3(80, 20);
    Item_bathroom item4(-20, -20);

    while (true) {
        player.update();
        bn::core::update();
    }
}