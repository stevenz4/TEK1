/*
** EPITECH PROJECT, 2020
** life
** File description:
** life
*/

#include "my.h"

def_t life(def_t gnl)
{
    gnl.l_clock.time = sfClock_getElapsedTime(gnl.l_clock.clock);
    gnl.l_clock.seconds = gnl.l_clock.time.microseconds / 1000000.0;

    if (gnl.l_clock.seconds > 0.1) {
        gnl.rlife.left = gnl.rlife.left + 100;
        if (gnl.rlife.left > 600)
            gnl.rlife.left = 0;
        sfClock_restart(gnl.l_clock.clock);
    }
    return gnl;
}

def_t money_animation(def_t gnl)
{
    gnl.mon_clock.time = sfClock_getElapsedTime(gnl.mon_clock.clock);
    gnl.mon_clock.seconds = gnl.mon_clock.time.microseconds / 1000000.0;

    if (gnl.mon_clock.seconds > 0.1) {
        gnl.rmoney.left = gnl.rmoney.left + 100;
        if (gnl.rmoney.left > 600)
            gnl.rmoney.left = 0;
        sfClock_restart(gnl.mon_clock.clock);
    }
    return gnl;
}