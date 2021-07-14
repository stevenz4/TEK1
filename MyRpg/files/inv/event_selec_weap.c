/*
** EPITECH PROJECT, 2020
** event
** File description:
** yeah
*/

#include "rpg.h"

rpg_t event_selec_weap(rpg_t rpg, int x_click, int y_click)
{
    if (x_click > 810 && x_click < 840 &&
    y_click > 365 && y_click < 600 && rpg.inv.inv == 1) {
        rpg.inv.my_weapon = 0;
        rpg.inv.on_me.vect.x = 800;
    } if (x_click > 910 && x_click < 940 &&
    y_click > 350 && y_click < 600 && rpg.inv.inv == 1 && rpg.inv.wep1 == 1) {
        rpg.inv.my_weapon = 1;
        rpg.inv.on_me.vect.x = 900;
    } if (x_click > 1000 && x_click < 1065 &&
    y_click > 330 && y_click < 655 && rpg.inv.inv == 1 && rpg.inv.wep2 == 1) {
        rpg.inv.my_weapon = 2;
        rpg.inv.on_me.vect.x = 1002;
    } if (x_click > 1110 && x_click < 1210 &&
    y_click > 430 && y_click < 585 && rpg.inv.inv == 1 && rpg.inv.wep3 == 1) {
        rpg.inv.my_weapon = 3;
        rpg.inv.on_me.vect.x = 1137;
    } if (x_click > 1230 && x_click < 1340 &&
    y_click > 350 && y_click < 650 && rpg.inv.inv == 1 && rpg.inv.wep4 == 1) {
        rpg.inv.my_weapon = 4;
        rpg.inv.on_me.vect.x = 1255;
    } return (rpg);
}