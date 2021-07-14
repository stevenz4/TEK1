/*
** EPITECH PROJECT, 2020
** check_life
** File description:
** check life of players
*/

#include "rpg.h"

rpg_t check_enemy_life(rpg_t rpg)
{
    char *enemy_hp = my_itoa(rpg.fgt.enemy_p.hp, 10);

    rpg.fgt.e_hp.str = enemy_hp;
    sfText_setString(rpg.fgt.e_hp.text, rpg.fgt.e_hp.str);
    return rpg;
}

rpg_t check_hero_life(rpg_t rpg)
{
    char *hero_hp = my_itoa(rpg.fgt.hero_p.hp, 10);

    rpg.fgt.hp.str = hero_hp;
    sfText_setString(rpg.fgt.hp.text, rpg.fgt.hp.str);
    return rpg;
}