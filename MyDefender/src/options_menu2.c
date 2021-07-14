/*
** EPITECH PROJECT, 2020
** options_menu2
** File description:
** options_menu2*
*/

#include "my.h"

void option_button_animation2(def_t gnl)
{
    if ((gnl.mouse_pos.x < (gnl.mode.width / 20) + 49) &&
        (gnl.mouse_pos.x > (gnl.mode.width / 20)) &&
        (gnl.mouse_pos.y < (gnl.mode.height / 20) + 49) &&
        (gnl.mouse_pos.y > (gnl.mode.height / 20))) {
        gnl.back_rect.height = 42;
        gnl.back_rect.top = 47;
        sfSprite_setTextureRect(gnl.back_b.sprite, gnl.back_rect);
        sfSprite_setPosition(gnl.back_b.sprite, gnl.back_pos);
        sfRenderWindow_drawSprite(gnl.window, gnl.back_b.sprite, NULL);
        sfRenderWindow_display(gnl.window);
    }
}

void option_button_animation3(def_t gnl)
{
    if ((gnl.mouse_pos.x < (gnl.mode.width / 2) + 49) &&
        (gnl.mouse_pos.x > (gnl.mode.width / 2)) &&
        (gnl.mouse_pos.y < (gnl.mode.height / 2) + 49) &&
        (gnl.mouse_pos.y > (gnl.mode.height / 2))) {
        gnl.plus_rect.height = 42;
        gnl.plus_rect.top = 47;
        sfSprite_setTextureRect(gnl.plus_b.sprite, gnl.plus_rect);
        sfSprite_setPosition(gnl.plus_b.sprite, gnl.plus_pos);
        sfRenderWindow_drawSprite(gnl.window, gnl.plus_b.sprite, NULL);
        sfRenderWindow_display(gnl.window);
    }
}