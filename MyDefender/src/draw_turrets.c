/*
** EPITECH PROJECT, 2020
** draw_turrets
** File description:
** init fire and rock
*/

#include "my.h"

def_t texture_turrets(def_t gnl)
{
    int i = 0;

    while (i != 5) {
        sfSprite_setTexture(gnl.fire_t[i].sprite,
        gnl.fire_t[i].texture, sfTrue);
        sfSprite_setTextureRect(gnl.fire_t[i].sprite, gnl.fire_rect[i]);
        i++;
    }
    sfSprite_setTexture(gnl.rock_t.sprite, gnl.rock_t.texture, sfTrue);
    sfSprite_setTextureRect(gnl.rock_t.sprite, gnl.rock_rect);
    return gnl;
}

def_t draw_turrets(def_t gnl)
{
    int i = 0;

    while (i != 5) {
        sfRenderWindow_drawSprite(gnl.window, gnl.fire_t[i].sprite, NULL);
        i++;
    }
    return gnl;
}