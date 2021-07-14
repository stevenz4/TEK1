/*
** EPITECH PROJECT, 2020
** game
** File description:
** game
*/

#include "my.h"

def_t get_skull_pos(def_t gnl)
{
    for (int j = 0; j < 50; j++) {
        gnl.skull_vector[j] =  sfSprite_getPosition(gnl.skull[j].sprite);
        gnl.pos[j].one.x = gnl.skull_vector[j].x;
        gnl.pos[j].one.y = gnl.skull_vector[j].y;
        gnl.pos[j].two.x = gnl.skull_vector[j].x + 110;
        gnl.pos[j].two.y = gnl.skull_vector[j].y;
        gnl.pos[j].three.x = gnl.skull_vector[j].x;
        gnl.pos[j].three.y = gnl.skull_vector[j].y + 110;
        gnl.pos[j].four.x = gnl.skull_vector[j].x + 110;
        gnl.pos[j].four.y = gnl.skull_vector[j].y + 110;
    }
    return gnl;
}

def_t game_event(def_t gnl)
{
    while (sfRenderWindow_pollEvent(gnl.window, &gnl.event)) {
        if (gnl.event.type == sfEvtClosed)
            sfRenderWindow_close(gnl.window);
        if (gnl.event.type == sfEvtMouseButtonPressed) {
            click_sound(gnl);
            gnl = case_a_b(gnl);
            gnl = case_c_d(gnl);
            gnl = case_e_f(gnl);
            gnl = close_shop(gnl);
        }
    }
    return gnl;
}

void game(def_t gnl)
{
    gnl = game2(gnl);
    gnl = game3(gnl);
    while (sfRenderWindow_isOpen(gnl.window)) {
        gnl = game4(gnl);
        gnl = game5(gnl);
        sfRenderWindow_drawSprite(gnl.window , gnl.slife.sprite, NULL);
        sfRenderWindow_drawSprite(gnl.window , gnl.bank.sprite, NULL);
        sfRenderWindow_drawSprite(gnl.window , gnl.rock_t.sprite, NULL);
        gnl = draw_skull(gnl);
        gnl = draw_turrets(gnl);
        sfRenderWindow_drawText(gnl.window, gnl.money.text, NULL);
        sfRenderWindow_drawText(gnl.window, gnl.life.text, NULL);
        gnl = check_display_shop(gnl);
        gnl = pos_skull(gnl);
        gnl = write_lvl(gnl);
        gnl = check_lose(gnl);
        gnl = game_event(gnl);
        sfRenderWindow_display(gnl.window);
    }
}
