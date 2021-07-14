/*
** EPITECH PROJECT, 2020
** write_lvl.c
** File description:
** write_lvl
*/

#include "my.h"

def_t write_lvl(def_t gnl)
{
    gnl.clock_gen.time = sfClock_getElapsedTime(gnl.clock_gen.clock);
    gnl.clock_gen.seconds = gnl.clock_gen.time.microseconds / 1000000.0;

    if (gnl.clock_gen.seconds <= 8.0)
        sfRenderWindow_drawText(gnl.window, gnl.text_lvl.text, NULL);
    if (gnl.clock_gen.seconds >= 44.0 && gnl.clock_gen.seconds <= 52.0)
            sfRenderWindow_drawText(gnl.window, gnl.text_lvl.text, NULL);
    if (gnl.clock_gen.seconds >= 92.0 && gnl.clock_gen.seconds <= 100.0)
        sfRenderWindow_drawText(gnl.window, gnl.text_lvl.text, NULL);
    return gnl;
}