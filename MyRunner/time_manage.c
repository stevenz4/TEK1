/*
** EPITECH PROJECT, 2020
** time_manage
** File description:
** clock function
*/

#include "include/my.h"

void time_manage(double sec)
{
    sfClock *clock;
    sfTime time;
    float seconds;

    clock = sfClock_create();
    for (float i = -1.0; i < sec;) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
        i = i + (seconds - i);
        if (seconds > 1.0 && i < sec)
            sfClock_restart(clock);
    }
    sfClock_destroy(clock);
}
