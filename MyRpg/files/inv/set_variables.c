/*
** EPITECH PROJECT, 2020
** set
** File description:
** yeah
*/

#include "rpg.h"

rpg_t set_variables(rpg_t rpg)
{
    if (rpg.inv.cheat_mode == 1)
        rpg.inv.my_weapon = 5;
    else
        rpg.inv.my_weapon = 0;
    rpg.inv.disp_inv = 0;
    rpg.inv.ccarac = sfClock_create();
    rpg.inv.wep1 = 0;
    rpg.inv.wep2 = 0;
    rpg.inv.wep3 = 0;
    rpg.inv.wep4 = 0;
    return (rpg);
}