/*
** EPITECH PROJECT, 2020
** shop_bis.c
** File description:
** shop bis functions
*/

#include "my.h"

def_t case_a_b(def_t gnl)
{
    if ((gnl.event.mouseButton.x <= 1050) && (gnl.event.mouseButton.x >= 860) &&
        (gnl.event.mouseButton.y <= 362) && (gnl.event.mouseButton.y > 212)) {
        gnl.case_a = 1;
        gnl.case_b = 0;
        gnl.case_c = 0;
        gnl.case_d = 0;
        gnl.case_e = 0;
        gnl.case_f = 0;
    }
    if ((gnl.event.mouseButton.x <= 700) && (gnl.event.mouseButton.x >= 496) &&
        (gnl.event.mouseButton.y <= 555) && (gnl.event.mouseButton.y > 394)) {
        gnl.case_a = 0;
        gnl.case_b = 1;
        gnl.case_c = 0;
        gnl.case_d = 0;
        gnl.case_e = 0;
        gnl.case_f = 0;
    }
    return gnl;
}

def_t case_c_d(def_t gnl)
{
    if ((gnl.event.mouseButton.x <= 691) && (gnl.event.mouseButton.x >= 487) &&
        (gnl.event.mouseButton.y <= 940) && (gnl.event.mouseButton.y > 777)) {
        gnl.case_a = 0;
        gnl.case_b = 0;
        gnl.case_c = 1;
        gnl.case_d = 0;
        gnl.case_e = 0;
        gnl.case_f = 0;
    }
    if ((gnl.event.mouseButton.x <= 1066) && (gnl.event.mouseButton.x >= 877) &&
        (gnl.event.mouseButton.y <= 858) && (gnl.event.mouseButton.y > 705)) {
        gnl.case_a = 0;
        gnl.case_b = 0;
        gnl.case_c = 0;
        gnl.case_d = 1;
        gnl.case_e = 0;
        gnl.case_f = 0;
    }
    return gnl;
}

def_t case_e_f(def_t gnl)
{
    if (gnl.event.mouseButton.x <= 1378 && (gnl.event.mouseButton.x >= 1201)
        && (gnl.event.mouseButton.y <= 960) &&
        (gnl.event.mouseButton.y > 796)) {
        gnl.case_a = 0;
        gnl.case_b = 0;
        gnl.case_c = 0;
        gnl.case_d = 0;
        gnl.case_e = 1;
        gnl.case_f = 0;
    }
    if ((gnl.event.mouseButton.x <= 385) && (gnl.event.mouseButton.x >= 180) &&
        (gnl.event.mouseButton.y <= 759) && (gnl.event.mouseButton.y > 592)) {
        gnl.case_a = 0;
        gnl.case_b = 0;
        gnl.case_c = 0;
        gnl.case_d = 0;
        gnl.case_e = 0;
        gnl.case_f = 1;
    }
    return gnl;
}
