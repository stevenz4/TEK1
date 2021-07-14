/*
** EPITECH PROJECT, 2020
** set_position_skull_2
** File description:
** set_position_skull_2
*/

#include "my.h"

def_t set_position_skull_2(def_t gnl)
{
    if (gnl.count == 25) {
        gnl.text_lvl.str = "Level 3";
        gnl.lvl = 50;
    }
    if (gnl.count == 50)
        gnl.lose = 2;
    return gnl;
}
