/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** yeah
*/

#include "rpg.h"

rpg_t destroy_inventory2(rpg_t rpg)
{
    sfClock_destroy(rpg.inv.ccarac);
    sfText_destroy(rpg.inv.tleft);
    sfFont_destroy(rpg.inv.fleft);
    sfText_destroy(rpg.inv.tright);
    sfFont_destroy(rpg.inv.fright);
    return (rpg);
}

rpg_t destroy_inventory(rpg_t rpg)
{
    destroy_texture(rpg.inv.caracter);
    destroy_texture(rpg.inv.on_me);
    destroy_texture(rpg.inv.ache);
    destroy_texture(rpg.inv.edb);
    destroy_texture(rpg.inv.elongue);
    destroy_texture(rpg.inv.gilet);
    destroy_texture(rpg.inv.lance);
    destroy_texture(rpg.inv.shur);
    destroy_texture(rpg.inv.invv);
    destroy_texture(rpg.inv.choose_a);
    destroy_texture(rpg.inv.choose_edb);
    destroy_texture(rpg.inv.choose_el);
    destroy_texture(rpg.inv.choose_l);
    destroy_texture(rpg.inv.choose_s);
    rpg = destroy_inventory2(rpg);
    return (rpg);
}
