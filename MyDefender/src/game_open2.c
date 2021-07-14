/*
** EPITECH PROJECT, 2020
** game_open2.c
** File description:
** game_open 2
*/

#include "my.h"

void create_menu(def_t gnl)
{
    while (sfRenderWindow_isOpen(gnl.window)) {
        gnl.mouse_pos = sfMouse_getPositionRenderWindow(gnl.window);
        sfRenderWindow_clear(gnl.window, sfBlack);
        sfSprite_setTexture(gnl.back.sprite, gnl.back.texture, sfFalse);
        sfSprite_setTexture(gnl.quit_b.sprite, gnl.quit_b.texture, sfFalse);
        sfSprite_setTexture(gnl.option_b.sprite, gnl.option_b.texture, sfFalse);
        sfSprite_setTexture(gnl.play_b.sprite, gnl.play_b.texture, sfFalse);
        sfSprite_setTexture(gnl.title.sprite, gnl.title.texture, sfFalse);
        sfSprite_setTextureRect(gnl.quit_b.sprite, gnl.quit_rect);
        sfSprite_setTextureRect(gnl.option_b.sprite, gnl.option_rect);
        sfSprite_setTextureRect(gnl.play_b.sprite, gnl.play_rect);
        sfSprite_setPosition(gnl.quit_b.sprite, gnl.quit_pos);
        sfSprite_setPosition(gnl.option_b.sprite, gnl.option_pos);
        sfSprite_setPosition(gnl.play_b.sprite, gnl.play_pos);
        sfSprite_setPosition(gnl.title.sprite, gnl.title_pos);
        create_menu2(gnl);
    }
}

void create_menu2(def_t gnl)
{
    sfRenderWindow_drawSprite(gnl.window, gnl.back.sprite, NULL);
    sfRenderWindow_drawSprite(gnl.window, gnl.quit_b.sprite, NULL);
    sfRenderWindow_drawSprite(gnl.window, gnl.option_b.sprite, NULL);
    sfRenderWindow_drawSprite(gnl.window, gnl.play_b.sprite, NULL);
    sfRenderWindow_drawSprite(gnl.window, gnl.title.sprite, NULL);
    menu_buttons_animation(gnl);
    sfRenderWindow_display(gnl.window);
    menu_event_handle(gnl);
}