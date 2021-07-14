/*
** EPITECH PROJECT, 2020
** draw_fight_interface
** File description:
** display the fight interface
*/

#include "rpg.h"

rpg_t cursor_animation(rpg_t rpg)
{
    rpg.fgt.cursor_clock.time =
    sfClock_getElapsedTime(rpg.fgt.cursor_clock.clock);
    rpg.fgt.cursor_clock.seconds =
    rpg.fgt.cursor_clock.time.microseconds / 1000000.0;
    if (rpg.fgt.cursor_clock.seconds > 0.15) {
        rpg.fgt.cursor_rect.left += 105;
        if (rpg.fgt.cursor_rect.left == 315)
            rpg.fgt.cursor_rect.left = 0;
        sfClock_restart(rpg.fgt.cursor_clock.clock);
    }
    return rpg;
}

rpg_t starting_fight_animation(rpg_t rpg)
{
    rpg.fgt.back_intro_clock.time =
    sfClock_getElapsedTime(rpg.fgt.back_intro_clock.clock);
    rpg.fgt.back_intro_clock.seconds =
    rpg.fgt.back_intro_clock.time.microseconds / 100000.0;
    if (rpg.fgt.check_intro == 0) {
        while (rpg.fgt.back_pos.x > 0) {
            sfRenderWindow_clear(rpg.window, sfBlack);
            sfSprite_setTexture(rpg.fgt.back.sprite,
            rpg.fgt.back.texture, sfFalse);
            sfSprite_setTexture(rpg.fgt.ui.sprite, rpg.fgt.ui.texture, sfFalse);
            if (rpg.fgt.back_intro_clock.seconds >= 0.25) {
                rpg.fgt.back_pos.x -= 15;
                rpg.fgt.ui_pos.x -= 15;
            }
            rpg = starting_fight_animation2(rpg);
        }
        rpg.fgt.check_intro = 1;
    }
    return rpg;
}

rpg_t starting_fight_animation2(rpg_t rpg)
{
    sfSprite_setPosition(rpg.fgt.back.sprite, rpg.fgt.back_pos);
    sfSprite_setPosition(rpg.fgt.ui.sprite, rpg.fgt.ui_pos);
    sfRenderWindow_drawSprite(rpg.window, rpg.fgt.back.sprite, NULL);
    sfRenderWindow_drawSprite(rpg.window, rpg.fgt.ui.sprite, NULL);
    sfRenderWindow_display(rpg.window);
    sfClock_restart(rpg.fgt.back_intro_clock.clock);
    return rpg;
}

rpg_t check_end(rpg_t rpg)
{
    if (rpg.fgt.enemy_p.hp <= 0) {
        rpg.fight = 0;
        rpg.fgt.enemy_p.hp = 100;
        rpg.fgt.bonus += 10;
        rpg.fgt.hero_p.hp = 100 + rpg.fgt.bonus;
        rpg.fgt.hero_rect.left = 0;
        rpg.fgt.enemy_rect.left = 0;
        rpg.fgt.check_enemy_attack = 0;
        rpg.fgt.check_hero_attack = 0;
        rpg.fgt.check_hero_heal = 0;
        rpg.fgt.check_hero_magic = 0;
        rpg.fgt.check_hero_shield = 0;
        rpg.fgt.poison_turn = 0;
        rpg = check_enemy_life(rpg);
        rpg = check_hero_life(rpg);
    } else if (rpg.fgt.hero_p.hp <= 0) {
        rpg.fight = 0;
        rpg.fgt.enemy_p.hp = 100;
        rpg.fgt.hero_p.hp = 100;
        rpg.fgt.hero_rect.left = 0;
        rpg.fgt.enemy_rect.left = 0;
        rpg.fgt.check_enemy_attack = 0;
        rpg.fgt.check_hero_attack = 0;
        rpg.fgt.check_hero_heal = 0;
        rpg.fgt.check_hero_magic = 0;
        rpg.fgt.check_hero_shield = 0;
        rpg.fgt.poison_turn = 0;
        rpg = check_hero_life(rpg);
        rpg = check_enemy_life(rpg);
    }
    return rpg;
}

rpg_t create_fight_interface(rpg_t rpg)
{
    sfRenderWindow_clear(rpg.window, sfBlack);
    rpg = starting_fight_animation(rpg);
    rpg = cursor_animation(rpg);
    rpg.fgt.mouse_pos = sfMouse_getPositionRenderWindow(rpg.window);
    rpg = hero_animation(rpg);
    rpg = check_end(rpg);
    rpg = enemy_animation(rpg);
    sfSprite_setTexture(rpg.fgt.hero.sprite, rpg.fgt.hero.texture, sfFalse);
    sfSprite_setTextureRect(rpg.fgt.cursor.sprite, rpg.fgt.cursor_rect);
    sfSprite_setTextureRect(rpg.fgt.hero.sprite, rpg.fgt.hero_rect);
    sfSprite_setTextureRect(rpg.fgt.enemy.sprite, rpg.fgt.enemy_rect);
    sfSprite_setPosition(rpg.fgt.back.sprite, rpg.fgt.back_pos);
    sfSprite_setPosition(rpg.fgt.ui.sprite, rpg.fgt.ui_pos);
    sfSprite_setPosition(rpg.fgt.cursor.sprite, rpg.fgt.cursor_pos);
    sfSprite_setPosition(rpg.fgt.hero.sprite, rpg.fgt.hero_pos);
    sfSprite_setPosition(rpg.fgt.enemy.sprite, rpg.fgt.enemy_pos);
    sfRenderWindow_drawSprite(rpg.window, rpg.fgt.back.sprite, NULL);
    sfRenderWindow_drawSprite(rpg.window, rpg.fgt.ui.sprite, NULL);
    sfRenderWindow_drawSprite(rpg.window, rpg.fgt.cursor.sprite, NULL);
    sfRenderWindow_drawSprite(rpg.window, rpg.fgt.hero.sprite, NULL);
    sfRenderWindow_drawSprite(rpg.window, rpg.fgt.enemy.sprite, NULL);
    rpg = hero_shield_animation(rpg);
    rpg = hero_magic_animation(rpg);
    rpg = hero_heal_animation(rpg);
    sfRenderWindow_drawText(rpg.window, rpg.fgt.hp.text, NULL);
    sfRenderWindow_drawText(rpg.window, rpg.fgt.e_hp.text, NULL);
    rpg.mouse_pos = sfMouse_getPositionRenderWindow(rpg.window);
    disp_mouse(rpg);
    sfRenderWindow_display(rpg.window);
    return (rpg);
}