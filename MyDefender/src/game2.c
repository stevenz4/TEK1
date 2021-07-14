/*
** EPITECH PROJECT, 2020
** game2.c
** File description:
** game2
*/

#include "my.h"

def_t game2(def_t gnl)
{
    gnl.clock_gen.clock = sfClock_create();
    gnl.f_clock[0].clock = sfClock_create();
    gnl.f_clock[1].clock = sfClock_create();
    gnl.f_clock[2].clock = sfClock_create();
    gnl.f_clock[3].clock = sfClock_create();
    gnl.f_clock[4].clock = sfClock_create();
    gnl.f_clock[5].clock = sfClock_create();
    gnl.m_clock.clock = sfClock_create();
    gnl.l_clock.clock = sfClock_create();
    gnl.mon_clock.clock = sfClock_create();
    gnl.r_clock.clock = sfClock_create();
    sfText_setPosition(gnl.life.text, (sfVector2f) {1810, 85});
    sfText_setPosition(gnl.text_lvl.text, (sfVector2f) {850, 10});
    sfSprite_setPosition(gnl.smoney.sprite, (sfVector2f) {1650, 3});
    sfSprite_setPosition(gnl.slife.sprite, (sfVector2f) {1650, 93});
    sfSprite_setPosition(gnl.fire_t[0].sprite, gnl.case_c_pos);
    sfSprite_setPosition(gnl.fire_t[1].sprite, (sfVector2f) {875, 20});
    sfSprite_setPosition(gnl.fire_t[2].sprite, (sfVector2f) {520, 200});
    return gnl;
}

def_t game3(def_t gnl)
{
    sfSprite_setPosition(gnl.fire_t[3].sprite, (sfVector2f) {510, 577});
    sfSprite_setPosition(gnl.fire_t[4].sprite, (sfVector2f) {1210, 600});
    sfSprite_setPosition(gnl.rock_t.sprite, (sfVector2f) {890, 500});
    sfSprite_setPosition(gnl.bank.sprite, (sfVector2f) {200, 550});
    sfSprite_setPosition(gnl.shop.sprite, gnl.shop_pos);
    sfSprite_setPosition(gnl.ft1.sprite, gnl.shop_left);
    sfSprite_setPosition(gnl.rt1.sprite, gnl.shop_left);
    sfSprite_setPosition(gnl.bank_min.sprite, gnl.shop_left);
    gnl = set_position_skull(gnl);
    return gnl;
}

def_t game4(def_t gnl)
{
    gnl = money(gnl);
    gnl.imoney = my_getnbr_2(gnl.money.str);
    gnl.mouse_pos = sfMouse_getPositionRenderWindow(gnl.window);
    sfRenderWindow_clear(gnl.window, sfBlack);
    sfText_setPosition(gnl.money.text, (sfVector2f) {1800, 0});
    sfSprite_setTexture(gnl.map.sprite, gnl.map.texture, sfTrue);
    sfSprite_setTexture(gnl.smoney.sprite, gnl.smoney.texture, sfTrue);
    sfSprite_setTexture(gnl.shop.sprite, gnl.shop.texture, sfTrue);
    sfSprite_setTexture(gnl.slife.sprite, gnl.slife.texture, sfTrue);
    sfSprite_setTexture(gnl.ft1.sprite, gnl.ft1.texture, sfTrue);
    sfSprite_setTexture(gnl.rt1.sprite, gnl.rt1.texture, sfTrue);
    sfSprite_setTexture(gnl.bank_min.sprite, gnl.bank_min.texture, sfTrue);
    sfSprite_setTexture(gnl.bank.sprite, gnl.bank.texture, sfTrue);
    gnl = texture_skull(gnl);
    gnl = texture_turrets(gnl);
    return gnl;
}

def_t game5(def_t gnl)
{
    sfSprite_setTextureRect(gnl.smoney.sprite, gnl.rmoney);
    sfSprite_setTextureRect(gnl.slife.sprite, gnl.rlife);
    sfSprite_setTextureRect(gnl.bank.sprite, gnl.rbank);
    sfSprite_setTextureRect(gnl.rt1.sprite, gnl.rtp_rect);
    sfText_setString(gnl.money.text, gnl.money.str);
    sfText_setString(gnl.life.text, gnl.life.str);
    sfText_setString(gnl.text_lvl.text, gnl.text_lvl.str);
    sfText_setFont(gnl.money.text, gnl.money.font);
    sfText_setFont(gnl.life.text, gnl.life.font);
    sfText_setFont(gnl.text_lvl.text, gnl.text_lvl.font);
    gnl = life(gnl);
    gnl = money_animation(gnl);
    gnl = speed_skulls(gnl);
    gnl = get_skull_pos(gnl);
    gnl = check_life(gnl);
    gnl = check_hit_2(gnl);
    sfRenderWindow_drawSprite(gnl.window, gnl.map.sprite, NULL);
    sfRenderWindow_drawSprite(gnl.window, gnl.smoney.sprite, NULL);
    return gnl;
}