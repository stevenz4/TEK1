/*
** EPITECH PROJECT, 2020
** enemy_animation
** File description:
** enemy_animation.c
*/

#include "rpg.h"

rpg_t enemy_animation2(rpg_t rpg)
{
    if (rpg.fgt.enemy_clock.seconds >= 0.25) {
        if (rpg.fgt.enemy_rect.left == 199) {
            if (rpg.fgt.check_hero_shield == 0) {
                rpg.fgt.hero_p.hp -= rpg.fgt.enemy_p.atk;
                rpg = check_hero_life(rpg);
            } else
                rpg.fgt.check_hero_shield = 0;
            rpg.fgt.check_enemy_attack = 0;
        }
        rpg.fgt.enemy_rect.left -= 199;
        rpg.fgt.enemy_pos.x += 100;
        sfClock_restart(rpg.fgt.enemy_clock.clock);
    }
    return rpg;
}

rpg_t enemy_animation(rpg_t rpg)
{
    rpg.fgt.enemy_clock.time =
    sfClock_getElapsedTime(rpg.fgt.enemy_clock.clock);
    rpg.fgt.enemy_clock.seconds =
    rpg.fgt.enemy_clock.time.microseconds / 1000000.0;
    if (rpg.fgt.check_enemy_attack == 1) {
        if (rpg.fgt.enemy_clock.seconds >= 0.25) {
            if (rpg.fgt.enemy_rect.left == 995)
                rpg.fgt.check_enemy_attack = 2;
            rpg.fgt.enemy_rect.left += 199;
            rpg.fgt.enemy_pos.x -= 100;
            sfClock_restart(rpg.fgt.enemy_clock.clock);
        }
    }
    if (rpg.fgt.check_enemy_attack == 2)
        rpg = enemy_animation2(rpg);
    return rpg;
}