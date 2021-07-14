/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** yeah
*/

#include "rpg.h"

rpg_t set_weapons_2(rpg_t rpg)
{
    rpg.inv.lance.texture = sfTexture_createFromFile(
    "assets/inv/lance.png", NULL);
    rpg.inv.lance.sprite = sfSprite_create();
    sfSprite_setTexture(rpg.inv.lance.sprite, rpg.inv.lance.texture, sfTrue);
    rpg.inv.shur.texture = sfTexture_createFromFile(
    "assets/inv/shuriken.png", NULL);
    rpg.inv.shur.sprite = sfSprite_create();
    sfSprite_setTexture(rpg.inv.shur.sprite, rpg.inv.shur.texture, sfTrue);
    rpg.inv.gilet.texture = sfTexture_createFromFile(
    "assets/inv/gilet_jaune.png", NULL);
    rpg.inv.gilet.sprite = sfSprite_create();
    sfSprite_setTexture(rpg.inv.gilet.sprite, rpg.inv.gilet.texture, sfTrue);
    rpg.inv.on_me.texture = sfTexture_createFromFile(
    "assets/inv/coche.png", NULL);
    rpg.inv.on_me.sprite = sfSprite_create();
    rpg.inv.on_me.vect.x = 800;
    rpg.inv.on_me.vect.y = 475;
    sfSprite_setTexture(rpg.inv.on_me.sprite, rpg.inv.on_me.texture, sfTrue);
    return (rpg);
}

rpg_t set_all_weapons(rpg_t rpg)
{
    rpg.inv.edb.texture = sfTexture_createFromFile(
    "assets/inv/epee_de_base.png", NULL);
    rpg.inv.edb.sprite = sfSprite_create();
    sfSprite_setTexture(rpg.inv.edb.sprite, rpg.inv.edb.texture, sfTrue);
    rpg.inv.ache.texture = sfTexture_createFromFile(
    "assets/inv/ache.png", NULL);
    rpg.inv.ache.sprite = sfSprite_create();
    sfSprite_setTexture(rpg.inv.ache.sprite, rpg.inv.ache.texture, sfTrue);
    rpg.inv.elongue.texture = sfTexture_createFromFile(
    "assets/inv/epee_longue.png", NULL);
    rpg.inv.elongue.sprite = sfSprite_create();
    sfSprite_setTexture(
    rpg.inv.elongue.sprite, rpg.inv.elongue.texture, sfTrue);
    rpg = set_weapons_2(rpg);
    return (rpg);
}

rpg_t set_text_inv(rpg_t rpg)
{
    rpg.inv.fleft = sfFont_createFromFile(
    "assets/inv/Enchanted Land.otf");
    rpg.inv.tleft = sfText_create();
    sfText_setFont(rpg.inv.tleft, rpg.inv.fleft);
    sfText_setCharacterSize(rpg.inv.tleft, 60);
    rpg.inv.vleft.x = 565;
    rpg.inv.vleft.y = 447;
    rpg.inv.fright = sfFont_createFromFile(
    "assets/inv/Enchanted Land.otf");
    rpg.inv.tright = sfText_create();
    sfText_setFont(rpg.inv.tright, rpg.inv.fright);
    sfText_setCharacterSize(rpg.inv.tright, 60);
    rpg.inv.vright.x = 722;
    rpg.inv.vright.y = 447;
    return (rpg);
}

rpg_t set_rect_inv(rpg_t rpg)
{
    sfVector2f position = {560, 330};
    sfIntRect rect = {0, 336, 180, 336};
    rpg.inv.caracter.rect = rect;
    rpg.inv.caracter.vect = position;
    rpg.inv.edb.rect = rect;
    rpg.inv.edb.vect = position;
    rpg.inv.elongue.rect = rect;
    rpg.inv.elongue.vect = position;
    rpg.inv.ache.rect = rect;
    rpg.inv.ache.vect = position;
    rpg.inv.gilet.rect = rect;
    rpg.inv.gilet.vect = position;
    rpg.inv.lance.rect = rect;
    rpg.inv.lance.vect = position;
    rpg.inv.shur.rect = rect;
    rpg.inv.shur.vect = position;
    return (rpg);
}

rpg_t create_sprites_inventory(rpg_t rpg)
{
    rpg.inv.caracter.texture = sfTexture_createFromFile(
    "assets/inv/caracter.png", NULL);
    rpg.inv.caracter.sprite = sfSprite_create();
    sfSprite_setTexture(rpg.inv.caracter.sprite,
    rpg.inv.caracter.texture, sfTrue);
    rpg.inv.invv.texture = sfTexture_createFromFile(
    "assets/inv/inv.png", NULL);
    rpg.inv.invv.sprite = sfSprite_create();
    sfSprite_setTexture(rpg.inv.invv.sprite, rpg.inv.invv.texture, sfTrue);
    rpg.inv.invv.vect.x = 340;
    rpg.inv.invv.vect.y = -100;
    rpg.inv.tfd = sfTexture_createFromFile("assets/inv/fd.jpg", NULL);
    rpg.inv.sfd = sfSprite_create();
    sfSprite_setTexture(rpg.inv.sfd, rpg.inv.tfd, sfTrue);
    rpg = set_variables(rpg);
    rpg = set_all_weapons(rpg);
    rpg = set_rect_inv(rpg);
    rpg = set_text_inv(rpg);
    rpg = set_weapons_to_choose(rpg);
    return (rpg);
}