/*
** EPITECH PROJECT, 2020
** shop2.c
** File description:
** shop 2 functions
*/

#include "my.h"

def_t shop_f(def_t gnl)
{
    if (gnl.case_f == 1) {
        if (gnl.event.type == sfEvtMouseButtonPressed)
            gnl = f_1(gnl);
        f_2(gnl);
    }
    return gnl;
}

def_t f_1(def_t gnl)
{
    if ((gnl.mouse_pos.x < 1630) && (gnl.mouse_pos.x > 1455)
        && (gnl.mouse_pos.y < 662) && (gnl.mouse_pos.y > 440) &&
        gnl.imoney >= 1500 && gnl.bank_a == 0) {
        gnl.imoney = gnl.imoney - 1500;
        gnl = str_money(gnl, gnl.imoney);
        gnl.bank.texture = sfTexture_createFromFile
            ("assets/towers/bank.png", NULL);
        gnl.gold_sec = 2;
        gnl.bank_a = 1;
        return gnl;
    }
    return gnl;
}

void f_2(def_t gnl)
{
    gnl.ftp_rect.width = 175;
    gnl.ftp_rect.left = 0;
    sfSprite_setTextureRect(gnl.ft1.sprite, gnl.ftp_rect);
    sfRenderWindow_drawSprite(gnl.window , gnl.shop.sprite, NULL);
    sfRenderWindow_drawSprite(gnl.window , gnl.bank_min.sprite, NULL);
}
