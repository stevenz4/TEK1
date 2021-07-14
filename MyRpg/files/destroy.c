/*
** EPITECH PROJECT, 2020
** destr
** File description:
** destr
*/
#include "rpg.h"

void destroy_intro(rpg_t rpg)
{
    sfClock_destroy(rpg.fgt.hero_clock.clock);
    sfClock_destroy(rpg.fgt.enemy_clock.clock);
    sfClock_destroy(rpg.fgt.cursor_clock.clock);
    sfClock_destroy(rpg.fgt.back_intro_clock.clock);
    destroy_texture(rpg.intro.background);
    destroy_texture(rpg.intro.paysage);
    destroy_texture(rpg.intro.character);
    destroy_texture(rpg.intro.bulle);
    destroy_texture(rpg.intro.rect);
    sfText_destroy(rpg.intro.text1);
    sfText_destroy(rpg.intro.text2);
    sfText_destroy(rpg.intro.text3);
    sfClock_destroy(rpg.intro.clock);
    sfClock_destroy(rpg.intro.clock_char);
    free(rpg.intro.int1);
    free(rpg.intro.int2);
    free(rpg.intro.pseudo);
}

int destroy2(map_t map, rpg_t rpg)
{
    sfMusic_destroy(rpg.audio.music);
    sfSound_destroy(rpg.audio.bling.sound);
    sfSoundBuffer_destroy(rpg.audio.bling.buffer);
    sfClock_destroy(map.m_clock);
    destroy_texture(map.back);
    destroy_texture(map.back2);
    destroy_texture(map.caracter);
    destroy_texture(rpg.fgt.back);
    destroy_texture(rpg.fgt.ui);
    destroy_texture(rpg.fgt.cursor);
    destroy_texture(rpg.fgt.hero);
    destroy_texture(rpg.fgt.enemy);
    destroy_texture(rpg.fgt.shield_icon);
    destroy_texture(rpg.fgt.poison_icon);
    sfFont_destroy(rpg.fgt.e_hp.font);
    sfFont_destroy(rpg.fgt.hp.font);
    sfText_destroy(rpg.fgt.e_hp.text);
    destroy_inventory(rpg);
    destroy3(rpg);
    return (0);
}

int destroy3(rpg_t rpg)
{
    sfText_destroy(rpg.fgt.hp.text);
    sfSound_destroy(rpg.fgt.music.sound);
    sfSound_destroy(rpg.fgt.click.sound);
    sfSoundBuffer_destroy(rpg.fgt.music.soundbuffer);
    sfSoundBuffer_destroy(rpg.fgt.click.soundbuffer);
    return (0);
}

int destroy(rpg_t rpg)
{
    if (rpg.in_game == 1)
        rpg = save_that(rpg);
    sfRenderWindow_destroy(rpg.window);
    destroy_texture(rpg.start_menu);
    destroy_texture(rpg.start_menu2);
    destroy_texture(rpg.mouse);
    destroy_texture(rpg.studio);
    destroy_texture(rpg.c_select);
    destroy_texture(rpg.dialogue.charac);
    destroy_texture(rpg.dialogue.rect);
    sfText_destroy(rpg.play.text);
    sfText_destroy(rpg.options.text);
    sfText_destroy(rpg.quit.text);
    sfText_destroy(rpg.music.text);
    sfFont_destroy(rpg.font);
    sfClock_destroy(rpg.clock);
    destroy_intro(rpg);
    destroy2(rpg.map, rpg);
    return (0);
}