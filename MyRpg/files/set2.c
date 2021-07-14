/*
** EPITECH PROJECT, 2020
** set
** File description:
** set
*/

#include "rpg.h"

rpg_t set_start_menu(rpg_t rpg)
{
    sfTime time;
    int seconds;

    rpg = set_button(rpg);
    rpg.start_menu.rect.left = 0;
    rpg.start_menu.rect.top = 0;
    time = sfClock_getElapsedTime(rpg.clock);
    seconds = time.microseconds / 100000.0;
    if (seconds > 3 && seconds < 6) {
        rpg.start_menu.rect.left = 1920;
        rpg.start_menu.rect.top = 0;
    }
    if (seconds > 6 && seconds < 9) {
        rpg.start_menu.rect.left = 0;
        rpg.start_menu.rect.top = 1080;
    }
    rpg = set_start_menu2(rpg, seconds);
    return (rpg);
}

rpg_t set_start_menu2(rpg_t rpg, int seconds)
{
    if (seconds > 9 && seconds < 12) {
        rpg.start_menu.rect.top = 1080;
        rpg.start_menu.rect.left = 1920;
    }
    if (seconds > 12 && seconds < 15) {
        rpg.start_menu.rect.left = 0;
        rpg.start_menu.rect.top = 1080;
    }
    if (seconds > 15 && seconds < 18) {
        rpg.start_menu.rect.left = 1920;
        rpg.start_menu.rect.top = 0;
    }
    if (seconds > 18)
        sfClock_restart(rpg.clock);
    rpg = set_start_menu3(rpg);
    return (rpg);
}

rpg_t set_start_menu3(rpg_t rpg)
{
    int v = rpg.m_volume;
    char str1[25] = "musique:  - !!!!!!!!!! +";

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '!' && v > 0)
            v -= 1;
        else if (str1[i] == '!' && v <= 0)
            str1[i] = '.';
        if (str1[i] == '.' && v > 0) {
            v -= 1;
            str1[i] = '!';
        }
    }
    sfText_setString(rpg.music.text, str1);
    rpg = set_start_menu4(rpg);
    return (rpg);
}

rpg_t set_start_menu4(rpg_t rpg)
{
    int v = rpg.s_volume;
    char str1[29] = "sound:        - !!!!!!!!!! +";

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '!' && v > 0)
            v -= 1;
        else if (str1[i] == '!' && v <= 0)
            str1[i] = '.';
        if (str1[i] == '.' && v > 0) {
            v -= 1;
            str1[i] = '!';
        }
    }
    sfText_setString(rpg.sound.text, str1);
    return (rpg);
}

rpg_t set_sound(rpg_t rpg)
{
    rpg.fgt.music.soundbuffer =
    sfSoundBuffer_createFromFile("assets/fight/fight_music.ogg");
    rpg.fgt.music.sound = sfSound_create();
    rpg.fgt.click.soundbuffer =
    sfSoundBuffer_createFromFile("assets/fight/click.ogg");
    rpg.fgt.click.sound = sfSound_create();
    sfSound_setBuffer(rpg.fgt.music.sound, rpg.fgt.music.soundbuffer);
    sfSound_setLoop(rpg.fgt.music.sound, sfTrue);
    sfSound_setBuffer(rpg.fgt.click.sound, rpg.fgt.click.soundbuffer);
    rpg.audio.music = sfMusic_createFromFile(
    "assets/sound/Sidewalk.ogg");
    sfMusic_play(rpg.audio.music);
    sfMusic_setLoop(rpg.audio.music, sfTrue);
    rpg.audio.bling.buffer = sfSoundBuffer_createFromFile(
    "assets/sound/click_menu.wav");
    rpg.audio.bling.sound = sfSound_create();
    sfSound_setBuffer(rpg.audio.bling.sound, rpg.audio.bling.buffer);
    return (rpg);
}