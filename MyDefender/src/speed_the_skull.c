/*
** EPITECH PROJECT, 2020
** speed_the_skull
** File description:
** speed_the_skull
*/

#include "my.h"

def_t speed_the_skull_5(def_t gnl, sfVector2f coord, int i)
{
    if (coord.y > 860 && gnl.skull[i].x == 11) {
        gnl.skull[i].x++;
        gnl.skull[i].speed.x = 3;
        gnl.skull[i].speed.y = 0;
    }
    return (gnl);
}

def_t speed_the_skull_4(def_t gnl, sfVector2f coord, int i)
{
    if (coord.x > 1075 && gnl.skull[i].x == 8) {
        gnl.skull[i].x++;
        gnl.skull[i].speed.x = 0;
        gnl.skull[i].speed.y = -3;
    }
    if (coord.y < 690 && gnl.skull[i].x == 9) {
        gnl.skull[i].x++;
        gnl.skull[i].speed.x = 3;
        gnl.skull[i].speed.y = 0;
    }
    if (coord.x > 1380 && gnl.skull[i].x == 10) {
        gnl.skull[i].x++;
        gnl.skull[i].speed.x = 0;
        gnl.skull[i].speed.y = 3;
    }
    gnl = speed_the_skull_5(gnl, coord, i);
    return (gnl);
}

def_t speed_the_skull_3(def_t gnl, sfVector2f coord, int i)
{
    if (coord.y > 475 && gnl.skull[i].x == 5) {
        gnl.skull[i].x++;
        gnl.skull[i].speed.x = -3;
        gnl.skull[i].speed.y = 0;
    }
    if (coord.x < 750 && gnl.skull[i].x == 6) {
        gnl.skull[i].x++;
        gnl.skull[i].speed.x = 0;
        gnl.skull[i].speed.y = 3;
    }
    if (coord.y > 860 && gnl.skull[i].x == 7) {
        gnl.skull[i].x++;
        gnl.skull[i].speed.x = 3;
        gnl.skull[i].speed.y = 0;
    }
    gnl = speed_the_skull_4(gnl, coord, i);
    return (gnl);
}

def_t speed_the_skull_2(def_t gnl, sfVector2f coord, int i)
{
    if (coord.x > 730 && gnl.skull[i].x == 2) {
        gnl.skull[i].x++;
        gnl.skull[i].speed.x = 0;
        gnl.skull[i].speed.y = -3;
    }
    if (coord.y < 95 && gnl.skull[i].x == 3) {
        gnl.skull[i].x++;
        gnl.skull[i].speed.x = 3;
        gnl.skull[i].speed.y = 0;
    }
    if (coord.x > 1060 && gnl.skull[i].x == 4) {
        gnl.skull[i].x++;
        gnl.skull[i].speed.x = 0;
        gnl.skull[i].speed.y = 3;
    }
    gnl = speed_the_skull_3(gnl, coord, i);
    return (gnl);
}

def_t speed_the_skull(def_t gnl, int i)
{
    sfVector2f coord;

    sfSprite_move(gnl.skull[i].sprite, gnl.skull[i].speed);
    coord = sfSprite_getPosition(gnl.skull[i].sprite);

    if (coord.x > 420 && gnl.skull[i].x == 0) {
        gnl.skull[i].x++;
        gnl.skull[i].speed.x = 0;
        gnl.skull[i].speed.y = 3;
    }
    if (coord.y > 260 && gnl.skull[i].x == 1) {
        gnl.skull[i].x++;
        gnl.skull[i].speed.x = 3;
        gnl.skull[i].speed.y = 0;
    }
    gnl = speed_the_skull_2(gnl, coord, i);
    return (gnl);
}
