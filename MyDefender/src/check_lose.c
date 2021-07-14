/*
** EPITECH PROJECT, 2020
** check_lose
** File description:
** check_lose
*/

#include "my.h"

def_t event_lose(def_t gnl)
{
    while (sfRenderWindow_pollEvent(gnl.window, &gnl.event)) {
        if (gnl.event.type == sfEvtClosed)
            sfRenderWindow_close(gnl.window);
        if (gnl.event.mouseButton.type == sfEvtMouseButtonPressed) {
            if ((gnl.event.mouseButton.x < (gnl.mode.width / 2) + 95) &&
                (gnl.event.mouseButton.x > (gnl.mode.width / 2) - 95) &&
                gnl.event.mouseButton.y < (gnl.mode.height / 1.5) + 24.5 &&
                (gnl.event.mouseButton.y > (gnl.mode.height / 1.5) - 24.5))
                sfRenderWindow_close(gnl.window);
            gnl = event_lose_2(gnl);
        }
    }
}

void menu_buttons_animation_two(def_t gnl)
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
    menu_buttons_animation_two_bis(gnl);
}

void loser_screen(def_t gnl)
{
    sfText_setPosition(gnl.tlose.text, (sfVector2f) {560, 50});
    sfSprite_setPosition(gnl.quit_b.sprite, gnl.quit_pos);
    sfSprite_setPosition(gnl.play_b.sprite, gnl.play_pos);
    while (sfRenderWindow_isOpen(gnl.window)) {
        gnl.mouse_pos = sfMouse_getPositionRenderWindow(gnl.window);
        sfRenderWindow_clear(gnl.window, sfBlack);
        sfSprite_setTexture(gnl.back_two.sprite, gnl.back_two.texture, sfTrue);
        sfSprite_setTexture(gnl.quit_b.sprite, gnl.quit_b.texture, sfTrue);
        sfSprite_setTexture(gnl.play_b.sprite, gnl.play_b.texture, sfTrue);
        sfSprite_setTextureRect(gnl.quit_b.sprite, gnl.quit_rect);
        sfSprite_setTextureRect(gnl.play_b.sprite, gnl.play_rect);
        loser_screen2(gnl);
        sfRenderWindow_display(gnl.window);
        gnl = event_lose(gnl);
    }
}

def_t check_lose(def_t gnl)
{
    if (gnl.lose == 1)
        loser_screen(gnl);
    if (gnl.lose == 2) {
        gnl.tlose.str = "You win";
        loser_screen(gnl);
    }
    return gnl;
}
