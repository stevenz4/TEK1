/*
** EPITECH PROJECT, 2020
** init_skull
** File description:
** init_skull
*/

#include "my.h"

def_t init_skull(def_t gnl)
{
    int y = -2050;
    int count = 0;

    for (int i = 0; i != 50; i++, count++) {
        gnl.skull[i].texture = sfTexture_createFromFile
        ("assets/skulls_sprite_sheet.png", NULL);
        gnl.skull[i].sprite = sfSprite_create();
        gnl = init_skull2(gnl, i, y);
        y = y - 200;
        if (count == 10 || count == 25)
            y = -2050;
    }
    return gnl;
}

def_t init_skull2(def_t gnl, int i, int y)
{
    gnl.skull[i].sprite = sfSprite_create();
    gnl.skull[i].rect.width = 110;
    gnl.skull[i].rect.height = 110;
    gnl.skull[i].rect.top = 0;
    gnl.skull[i].rect.left = 550;
    gnl.skull[i].coord.x = y;
    gnl.skull[i].coord.y = 90;
    gnl.skull[i].speed.x = 3;
    gnl.skull[i].speed.y = 0;
    gnl.skull[i].x = 0;
    gnl.skull[i].pass = 0;
    return gnl;
}