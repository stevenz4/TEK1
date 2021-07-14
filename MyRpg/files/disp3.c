/*
** EPITECH PROJECT, 2020
** disp
** File description:
** disp
*/

#include "rpg.h"

rpg_t disp_in_game(rpg_t rpg)
{
    sfRenderWindow_clear(rpg.window, sfBlack);
    disp_back(rpg);
    disp_caracter(rpg);
    sfRenderWindow_drawSprite(rpg.window, rpg.map.back2.sprite, NULL);
    disp_mouse(rpg);
    sfRenderWindow_display(rpg.window);
    return (rpg);
}

int disp_back(rpg_t rpg)
{
    sfVector2f back = {rpg.map.pos_back_x, rpg.map.pos_back_y};

    sfSprite_setPosition(rpg.map.back.sprite, back);
    sfSprite_setPosition(rpg.map.back2.sprite, back);
    sfRenderWindow_drawSprite(rpg.window, rpg.map.back.sprite, NULL);
    return (0);
}

int disp_caracter(rpg_t rpg)
{
    rpg.map = set_caracter(rpg.map);
    sfSprite_setPosition(rpg.map.caracter.sprite, rpg.map.caracter_pos);
    sfSprite_setTextureRect(rpg.map.caracter.sprite, rpg.map.caracter_rect);
    sfRenderWindow_drawSprite(rpg.window, rpg.map.caracter.sprite, NULL);
    return (0);
}