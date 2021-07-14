/*
** EPITECH PROJECT, 2020
** shop2.c
** File description:
** shop 2 functions
*/

#include "my.h"

def_t shop_e(def_t gnl)
{
    if (gnl.case_e == 1) {
        if (gnl.event.type == sfEvtMouseButtonPressed) {
            gnl = e_1(gnl);
            if ((gnl.mouse_pos.x < 1630) && (gnl.mouse_pos.x > 1455)
                && (gnl.mouse_pos.y < 662) && (gnl.mouse_pos.y > 440) &&
                gnl.imoney >= 500 && gnl.fire_e == 0) {
                gnl.imoney = gnl.imoney - 500;
                gnl = str_money(gnl, gnl.imoney);
                gnl.fire_t[4].texture = sfTexture_createFromFile
                    ("assets/towers/fire_tower.png", NULL);
                gnl.fire_e = 1;
                return gnl;
            }
        }
        e_2(gnl);
    }
    return gnl;
}

def_t e_1(def_t gnl)
{
    if ((gnl.mouse_pos.x < 1812) && (gnl.mouse_pos.x > 1637) &&
        (gnl.mouse_pos.y < 662) && (gnl.mouse_pos.y > 440) &&
        gnl.imoney >= 1150 && gnl.fire2_e == 1 && gnl.fire3_e == 0) {
        gnl.imoney = gnl.imoney - 1150;
        gnl = str_money(gnl, gnl.imoney);
        gnl.fire_rect[4].top = 660;
        gnl.fire3_e = 1;
        return gnl;
    }
    if ((gnl.mouse_pos.x < 1630) && (gnl.mouse_pos.x > 1455) &&
        (gnl.mouse_pos.y < 662) && (gnl.mouse_pos.y > 440) &&
        gnl.imoney >= 850 && gnl.fire_e == 1 && gnl.fire2_e == 0) {
        gnl.imoney = gnl.imoney - 850;
        gnl = str_money(gnl, gnl.imoney);
        gnl.fire_rect[4].top = 330;
        gnl.fire2_e = 1;
        return gnl;
    }
    return gnl;
}

void e_2(def_t gnl)
{
    gnl.ftp_rect.width = 175;
    gnl.ftp_rect.left = 0;
    if (gnl.fire_e == 1) {
        gnl.ftp_rect.width = 350;
        gnl.ftp_rect.left = 175;
    }
    sfSprite_setTextureRect(gnl.ft1.sprite, gnl.ftp_rect);
    sfRenderWindow_drawSprite(gnl.window , gnl.shop.sprite, NULL);
    sfRenderWindow_drawSprite(gnl.window , gnl.ft1.sprite, NULL);
}
