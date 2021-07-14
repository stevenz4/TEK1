/*
** EPITECH PROJECT, 2020
** tower.c
** File description:
** tower functions
*/

#include "my.h"

def_t fire_tower_animation(def_t gnl, int j, int i)
{
    gnl.f_clock[i].time = sfClock_getElapsedTime(gnl.f_clock[i].clock);
    gnl.f_clock[i].seconds = gnl.f_clock[i].time.microseconds / 1000000.0;
    if (gnl.f_clock[i].seconds >= 0.05) {
        gnl.fire_rect[i].left += 163;
        if (gnl.fire_rect[i].left == 1630) {
            if (gnl.skull[j].rect.left >= 0)
                gnl.skull[j].rect.left -= 110;
            gnl.fire_rect[i].left = 0;
        }
        sfClock_restart(gnl.f_clock[i].clock);
    }
    return gnl;
}

def_t get_tower_pos(def_t gnl, int i)
{
    gnl.fire_vector[0] = sfSprite_getPosition(gnl.fire_t[i].sprite);
    gnl.fire_vector[0].y += 150;
    gnl.hitbox[0].one.x = gnl.fire_vector[0].x - 250;
    gnl.hitbox[0].one.y = gnl.fire_vector[0].y - 250;
    gnl.hitbox[0].two.x = gnl.fire_vector[0].x + 403;
    gnl.hitbox[0].two.y = gnl.fire_vector[0].y - 250;
    gnl.hitbox[0].three.x = gnl.fire_vector[0].x - 250;
    gnl.hitbox[0].three.y = gnl.fire_vector[0].y + 413;
    gnl.hitbox[0].four.x = gnl.fire_vector[0].x + 403;
    gnl.hitbox[0].four.y = gnl.fire_vector[0].y + 413;
    return gnl;
}

def_t check_hit(def_t gnl, int i)
{
    gnl = get_tower_pos(gnl, i);
    for (int j = 0; j < 50; j++) {
        if ((gnl.pos[j].one.x >= gnl.hitbox[0].one.x) &&
            (gnl.pos[j].one.x <= gnl.hitbox[0].two.x) &&
            (gnl.pos[j].one.y >= gnl.hitbox[0].one.y) &&
            (gnl.pos[j].one.y <= gnl.hitbox[0].three.y) &&
            gnl.skull[j].rect.left >= 0)
            gnl = fire_tower_animation(gnl, j, i);
        if ((gnl.pos[j].two.x >= gnl.hitbox[0].one.x) &&
            (gnl.pos[j].two.x <= gnl.hitbox[0].two.x) &&
            (gnl.pos[j].two.y >= gnl.hitbox[0].one.y) &&
            (gnl.pos[j].two.y <= gnl.hitbox[0].three.y) &&
            gnl.skull[j].rect.left >= 0)
            gnl = fire_tower_animation(gnl, j, i);
        gnl = check_hitbis(gnl, j, i);
    }
    sfSprite_setTextureRect(gnl.fire_t[i].sprite, gnl.fire_rect[i]);
    return gnl;
}

def_t check_hitbis(def_t gnl, int j, int i)
{
    if ((gnl.pos[j].three.x >= gnl.hitbox[0].one.x) &&
        (gnl.pos[j].three.x <= gnl.hitbox[0].two.x) &&
        (gnl.pos[j].three.y >= gnl.hitbox[0].one.y) &&
        (gnl.pos[j].three.y <= gnl.hitbox[0].three.y) &&
        gnl.skull[j].rect.left >= 0)
        gnl = fire_tower_animation(gnl, j, i);
    if ((gnl.pos[j].four.x >= gnl.hitbox[0].one.x) &&
        (gnl.pos[j].four.x <= gnl.hitbox[0].two.x) &&
        (gnl.pos[j].four.y >= gnl.hitbox[0].one.y) &&
        (gnl.pos[j].four.y <= gnl.hitbox[0].three.y) &&
        gnl.skull[j].rect.left >= 0)
        gnl = fire_tower_animation(gnl, j, i);
    return gnl;
}

def_t check_hit_2(def_t gnl)
{
    if (gnl.fire_a == 1)
        gnl = check_hit(gnl, 1);
    if (gnl.fire_b == 1)
        gnl = check_hit(gnl, 2);
    if (gnl.fire_c == 1)
        gnl = check_hit(gnl, 0);
    if (gnl.rock_d == 1)
        gnl = rock_check_hit(gnl);
    if (gnl.fire_e == 1)
        gnl = check_hit(gnl, 4);
    if (gnl.bank_a == 1)
        gnl = bank_animation(gnl);
    return gnl;
}
