/*
** EPITECH PROJECT, 2020
** initialisation_part2
** File description:
** initialize all objects
*/

#include "my.h"

def_t init_6(def_t gnl)
{
    gnl.quit_rect.left = 0;
    gnl.quit_rect.top = 0;
    gnl.quit_rect.height = 49;
    gnl.quit_rect.width = 190;
    gnl.option_rect.left = 0;
    gnl.option_rect.top = 0;
    gnl.option_rect.height = 49;
    gnl.option_rect.width = 190;
    gnl.play_rect.left = 0;
    gnl.play_rect.top = 0;
    gnl.play_rect.height = 49;
    gnl.play_rect.width = 190;
    gnl.rskull.width = 110;
    gnl.rskull.height = 110;
    gnl.rskull.left = 110;
    gnl.rskull.top = 0;
    return gnl;
}

def_t init_7(def_t gnl)
{
    gnl.play_pos.x = (gnl.mode.width / 2) - 95;
    gnl.play_pos.y = (gnl.mode.height / 2.3) - 24.5;
    gnl.option_pos.x = (gnl.mode.width / 2) - 95;
    gnl.option_pos.y = (gnl.mode.height / 1.8) - 24.5;
    gnl.quit_pos.x = (gnl.mode.width / 2) - 95;
    gnl.quit_pos.y = (gnl.mode.height / 1.5) - 24.5;
    gnl.title_pos.x = (gnl.mode.width / 3.75);
    gnl.title_pos.y = (gnl.mode.height / 10);
    return gnl;
}

def_t init_8(def_t gnl)
{
    gnl.smoney.texture = sfTexture_createFromFile("assets/money.png", NULL);
    gnl.smoney.sprite = sfSprite_create();
    gnl.slife.texture = sfTexture_createFromFile("assets/heart.png", NULL);
    gnl.slife.sprite = sfSprite_create();
    gnl.rlife.width = 100;
    gnl.rlife.height = 96;
    gnl.rlife.left = 0;
    gnl.rlife.top = 0;
    gnl.rmoney.width = 100;
    gnl.rmoney.height = 96;
    gnl.rmoney.left = 0;
    gnl.rmoney.top = 0;
    return gnl;
}

def_t init_9(def_t gnl)
{
    gnl.minus_rect.top = 0;
    gnl.minus_rect.left = 0;
    gnl.minus_rect.height = 49;
    gnl.minus_rect.width = 49;
    gnl.minus_pos.x = (gnl.mode.width / 3);
    gnl.minus_pos.y = (gnl.mode.height / 2);
    gnl.back_rect.top = 0;
    gnl.back_rect.left = 0;
    gnl.back_rect.height = 49;
    gnl.back_rect.width = 49;
    gnl.back_pos.x = (gnl.mode.width / 20);
    gnl.back_pos.y = (gnl.mode.height / 20);
    gnl.plus_rect.top = 0;
    gnl.plus_rect.left = 0;
    gnl.plus_rect.height = 49;
    gnl.plus_rect.width = 49;
    gnl.plus_pos.x = (gnl.mode.width / 2);
    gnl.plus_pos.y = (gnl.mode.height / 2);
    return gnl;
}

def_t init_10(def_t gnl)
{
    gnl.music1.soundbuffer = sfSoundBuffer_createFromFile("assets/music_2.ogg");
    gnl.music1.sound = sfSound_create();
    sfSound_setBuffer(gnl.music1.sound, gnl.music1.soundbuffer);
    sfSound_play(gnl.music1.sound);
    sfSound_setLoop(gnl.music1.sound, sfTrue);
    gnl.click1.soundbuffer = sfSoundBuffer_createFromFile("assets/click1.ogg");
    gnl.click1.sound = sfSound_create();
    sfSound_setBuffer(gnl.click1.sound, gnl.click1.soundbuffer);
    gnl.vol_rect.height = 17;
    gnl.vol_rect.width = 170;
    gnl.vol_rect.top = 0;
    gnl.vol_rect.left = 0;
    gnl.music1.sound_volume = 100;
    gnl.back_two.texture = sfTexture_createFromFile
    ("assets/background_2.jpg", NULL);
    gnl.back_two.sprite = sfSprite_create();
    return gnl;
}
