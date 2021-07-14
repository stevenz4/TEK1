/*
** EPITECH PROJECT, 2020
** set_position_skull
** File description:
** set_position_skull
*/

#include "my.h"

def_t pos_skull(def_t gnl)
{
    int i = 0;
    sfVector2f pos;
    gnl.count = 0;

    while (i != 50) {
        pos = sfSprite_getPosition(gnl.skull[i].sprite);
        if (pos.x > 1930) {
            gnl.count++;
        }
        i++;
    }
    if (gnl.count == 10) {
        gnl.lvl = 25;
        gnl.text_lvl.str = "Level 2";
    }
    gnl = set_position_skull_2(gnl);
    return (gnl);
}

def_t set_position_skull(def_t gnl)
{
    int i = 0;

    while (i != 50) {
        sfSprite_setPosition(gnl.skull[i].sprite, gnl.skull[i].coord);
        i++;
    }
    return gnl;
}

def_t speed_skulls(def_t gnl)
{
    int i = 0;

    while (i != gnl.lvl) {
        gnl = speed_the_skull(gnl, i);
        i++;
    }
    return (gnl);
}

def_t draw_skull(def_t gnl)
{
    int i = 0;

    while (i != 50) {
        sfRenderWindow_drawSprite(gnl.window, gnl.skull[i].sprite, NULL);
        i++;
    }
    return gnl;
}

def_t texture_skull(def_t gnl)
{
    int i = 0;

    while (i != 50) {
        sfSprite_setTexture(gnl.skull[i].sprite, gnl.skull[i].texture, sfTrue);
        sfSprite_setTextureRect(gnl.skull[i].sprite, gnl.skull[i].rect);
        i++;
    }
    return gnl;
}
