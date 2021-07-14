/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** yeah
*/

#include "rpg.h"

rpg_t arrows(rpg_t rpg)
{
    if (rpg.inv.vmouse.x > 560 && rpg.inv.vmouse.x < 590 &&
    rpg.inv.vmouse.y > 475 && rpg.inv.vmouse.y < 510 && rpg.inv.inv == 1) {
        sfText_setCharacterSize(rpg.inv.tleft, 80);
        rpg.inv.vleft.y = 432;
    }
    else {
        sfText_setCharacterSize(rpg.inv.tleft, 60);
        rpg.inv.vleft.y = 447;
    }
    if (rpg.inv.vmouse.x > 720 && rpg.inv.vmouse.x < 750 &&
    rpg.inv.vmouse.y > 475 && rpg.inv.vmouse.y < 510 && rpg.inv.inv == 1) {
        sfText_setCharacterSize(rpg.inv.tright, 80);
        rpg.inv.vright.y = 432;
    }
    else {
        sfText_setCharacterSize(rpg.inv.tright, 60);
        rpg.inv.vright.y = 447;
    }
    return (rpg);
}

rpg_t display_text(rpg_t rpg, sfRenderWindow *window)
{
    sfText_setString(rpg.inv.tleft, "<");
    sfText_setPosition(rpg.inv.tleft, rpg.inv.vleft);
    sfRenderWindow_drawText(window, rpg.inv.tleft, NULL);
    sfText_setString(rpg.inv.tright, ">");
    sfText_setPosition(rpg.inv.tright, rpg.inv.vright);
    sfRenderWindow_drawText(window, rpg.inv.tright, NULL);
    rpg = arrows(rpg);
    rpg = select_weapon(rpg);
    sfSprite_setPosition(rpg.inv.on_me.sprite, rpg.inv.on_me.vect);
    sfRenderWindow_drawSprite(window, rpg.inv.on_me.sprite, NULL);
    return (rpg);
}

rpg_t go_move(rpg_t rpg)
{
    sfTime time = sfClock_getElapsedTime(rpg.inv.ccarac);
    float seconds = time.microseconds/100000.0;
    if (seconds >= 3) {
        if (rpg.inv.caracter.rect.left == 540) {
            rpg = move_rect(rpg);
        } else {
            rpg = move_rect_2(rpg);
        } sfClock_restart(rpg.inv.ccarac);
    }
    return (rpg);
}

rpg_t display_inv(sfRenderWindow *window, rpg_t rpg)
{
    rpg = go_move(rpg);
    sfSprite_setPosition(rpg.inv.invv.sprite, rpg.inv.invv.vect);
    sfRenderWindow_drawSprite(window, rpg.inv.invv.sprite, NULL);
    sfSprite_setTextureRect(rpg.inv.caracter.sprite, rpg.inv.caracter.rect);
    sfSprite_setPosition(rpg.inv.caracter.sprite, rpg.inv.caracter.vect);
    sfRenderWindow_drawSprite(window, rpg.inv.caracter.sprite, NULL);
    rpg = display_weapon(rpg, window);
    rpg = display_weapon_to_choose(rpg, window);
    rpg = display_text(rpg, window);
    return (rpg);
}