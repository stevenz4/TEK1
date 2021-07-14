/*
** EPITECH PROJECT, 2020
** initialisation
** File description:
** initalize all objects
*/

#include "my.h"

def_t init_5(def_t gnl)
{
    sfText_setCharacterSize(gnl.option_map.text, 100);
    sfText_setCharacterSize(gnl.map_a.text, 40);
    sfText_setCharacterSize(gnl.map_b.text, 40);
    sfText_setCharacterSize(gnl.map_c.text, 40);
    sfText_setCharacterSize(gnl.money.text, 85);
    sfText_setCharacterSize(gnl.life.text, 85);
    gnl.lmap_a.texture = sfTexture_createFromFile("assets/lmap_a.png", NULL);
    gnl.lmap_b.texture = sfTexture_createFromFile("assets/lmap_a.png", NULL);
    gnl.lmap_c.texture = sfTexture_createFromFile("assets/lmap_a.png", NULL);
    gnl.text_lvl.font = sfFont_createFromFile("assets/land.otf");
    gnl.text_lvl.text = sfText_create();
    gnl.text_lvl.str = "Level 1";
    sfText_setCharacterSize(gnl.text_lvl.text, 150);
    gnl.lmap_a.sprite = sfSprite_create();
    gnl.lmap_b.sprite = sfSprite_create();
    gnl.lmap_c.sprite = sfSprite_create();
    gnl.money.str = my_strcpy(gnl.money.str, "2500");
    gnl.life.str = my_strcpy(gnl.life.str, "100");
    return gnl;
}

def_t init_4(def_t gnl)
{
    gnl.option_map.font = sfFont_createFromFile("assets/land.otf");
    gnl.map_a.font = sfFont_createFromFile("assets/land.otf");
    gnl.map_b.font = sfFont_createFromFile("assets/land.otf");
    gnl.map_c.font = sfFont_createFromFile("assets/land.otf");
    gnl.money.font = sfFont_createFromFile("assets/land.otf");
    gnl.life.font = sfFont_createFromFile("assets/land.otf");
    gnl.option_map.text = sfText_create();
    gnl.map_a.text = sfText_create();
    gnl.map_b.text = sfText_create();
    gnl.map_c.text = sfText_create();
    gnl.money.text = sfText_create();
    gnl.life.text = sfText_create();
    gnl.option_map.str = "Choose your map";
    gnl.map_a.str = "Map 1";
    gnl.map_b.str = "Map 2";
    gnl.map_c.str = "Map 3";
    gnl.money.str = malloc(sizeof(char) * 10);
    gnl.life.str = malloc(sizeof(char) * 4);
    return (gnl);
}

def_t init_3(def_t gnl)
{
    gnl.plus_b.texture = sfTexture_createFromFile
    ("assets/buttons/plus_b.png", NULL);
    gnl.plus_b.sprite = sfSprite_create();
    gnl.sound_vol.texture = sfTexture_createFromFile
    ("assets/buttons/sound_vol.png", NULL);
    gnl.sound_vol.sprite = sfSprite_create();
    gnl.back_b.texture = sfTexture_createFromFile
    ("assets/buttons/back_b.png", NULL);
    gnl.back_b.sprite = sfSprite_create();
    gnl.map.texture = sfTexture_createFromFile("assets/map_holes.png", NULL);
    gnl.map.sprite = sfSprite_create();
    gnl.title.texture = sfTexture_createFromFile("assets/title.png", NULL);
    gnl.title.sprite = sfSprite_create();
    return gnl;
}

def_t init_2(def_t gnl)
{
    gnl.back.texture = sfTexture_createFromFile("assets/background.jpg", NULL);
    gnl.back.sprite = sfSprite_create();
    gnl.quit_b.texture = sfTexture_createFromFile
    ("assets/buttons/quit_b.png", NULL);
    gnl.quit_b.sprite = sfSprite_create();
    gnl.option_b.texture = sfTexture_createFromFile
    ("assets/buttons/options_b.png", NULL);
    gnl.option_b.sprite = sfSprite_create();
    gnl.play_b.texture = sfTexture_createFromFile
    ("assets/buttons/play_b.png", NULL);
    gnl.play_b.sprite = sfSprite_create();
    gnl.sound_b.texture = sfTexture_createFromFile
    ("assets/buttons/sound_b.png", NULL);
    gnl.sound_b.sprite = sfSprite_create();
    gnl.minus_b.texture = sfTexture_createFromFile
    ("assets/buttons/minus_b.png", NULL);
    gnl.minus_b.sprite = sfSprite_create();
    return gnl;
}

def_t initialisation(def_t gnl)
{
    gnl = init_2(gnl);
    gnl = init_3(gnl);
    gnl = init_4(gnl);
    gnl = init_5(gnl);
    gnl = init_6(gnl);
    gnl = init_7(gnl);
    gnl = init_8(gnl);
    gnl = init_9(gnl);
    gnl = init_10(gnl);
    gnl = init_11(gnl);
    gnl = init_12(gnl);
    gnl = init_skull(gnl);
    gnl = init_13(gnl);
    gnl = init_14(gnl);
    gnl = init_15(gnl);
    gnl = init_rect(gnl);
    return gnl;
}
