/*
** EPITECH PROJECT, 2020
** tower2.c
** File description:
** rock_tower
*/

#include "my.h"

def_t get_rock_tower_pos(def_t gnl)
{
    gnl.fire_vector[1] = sfSprite_getPosition(gnl.rock_t.sprite);
    gnl.fire_vector[1].y += 150;
    gnl.hitbox[1].one.x = gnl.fire_vector[1].x - 250;
    gnl.hitbox[1].one.y = gnl.fire_vector[1].y - 250;
    gnl.hitbox[1].two.x = gnl.fire_vector[1].x + 403;
    gnl.hitbox[1].two.y = gnl.fire_vector[1].y - 250;
    gnl.hitbox[1].three.x = gnl.fire_vector[1].x - 250;
    gnl.hitbox[1].three.y = gnl.fire_vector[1].y + 413;
    gnl.hitbox[1].four.x = gnl.fire_vector[1].x + 403;
    gnl.hitbox[1].four.y = gnl.fire_vector[1].y + 413;
    return gnl;
}

def_t rock_tower_animation(def_t gnl, int j)
{
    gnl.r_clock.time = sfClock_getElapsedTime(gnl.r_clock.clock);
    gnl.r_clock.seconds = gnl.r_clock.time.microseconds / 1000000.0;
    if (gnl.r_clock.seconds >= 0.05) {
        gnl.rock_rect.left += 162;
        if (gnl.rock_rect.left == 1620) {
            if (gnl.skull[j].rect.left >= 0)
                gnl.skull[j].rect.left -= 220;
            gnl.rock_rect.left = 0;
        }
        sfClock_restart(gnl.r_clock.clock);
    }
    return gnl;
}

def_t rock_check_hit(def_t gnl)
{
    gnl = get_rock_tower_pos(gnl);
    for (int j = 0; j < 50; j++) {
        if ((gnl.pos[j].one.x >= gnl.hitbox[1].one.x) &&
            (gnl.pos[j].one.x <= gnl.hitbox[1].two.x) &&
            (gnl.pos[j].one.y >= gnl.hitbox[1].one.y) &&
            (gnl.pos[j].one.y <= gnl.hitbox[1].three.y) &&
            gnl.skull[j].rect.left >= 0)
            gnl = rock_tower_animation(gnl, j);
        if ((gnl.pos[j].two.x >= gnl.hitbox[1].one.x) &&
            (gnl.pos[j].two.x <= gnl.hitbox[1].two.x) &&
            (gnl.pos[j].two.y >= gnl.hitbox[1].one.y) &&
            (gnl.pos[j].two.y <= gnl.hitbox[1].three.y) &&
            gnl.skull[j].rect.left >= 0)
            gnl = rock_tower_animation(gnl, j);
        rock_check_hitbis(gnl, j);
    }
    sfSprite_setTextureRect(gnl.rock_t.sprite, gnl.rock_rect);
    return gnl;
}

def_t rock_check_hitbis(def_t gnl, int j)
{
    if ((gnl.pos[j].three.x >= gnl.hitbox[1].one.x) &&
        (gnl.pos[j].three.x <= gnl.hitbox[1].two.x) &&
        (gnl.pos[j].three.y >= gnl.hitbox[1].one.y) &&
        (gnl.pos[j].three.y <= gnl.hitbox[1].three.y) &&
        gnl.skull[j].rect.left >= 0)
        gnl = rock_tower_animation(gnl, j);
    if ((gnl.pos[j].four.x >= gnl.hitbox[1].one.x) &&
        (gnl.pos[j].four.x <= gnl.hitbox[1].two.x) &&
        (gnl.pos[j].four.y >= gnl.hitbox[1].one.y) &&
        (gnl.pos[j].four.y <= gnl.hitbox[1].three.y) &&
        gnl.skull[j].rect.left >= 0)
        gnl = rock_tower_animation(gnl, j);
    return gnl;
}
