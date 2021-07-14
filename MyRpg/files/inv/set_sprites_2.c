/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** yeah
*/

#include "rpg.h"

rpg_t set_rect_wep_to_choose_2(rpg_t rpg)
{
    sfIntRect rect3 = {0, 0, 150, 300};
    sfIntRect rect4 = {0, 0, 200, 400};

    rpg.inv.choose_edb.rect = rect3;
    rpg.inv.choose_edb.vect.x = 750;
    rpg.inv.choose_edb.vect.y = 330;
    rpg.inv.choose_l.rect = rect4;
    rpg.inv.choose_l.vect.x = 930;
    rpg.inv.choose_l.vect.y = 300;
    return (rpg);
}

rpg_t set_rect_wep_to_choose(rpg_t rpg)
{
    sfIntRect rect1 = {0, 0, 200, 300};
    sfIntRect rect2 = {0, 0, 150, 300};

    rpg.inv.choose_a.rect = rect1;
    rpg.inv.choose_a.vect.x = 1060;
    rpg.inv.choose_a.vect.y = 350;
    rpg.inv.choose_s.rect = rect1;
    rpg.inv.choose_s.vect.x = 1180;
    rpg.inv.choose_s.vect.y = 360;
    rpg.inv.choose_el.rect = rect2;
    rpg.inv.choose_el.vect.x = 850;
    rpg.inv.choose_el.vect.y = 330;
    rpg = set_rect_wep_to_choose_2(rpg);
    return (rpg);
}

rpg_t set_weapons_to_choose_2(rpg_t rpg)
{
    rpg.inv.choose_edb.texture = sfTexture_createFromFile(
    "assets/inv/inv/inv_epee.png", NULL);
    rpg.inv.choose_edb.sprite = sfSprite_create();
    sfSprite_setTexture(rpg.inv.choose_edb.sprite,
    rpg.inv.choose_edb.texture, sfTrue);
    rpg.inv.choose_l.texture = sfTexture_createFromFile(
    "assets/inv/inv/inv_lance.png", NULL);
    rpg.inv.choose_l.sprite = sfSprite_create();
    sfSprite_setTexture(rpg.inv.choose_l.sprite,
    rpg.inv.choose_l.texture, sfTrue);
    rpg.inv.choose_s.texture = sfTexture_createFromFile(
    "assets/inv/inv/inv_shuriken.png", NULL);
    rpg.inv.choose_s.sprite = sfSprite_create();
    sfSprite_setTexture(rpg.inv.choose_s.sprite,
    rpg.inv.choose_s.texture, sfTrue);
    return (rpg);
}

rpg_t set_weapons_to_choose(rpg_t rpg)
{
    rpg.inv.choose_a.texture = sfTexture_createFromFile(
    "assets/inv/inv/inv_ache.png", NULL);
    rpg.inv.choose_a.sprite = sfSprite_create();
    sfSprite_setTexture(rpg.inv.choose_a.sprite,
    rpg.inv.choose_a.texture, sfTrue);
    rpg.inv.choose_el.texture = sfTexture_createFromFile(
    "assets/inv/inv/inv_e_longue.png", NULL);
    rpg.inv.choose_el.sprite = sfSprite_create();
    sfSprite_setTexture(rpg.inv.choose_el.sprite,
    rpg.inv.choose_el.texture, sfTrue);
    rpg = set_weapons_to_choose_2(rpg);
    rpg = set_rect_wep_to_choose(rpg);
    return (rpg);
}