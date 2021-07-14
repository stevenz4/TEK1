/*
** EPITECH PROJECT, 2020
** display_weapon
** File description:
** yeah
*/

#include "rpg.h"

rpg_t display_weapon_to_choose(rpg_t rpg, sfRenderWindow *window)
{
    sfSprite_setTextureRect(rpg.inv.choose_a.sprite, rpg.inv.choose_a.rect);
    sfSprite_setPosition(rpg.inv.choose_a.sprite, rpg.inv.choose_a.vect);
    sfRenderWindow_drawSprite(window, rpg.inv.choose_a.sprite, NULL);
    sfSprite_setTextureRect(rpg.inv.choose_el.sprite, rpg.inv.choose_el.rect);
    sfSprite_setPosition(rpg.inv.choose_el.sprite, rpg.inv.choose_el.vect);
    sfRenderWindow_drawSprite(window, rpg.inv.choose_el.sprite, NULL);
    sfSprite_setTextureRect(rpg.inv.choose_edb.sprite, rpg.inv.choose_edb.rect);
    sfSprite_setPosition(rpg.inv.choose_edb.sprite, rpg.inv.choose_edb.vect);
    sfRenderWindow_drawSprite(window, rpg.inv.choose_edb.sprite, NULL);
    sfSprite_setTextureRect(rpg.inv.choose_l.sprite, rpg.inv.choose_l.rect);
    sfSprite_setPosition(rpg.inv.choose_l.sprite, rpg.inv.choose_l.vect);
    sfRenderWindow_drawSprite(window, rpg.inv.choose_l.sprite, NULL);
    sfSprite_setTextureRect(rpg.inv.choose_s.sprite, rpg.inv.choose_s.rect);
    sfSprite_setPosition(rpg.inv.choose_s.sprite, rpg.inv.choose_s.vect);
    sfRenderWindow_drawSprite(window, rpg.inv.choose_s.sprite, NULL);
    return (rpg);
}