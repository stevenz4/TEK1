/*
** EPITECH PROJECT, 2020
** display_weapon
** File description:
** yeah
*/

#include "rpg.h"

rpg_t display_weapon_3(rpg_t rpg, sfRenderWindow *window)
{
    if (rpg.inv.my_weapon == 5) {
        sfSprite_setTextureRect(rpg.inv.gilet.sprite, rpg.inv.gilet.rect);
        sfSprite_setPosition(rpg.inv.gilet.sprite, rpg.inv.gilet.vect);
        sfRenderWindow_drawSprite(window, rpg.inv.gilet.sprite, NULL);
    } else if (rpg.inv.my_weapon == 4) {
        sfSprite_setTextureRect(rpg.inv.shur.sprite, rpg.inv.shur.rect);
        sfSprite_setPosition(rpg.inv.shur.sprite, rpg.inv.shur.vect);
        sfRenderWindow_drawSprite(window, rpg.inv.shur.sprite, NULL);
    }
    return (rpg);
}

rpg_t display_weapon_2(rpg_t rpg, sfRenderWindow *window)
{
    if (rpg.inv.my_weapon == 3) {
        sfSprite_setTextureRect(rpg.inv.ache.sprite, rpg.inv.ache.rect);
        sfSprite_setPosition(rpg.inv.ache.sprite, rpg.inv.ache.vect);
        sfRenderWindow_drawSprite(window, rpg.inv.ache.sprite, NULL);
    } else if (rpg.inv.my_weapon == 1) {
        sfSprite_setTextureRect(rpg.inv.elongue.sprite, rpg.inv.elongue.rect);
        sfSprite_setPosition(rpg.inv.elongue.sprite, rpg.inv.elongue.vect);
        sfRenderWindow_drawSprite(window, rpg.inv.elongue.sprite, NULL);
    }
    else
        rpg = display_weapon_3(rpg, window);
    return (rpg);
}

rpg_t display_weapon(rpg_t rpg, sfRenderWindow *window)
{
    if (rpg.inv.my_weapon == 0) {
        sfSprite_setTextureRect(rpg.inv.edb.sprite, rpg.inv.edb.rect);
        sfSprite_setPosition(rpg.inv.edb.sprite, rpg.inv.edb.vect);
        sfRenderWindow_drawSprite(window, rpg.inv.edb.sprite, NULL);
    } else if (rpg.inv.my_weapon == 2) {
        sfSprite_setTextureRect(rpg.inv.lance.sprite, rpg.inv.lance.rect);
        sfSprite_setPosition(rpg.inv.lance.sprite, rpg.inv.lance.vect);
        sfRenderWindow_drawSprite(window, rpg.inv.lance.sprite, NULL);
    }
    else
        rpg = display_weapon_2(rpg, window);
    return (rpg);
}
