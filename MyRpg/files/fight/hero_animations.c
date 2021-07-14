/*
** EPITECH PROJECT, 2020
** hero_animations.c
** File description:
** hero's animations function
*/

#include "rpg.h"

rpg_t hero_animation2(rpg_t rpg)
{
    if (rpg.fgt.check_hero_attack == 2) {
        if (rpg.fgt.hero_clock.seconds >= 0.15) {
            if (rpg.fgt.hero_rect.left == 500) {
                rpg.fgt.enemy_p.hp -= rpg.fgt.hero_p.atk;
                rpg = check_enemy_life(rpg);
                rpg.fgt.check_hero_attack = 0;
                rpg.fgt.check_enemy_attack = 1;
            }
            rpg.fgt.hero_rect.left -= 500;
            rpg.fgt.hero_pos.x -= 100;
            sfClock_restart(rpg.fgt.hero_clock.clock);
        }
    }
    return (rpg);
}

rpg_t hero_animation(rpg_t rpg)
{
    rpg.fgt.hero_clock.time = sfClock_getElapsedTime(rpg.fgt.hero_clock.clock);
    rpg.fgt.hero_clock.seconds =
    rpg.fgt.hero_clock.time.microseconds / 1000000.0;
    if (rpg.fgt.check_hero_attack == 1) {
        if (rpg.fgt.hero_clock.seconds >= 0.15) {
            if (rpg.fgt.hero_rect.left == 2500)
                rpg.fgt.check_hero_attack = 2;
            rpg.fgt.hero_rect.left += 500;
            rpg.fgt.hero_pos.x += 100;
            sfClock_restart(rpg.fgt.hero_clock.clock);
        }
    }
    rpg = hero_animation2(rpg);
    return rpg;
}

rpg_t hero_shield_animation(rpg_t rpg)
{
    if (rpg.fgt.check_hero_shield == 1) {
        sfRenderWindow_drawSprite(rpg.window,
        rpg.fgt.shield_icon.sprite, NULL);
        if (rpg.fgt.check_enemy_attack == 0)
            rpg.fgt.check_enemy_attack = 1;
    }
    return rpg;
}

rpg_t hero_magic_animation(rpg_t rpg)
{
    if (rpg.fgt.check_hero_magic == 1) {
        if (rpg.fgt.poison_turn != 5) {
            sfRenderWindow_drawSprite(rpg.window,
            rpg.fgt.poison_icon.sprite, NULL);
        } else {
            rpg.fgt.poison_turn = 0;
            rpg.fgt.check_hero_magic = 0;
        }
    }
    return rpg;
}

rpg_t hero_heal_animation(rpg_t rpg)
{
    if (rpg.fgt.check_hero_heal == 1) {
        rpg.fgt.hero_p.hp += 10;
        rpg = check_hero_life(rpg);
        if (rpg.fgt.check_enemy_attack == 0)
            rpg.fgt.check_enemy_attack = 1;
        rpg.fgt.check_hero_heal = 0;
    }
    return rpg;
}