/*
** EPITECH PROJECT, 2020
** initialisation_part3
** File description:
** initialize all objects
*/

#include "my.h"

def_t init_11(def_t gnl)
{
    gnl.lmapa_rect.height = 300;
    gnl.lmapa_rect.width = 300;
    gnl.lmapa_rect.top = 0;
    gnl.lmapa_rect.left = 0;
    gnl.lmapb_rect.height = 300;
    gnl.lmapb_rect.width = 300;
    gnl.lmapb_rect.top = 0;
    gnl.lmapb_rect.left = 0;
    gnl.lmapc_rect.height = 300;
    gnl.lmapc_rect.width = 300;
    gnl.lmapc_rect.top = 0;
    gnl.lmapc_rect.left = 0;
    gnl.fire_a = 0;
    gnl.fire_b = 0;
    gnl.fire_c = 0;
    gnl.fire_e = 0;
    gnl.lvl = 10;
    gnl.count = 0;
    return gnl;
}

def_t init_12(def_t gnl)
{
    gnl.shop.texture = sfTexture_createFromFile
    ("assets/shop/shop_sign.png", NULL);
    gnl.shop.sprite = sfSprite_create();
    gnl.shop_pos.x = 1400;
    gnl.shop_pos.y = 400;
    gnl.lose = 0;
    gnl.tlose.font = sfFont_createFromFile("assets/land.otf");
    gnl.tlose.text = sfText_create();
    gnl.tlose.str = "Game Over";
    sfText_setCharacterSize(gnl.tlose.text, 250);
    gnl.gold_sec = 1;
    gnl.rock_t.texture = sfTexture_createFromFile
    ("assets/towers/void.png", NULL);
    gnl.rock_t.sprite = sfSprite_create();
    gnl.fire2_a = 0;
    return gnl;
}

def_t init_13(def_t gnl)
{
    gnl.ft1.texture = sfTexture_createFromFile
    ("assets/shop/fire_price.png", NULL);
    gnl.ft1.sprite = sfSprite_create();
    gnl.shop_left.x = 1455;
    gnl.shop_left.y = 440;
    gnl.case_c_pos.x = 510;
    gnl.case_c_pos.y = 575;
    gnl.bank_min.texture = sfTexture_createFromFile
    ("assets/shop/bank_price.png", NULL);
    gnl.bank_min.sprite = sfSprite_create();
    gnl.rbank.height = 187;
    gnl.rbank.width = 164;
    gnl.rbank.left = 0;
    gnl.rbank.top = 0;
    gnl.bank.texture = sfTexture_createFromFile("assets/towers/void.png", NULL);
    gnl.bank.sprite = sfSprite_create();
    gnl.bank_a = 0;
    return gnl;
}

def_t init_rect(def_t gnl)
{
    int i = 0;

    while (i != 5) {
        gnl.fire_t[i].texture = sfTexture_createFromFile
        ("assets/towers/void.png", NULL);
        gnl.fire_t[i].sprite = sfSprite_create();
        gnl.fire_rect[i].left = 0;
        gnl.fire_rect[i].top = 0;
        gnl.fire_rect[i].height = 330;
        gnl.fire_rect[i].width = 162;
        i++;
    }
    gnl.ftp_rect.height = 222;
    gnl.ftp_rect.width = 175;
    gnl.ftp_rect.left = 0;
    gnl.ftp_rect.top = 0;
    return gnl;
}

def_t init_14(def_t gnl)
{
    gnl.fire2_b = 0;
    gnl.fire2_c = 0;
    gnl.fire2_e = 0;
    gnl.fire3_a = 0;
    gnl.fire3_b = 0;
    gnl.fire3_c = 0;
    gnl.fire3_e = 0;
    gnl.rock2_d = 0;
    gnl.rock3_d = 0;
    gnl.rock_rect.width = 162;
    gnl.rock_rect.height = 330;
    gnl.rt1.texture = sfTexture_createFromFile
    ("assets/shop/rock_price.png", NULL);
    gnl.rt1.sprite = sfSprite_create();
    gnl.rtp_rect.width = 175;
    gnl.rtp_rect.height = 222;
    gnl.rtp_rect.left = 0;
    gnl.rtp_rect.top = 0;
    return gnl;
}