/*
** EPITECH PROJECT, 2020
** money.c
** File description:
** money.c
*/

#include "my.h"

def_t str_money_two(def_t gnl, int x, int y)
{
    if (y >= 10 && y <= 99) {
        gnl.money.str[0] = ' ';
        gnl.money.str[1] = ' ';
        gnl.money.str[2] = (x / 10) + 48;
        gnl.money.str[3] = (x % 10) + 48;
    }
    if (y <= 9) {
        gnl.money.str[0] = ' ';
        gnl.money.str[1] = ' ';
        gnl.money.str[2] = ' ';
        gnl.money.str[3] = x + 48;
    }
    if (y >= 9999) {
        gnl.money.str[0] = '9';
        gnl.money.str[1] = '9';
        gnl.money.str[2] = '9';
        gnl.money.str[3] = '9';
    }
    return (gnl);
}

def_t str_money(def_t gnl, int x)
{
    int y = x;
    if (y >= 1000) {
        gnl.money.str[0] = (x / 1000) + 48;
        x = x % 1000;
        gnl.money.str[1] = (x / 100) + 48;
        x = x % 100;
        gnl.money.str[2] = (x / 10) + 48;
        gnl.money.str[3] = (x % 10) + 48;
    }
    if (y >= 100 && y <= 999) {
        gnl.money.str[0] = ' ';
        gnl.money.str[1] = (x / 100) + 48;
        x = x % 100;
        gnl.money.str[2] = (x / 10) + 48;
        gnl.money.str[3] = (x % 10) + 48;
    }
    gnl = str_money_two(gnl, x, y);
    return gnl;
}

def_t money(def_t gnl)
{
    int x = my_getnbr_2(gnl.money.str);
    gnl.m_clock.time = sfClock_getElapsedTime(gnl.m_clock.clock);
    gnl.m_clock.seconds = gnl.m_clock.time.microseconds / 1000000.0;

    if (gnl.m_clock.seconds >= 1.0) {
        x = x + gnl.gold_sec;
        gnl = str_money(gnl, x);
        sfClock_restart(gnl.m_clock.clock);
    }
    return gnl;
}
