/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** my_rpg
*/

#include "rpg.h"

int rpg(int ac, char ** av)
{
    rpg_t rpg;
    rpg.ac = ac;
    rpg.av = av;

    rpg = set(rpg);
    rpg = isopen(rpg);
    destroy(rpg);
    return (0);
}
