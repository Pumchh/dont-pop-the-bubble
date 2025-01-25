#include "bn_core.h"
#include "Background_game1.h"
#include "Player.h"
#include "bn_keypad.h"
#include "bn_log.h"

int main()
{
    bn::core::init();

    //int x = 0;
    //int y = 0;
    Background_game1 background;
    Player player;
    while(true)
    {
        if (bn::keypad::a_pressed()){
            BN_LOG("Touche A appuyée !");
        }

        if (bn::keypad::b_pressed()){
            BN_LOG("Touche B appuyée !");
        }

        if (bn::keypad::left_held()){
            player.move_left();
        }

        if (bn::keypad::right_held()){
            player.move_right();
        }

        if (bn::keypad::up_held()){
            player.move_up();
        }

        if (bn::keypad::down_held()){
            player.move_down();
        }

        bn::core::update();
    }
}
