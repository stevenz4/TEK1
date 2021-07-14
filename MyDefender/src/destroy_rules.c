/*
** EPITECH PROJECT, 2020
** destroy_rules
** File description:
** destroy_rules
*/

#include "my.h"

void destroy_rules(def_t gnl)
{
    int i = 0;
    sfRenderWindow_destroy(gnl.window);
    sfTexture_destroy(gnl.back.texture);
    sfSprite_destroy(gnl.back.sprite);
    sfSoundBuffer_destroy(gnl.music1.soundbuffer);
    sfSound_destroy(gnl.music1.sound);
    while (i != 10) {
        sfFont_destroy(gnl.rules[i].font);
        sfText_destroy(gnl.rules[i].text);
        i++;
    }
}
