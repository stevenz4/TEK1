/*
** EPITECH PROJECT, 2020
** destroy_game
** File description:
** destroy_game
*/

#include "my.h"

void destroy_game_5(def_t gnl)
{
    sfTexture_destroy(gnl.sound_vol.texture);
    sfSprite_destroy(gnl.sound_vol.sprite);
    sfTexture_destroy(gnl.play_b.texture);
    sfSprite_destroy(gnl.play_b.sprite);
    sfTexture_destroy(gnl.back_b.texture);
    sfSprite_destroy(gnl.back_b.sprite);
    sfTexture_destroy(gnl.lmap_a.texture);
    sfSprite_destroy(gnl.lmap_a.sprite);
    sfTexture_destroy(gnl.lmap_b.texture);
    sfSprite_destroy(gnl.lmap_b.sprite);
    sfTexture_destroy(gnl.lmap_c.texture);
    sfSprite_destroy(gnl.lmap_c.sprite);
    sfTexture_destroy(gnl.map.texture);
    sfSprite_destroy(gnl.map.sprite);
    sfTexture_destroy(gnl.rock_t.texture);
    sfSprite_destroy(gnl.rock_t.sprite);
    sfTexture_destroy(gnl.smoney.texture);
    sfSprite_destroy(gnl.smoney.sprite);
}

void destroy_game_4(def_t gnl)
{
    sfTexture_destroy(gnl.shop.texture);
    sfSprite_destroy(gnl.shop.sprite);
    sfTexture_destroy(gnl.ft1.texture);
    sfSprite_destroy(gnl.ft1.sprite);
    sfTexture_destroy(gnl.bank_min.texture);
    sfSprite_destroy(gnl.bank_min.sprite);
    sfTexture_destroy(gnl.title.texture);
    sfSprite_destroy(gnl.title.sprite);
    sfTexture_destroy(gnl.option_b.texture);
    sfSprite_destroy(gnl.option_b.sprite);
    sfTexture_destroy(gnl.quit_b.texture);
    sfSprite_destroy(gnl.quit_b.sprite);
    sfTexture_destroy(gnl.sound_b.texture);
    sfSprite_destroy(gnl.sound_b.sprite);
    sfTexture_destroy(gnl.back.texture);
    sfSprite_destroy(gnl.back.sprite);
    sfTexture_destroy(gnl.minus_b.texture);
    sfSprite_destroy(gnl.minus_b.sprite);
    sfTexture_destroy(gnl.plus_b.texture);
    sfSprite_destroy(gnl.plus_b.sprite);
}

void destroy_game_3(def_t gnl)
{
    int i = 0;

    while (i != 50) {
        sfSprite_destroy(gnl.skull[i].sprite);
        sfTexture_destroy(gnl.skull[i].texture);
        i++;
    }
    i = 0;
    while (i != 5) {
        sfSprite_destroy(gnl.fire_t[i].sprite);
        sfTexture_destroy(gnl.fire_t[i].texture);
        i++;
    }
    i = 0;
    while (i != 6) {
        sfClock_destroy(gnl.f_clock[i].clock);
        i++;
    }
}

void destroy_game_2(def_t gnl)
{
    sfFont_destroy(gnl.option_map.font);
    sfFont_destroy(gnl.map_a.font);
    sfFont_destroy(gnl.map_b.font);
    sfFont_destroy(gnl.map_c.font);
    sfFont_destroy(gnl.text_lvl.font);
    sfFont_destroy(gnl.money.font);
    sfFont_destroy(gnl.life.font);
    sfFont_destroy(gnl.tlose.font);
    sfText_destroy(gnl.option_map.text);
    sfText_destroy(gnl.map_a.text);
    sfText_destroy(gnl.map_b.text);
    sfText_destroy(gnl.map_c.text);
    sfText_destroy(gnl.text_lvl.text);
    sfText_destroy(gnl.life.text);
    sfText_destroy(gnl.tlose.text);
}

void destroy_game(def_t gnl)
{
    sfRenderWindow_destroy(gnl.window);
    sfSoundBuffer_destroy(gnl.music1.soundbuffer);
    sfSoundBuffer_destroy(gnl.click1.soundbuffer);
    sfSound_destroy(gnl.music1.sound);
    sfSound_destroy(gnl.click1.sound);
    destroy_game_2(gnl);
    destroy_game_3(gnl);
    destroy_game_4(gnl);
    destroy_game_5(gnl);
    sfTexture_destroy(gnl.slife.texture);
    sfSprite_destroy(gnl.slife.sprite);
    destroy_game_6(gnl);
}
