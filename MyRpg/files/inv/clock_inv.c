/*
** EPITECH PROJECT, 2020
** set
** File description:
** yeah
*/

#include "rpg.h"

rpg_t move_rect(rpg_t rpg)
{
    rpg.inv.caracter.rect.left = 0;
    rpg.inv.edb.rect.left = 0;
    rpg.inv.ache.rect.left = 0;
    rpg.inv.lance.rect.left = 0;
    rpg.inv.shur.rect.left = 0;
    rpg.inv.gilet.rect.left = 0;
    rpg.inv.elongue.rect.left = 0;
    return (rpg);
}

rpg_t move_rect_2(rpg_t rpg)
{
    rpg.inv.caracter.rect.left += 180;
    rpg.inv.edb.rect.left += 180;
    rpg.inv.ache.rect.left += 180;
    rpg.inv.gilet.rect.left += 180;
    rpg.inv.lance.rect.left += 180;
    rpg.inv.shur.rect.left += 180;
    rpg.inv.elongue.rect.left += 180;
    return (rpg);
}