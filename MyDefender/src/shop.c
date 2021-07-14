/*
** EPITECH PROJECT, 2020
** shop.c
** File description:
** handle shop
*/

#include "my.h"

def_t close_shop(def_t gnl)
{
    if ((gnl.case_a == 1 || gnl.case_b == 1 || gnl.case_c == 1 ||
        gnl.case_d == 1 || gnl.case_e == 1 || gnl.case_f == 1) &&
        ((gnl.event.mouseButton.x <= 1465) && (gnl.event.mouseButton.x >= 1431)
        && gnl.event.mouseButton.y <= 450 && gnl.event.mouseButton.y > 417)) {
        gnl.case_a = 0;
        gnl.case_b = 0;
        gnl.case_c = 0;
        gnl.case_d = 0;
        gnl.case_e = 0;
        gnl.case_f = 0;
    }
    return gnl;
}

def_t check_display_shop(def_t gnl)
{
    gnl = shop_a(gnl);
    gnl = shop_b(gnl);
    gnl = shop_c(gnl);
    gnl = shop_e(gnl);
    gnl = shop_f(gnl);
    return gnl;
}
