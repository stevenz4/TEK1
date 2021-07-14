/*
** EPITECH PROJECT, 2020
** check_lose2
** File description:
** check lose 2
*/

#include "my.h"

def_t event_lose_2(def_t gnl)
{
    if ((gnl.event.mouseButton.x < (gnl.mode.width / 2) + 95) &&
        (gnl.event.mouseButton.x > (gnl.mode.width / 2) - 95) &&
        (gnl.event.mouseButton.y < gnl.mode.height / 2.3 + 24.5) &&
        (gnl.event.mouseButton.y > gnl.mode.height / 2.3 - 24.5)) {
        click_sound(gnl);
        gnl.lose = 0;
        gnl = initialisation(gnl);
        gnl = init_skull(gnl);
        create_menu(gnl);
        sfSound_stop(gnl.music1.sound);
        sfSound_play(gnl.music1.sound);
    }
    return gnl;
}

void menu_buttons_animation_two_bis(def_t gnl)
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

void loser_screen2(def_t gnl)
{
    sfText_setString(gnl.tlose.text, gnl.tlose.str);
    sfText_setFont(gnl.tlose.text, gnl.tlose.font);
    sfRenderWindow_drawSprite(gnl.window, gnl.back_two.sprite, NULL);
    sfRenderWindow_drawSprite(gnl.window, gnl.play_b.sprite, NULL);
    sfRenderWindow_drawSprite(gnl.window, gnl.quit_b.sprite, NULL);
    sfRenderWindow_drawText(gnl.window, gnl.tlose.text, NULL);
    menu_buttons_animation_two(gnl);
}