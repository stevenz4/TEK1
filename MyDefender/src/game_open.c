/*
** EPITECH PROJECT, 2020
** game_open
** File description:
** while game is open
*/

#include "my.h"

void menu_event_handle(def_t gnl)
{
    while (sfRenderWindow_pollEvent(gnl.window, &gnl.event)) {
        if (gnl.event.type == sfEvtClosed)
            sfRenderWindow_close(gnl.window);
        if (gnl.event.mouseButton.type == sfEvtMouseButtonPressed) {
            click_sound(gnl);
            menu_event_handle2(gnl);
        }
    }
}

void menu_event_handle2(def_t gnl)
{
    if ((gnl.event.mouseButton.x < (gnl.mode.width / 2) + 95) &&
        (gnl.event.mouseButton.x > (gnl.mode.width / 2) - 95) &&
        (gnl.event.mouseButton.y < gnl.mode.height / 1.5 + 24.5) &&
        (gnl.event.mouseButton.y > (gnl.mode.height / 1.5) - 24.5))
        sfRenderWindow_close(gnl.window);
    if ((gnl.event.mouseButton.x < (gnl.mode.width / 2) + 95) &&
        (gnl.event.mouseButton.x > (gnl.mode.width / 2) - 95) &&
        (gnl.event.mouseButton.y < gnl.mode.height / 1.8 + 24.5) &&
        (gnl.event.mouseButton.y > (gnl.mode.height / 1.8) - 24.5))
        options_menu(gnl);
    if ((gnl.event.mouseButton.x < (gnl.mode.width / 2) + 95) &&
        (gnl.event.mouseButton.x > (gnl.mode.width / 2) - 95) &&
        (gnl.event.mouseButton.y < gnl.mode.height / 2.3 + 24.5) &&
        (gnl.event.mouseButton.y > gnl.mode.height / 2.3 - 24.5)) {
        option_map(gnl);
    }
}

void menu_buttons_animation(def_t gnl)
{
    if ((gnl.mouse_pos.x < (gnl.mode.width / 2) + 95) &&
        (gnl.mouse_pos.x > (gnl.mode.width / 2) - 95) &&
        (gnl.mouse_pos.y < (gnl.mode.height / 1.5) + 24.5) &&
        (gnl.mouse_pos.y > (gnl.mode.height / 1.5) - 24.5)) {
        gnl.quit_rect.height = 49;
        gnl.quit_rect.top = 47;
        sfSprite_setTextureRect(gnl.quit_b.sprite, gnl.quit_rect);
        sfSprite_setPosition(gnl.quit_b.sprite, gnl.quit_pos);
        sfRenderWindow_drawSprite(gnl.window, gnl.quit_b.sprite, NULL);
        sfRenderWindow_display(gnl.window);
    }
    menu_buttons_animation2(gnl);
}

void menu_buttons_animation2(def_t gnl)
{
    if ((gnl.mouse_pos.x < (gnl.mode.width / 2) + 95) &&
        (gnl.mouse_pos.x > (gnl.mode.width / 2) - 95) &&
        (gnl.mouse_pos.y < (gnl.mode.height / 1.8) + 24.5) &&
        (gnl.mouse_pos.y > (gnl.mode.height / 1.8) - 24.5)) {
        gnl.option_rect.height = 49;
        gnl.option_rect.top = 47;
        sfSprite_setTextureRect(gnl.option_b.sprite, gnl.option_rect);
        sfSprite_setPosition(gnl.option_b.sprite, gnl.option_pos);
        sfRenderWindow_drawSprite(gnl.window, gnl.option_b.sprite, NULL);
        sfRenderWindow_display(gnl.window);
    }
    menu_buttons_animation3(gnl);
}

void menu_buttons_animation3(def_t gnl)
{
    if ((gnl.mouse_pos.x < (gnl.mode.width / 2) + 95) &&
        (gnl.mouse_pos.x > (gnl.mode.width / 2) - 95) &&
        (gnl.mouse_pos.y < (gnl.mode.height / 2.3) + 24.5) &&
        (gnl.mouse_pos.y > (gnl.mode.height / 2.3) - 24.5)) {
        gnl.play_rect.height = 49;
        gnl.play_rect.top = 47;
        sfSprite_setTextureRect(gnl.play_b.sprite, gnl.play_rect);
        sfSprite_setPosition(gnl.play_b.sprite, gnl.play_pos);
        sfRenderWindow_drawSprite(gnl.window, gnl.play_b.sprite, NULL);
        sfRenderWindow_display(gnl.window);
    }
}
