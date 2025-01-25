//
// Created by Marti on 25/01/2025.
//

#include "../include/Player.h"
#include "bn_sprite_items_personnage_scene1.h"
#include "bn_keypad.h"
#include "bn_log.h"
#include "bn_sprite_animate_actions.h"


Player::Player():
        _sprite(bn::sprite_items::personnage_scene1.create_sprite(0, 0)),
        _action(bn::create_sprite_animate_action_forever(
                _sprite, 8, bn::sprite_items::personnage_scene1.tiles_item(), 0, 1, 2))
{
}

void Player::move_up(int speed) {
    _sprite.set_y(_sprite.y() - speed);
    _sprite.set_rotation_angle(180);
}

void Player::move_down(int speed) {
    _sprite.set_y(_sprite.y() + speed);
    _sprite.set_rotation_angle(0);
}

void Player::move_left(int speed) {
    _sprite.set_x(_sprite.x() - speed);
    _sprite.set_rotation_angle(270);
}

void Player::move_right(int speed) {
    _sprite.set_x(_sprite.x() + speed);
    _sprite.set_rotation_angle(90);
}

void Player::update() {

    int speed_temp = _speed;

    if (bn::keypad::a_pressed()) {
        BN_LOG("Touche A appuyée !");
    }

    if (bn::keypad::b_pressed()) {
        BN_LOG("Touche B appuyée !");
    }

    if ((bn::keypad::left_held() && bn::keypad::up_held()) ||
        (bn::keypad::up_held() && bn::keypad::right_held()) ||
        (bn::keypad::right_held() && bn::keypad::down_held()) ||
        (bn::keypad::down_held() && bn::keypad::left_held())){
        speed_temp /= 2;
    }

    if (bn::keypad::left_held() && (_sprite.x() > -120)) {
        speed_temp = _speed;
        move_left(speed_temp);
    }

    if (bn::keypad::right_held() && (_sprite.x() < 120)) {
        speed_temp = _speed;
        move_right(speed_temp);
    }

    if (bn::keypad::up_held() && (_sprite.y() > -80)) {
        speed_temp = _speed;
        move_up(speed_temp);
    }

    if (bn::keypad::down_held() && (_sprite.y() < 80)) {
        speed_temp = _speed;
        move_down(speed_temp);
    }

    if (!bn::keypad::up_held() && !bn::keypad::left_held() && !bn::keypad::right_held() && !bn::keypad::down_held()){
        _action.reset();

    }

    _action.update();

}


