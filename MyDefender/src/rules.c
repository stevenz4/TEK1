/*
** EPITECH PROJECT, 2020
** rules
** File description:
** rules
*/

#include "my.h"

void draw_font(def_t gnl)
{
    int i = 0;

    while (i != 9) {
        sfText_setString(gnl.rules[i].text, gnl.rules[i].str);
        sfText_setFont(gnl.rules[i].text, gnl.rules[i].font);
        i++;
    }
}

void draw_text(def_t gnl)
{
    int i = 0;

    while (i != 9) {
        sfRenderWindow_drawText(gnl.window, gnl.rules[i].text, NULL);
        i++;
    }
}

void rules(def_t gnl)
{
    sfText_setPosition(gnl.rules[0].text, (sfVector2f) {900, 80});
    sfText_setPosition(gnl.rules[1].text, (sfVector2f) {100, 200});
    sfText_setPosition(gnl.rules[2].text, (sfVector2f) {100, 250});
    sfText_setPosition(gnl.rules[3].text, (sfVector2f) {100, 300});
    sfText_setPosition(gnl.rules[4].text, (sfVector2f) {100, 350});
    sfText_setPosition(gnl.rules[5].text, (sfVector2f) {100, 400});
    sfText_setPosition(gnl.rules[6].text, (sfVector2f) {100, 450});
    sfText_setPosition(gnl.rules[7].text, (sfVector2f) {100, 500});
    sfText_setPosition(gnl.rules[8].text, (sfVector2f) {820, 650});
    while (sfRenderWindow_isOpen(gnl.window)) {
        sfSprite_setTexture(gnl.back.sprite, gnl.back.texture, sfTrue);
        draw_font(gnl);
        sfRenderWindow_drawSprite(gnl.window, gnl.back.sprite, NULL);
        draw_text(gnl);
        sfRenderWindow_display(gnl.window);
        while (sfRenderWindow_pollEvent(gnl.window, &gnl.event)) {
            if (gnl.event.type == sfEvtClosed)
                sfRenderWindow_close(gnl.window);
        }
    }
}

