/*
** EPITECH PROJECT, 2020
** set
** File description:
** set
*/

#include "rpg.h"

rpg_t set_button(rpg_t rpg)
{
    rpg.music.button = (sfVector2f) {800, 420};
    rpg.sound.button = (sfVector2f) {800, 520};
    rpg.play.button = (sfVector2f) {890, 400};
    rpg.options.button = (sfVector2f) {850, 500};
    rpg.quit.button = (sfVector2f) {890, 600};
    return (rpg);
}

rpg_t set_play_menu(rpg_t rpg)
{
    if (rpg.c_select.rect.left < rpg.travel)
        rpg.c_select.rect.left += 10;
    else if (rpg.c_select.rect.left > rpg.travel)
        rpg.c_select.rect.left -= 10;
    sfSprite_setTextureRect(rpg.c_select.sprite, rpg.c_select.rect);
    return (rpg);
}

map_t set_map(map_t map)
{
    int fd = open("assets/map", O_RDONLY);
    int s = 881, offset = 0, len;

    map.map = malloc(sizeof(char *) * s);
    while ((len = read( fd, map.map + offset, s - offset)) > 0)
        offset = offset + len;
    map.map[offset] = '\0';
    for (int i = 0; i <= 21; i++)
        for (int j = 0; j <= 38; j++)
            map.itb_map[i][j] = map.map[i * 40 + j];
    return (map);
}

map_t set_caracter(map_t map)
{
    sfTime time = sfClock_getElapsedTime(map.m_clock);
    int s = time.microseconds / 200000.0;

    if (time.microseconds /20000.0  >= 38) {sfClock_restart(map.m_clock);}
    if (map.pad.up + map.pad.down + map.pad.left + map.pad.right == 1) {
        map.caracter_rect.left = s * 180;
        if (map.pad.up == 1)
            map.caracter_rect.top = 0;
        if (map.pad.down == 1)
            map.caracter_rect.top = 672;
        if (map.pad.left == 1)
            map.caracter_rect.top = 1008;
        if (map.pad.right == 1)
            map.caracter_rect.top = 336;
    }
    if (map.key == 0)
        map.caracter_rect.left = 540;
    return (map);
}