/*
** EPITECH PROJECT, 2020
** bank
** File description:
** bank
*/

#include "my.h"

def_t bank_animation(def_t gnl)
{
    gnl.f_clock[5].time = sfClock_getElapsedTime(gnl.f_clock[5].clock);
    gnl.f_clock[5].seconds = gnl.f_clock[5].time.microseconds / 1000000.0;

    if (gnl.f_clock[5].seconds > 0.1) {
        gnl.rbank.left = gnl.rbank.left + 164;
        if (gnl.rbank.left > 656)
            gnl.rbank.left = 0;
        sfClock_restart(gnl.f_clock[5].clock);
    }
    return gnl;
}