#include "bn_core.h"
#include "Background_game1.h"
#include "Player.h"
#include "bn_keypad.h"
#include "bn_log.h"
#include "Item_bathroom.h"
#include "bn_timer.h"


int main() {
    bn::core::init();
    bn::timer timer;
    timer.restart();


    Background_game1 background;
    Player player;

    Item_bathroom items[10];
    int max_bubble_apparition= 10;
    int nb_bubbles = 0;

    int time = 1000;

    while (true) {

        for(int i=0; i<11; i++){
            if ((time-10) < (timer.elapsed_ticks() / 500) && (timer.elapsed_ticks() / 500) < time) {
                items[i].generate_item(timer.elapsed_ticks());
                time += 1000;
                nb_bubbles++;
            }
            if(items[i].check_collision(player.get_x(), player.get_y())){
                items[i].delete_item();
                player.level_up();
                BN_LOG("Level: ", player.get_level());
            }
        }

        if(nb_bubbles == max_bubble_apparition){
            BN_LOG("Fin du jeu, passage au jeu suivant");
        }

        player.update();
        bn::core::update();
    }
}




