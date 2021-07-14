/*
** EPITECH PROJECT, 2020
** event_fight.c
** File description:
** all event during fight
*/

#include "rpg.h"

rpg_t event_fight_interface4(rpg_t rpg)
{
    if ((rpg.fgt.mouse_pos.x < 582) && (rpg.fgt.mouse_pos.x > 185) &&
        (rpg.fgt.mouse_pos.y < 842) && (rpg.fgt.mouse_pos.y > 740) &&
        rpg.fgt.check_hero_attack == 0 && rpg.fgt.check_hero_shield == 0
        && rpg.fgt.check_hero_heal == 0 && rpg.fgt.check_enemy_attack == 0) {
        rpg.fgt.check_hero_attack = 1;
        if (rpg.fgt.check_hero_magic == 1) {
            rpg.fgt.poison_turn++;
            rpg.fgt.enemy_p.hp -= 5;
        }
    }
    return rpg;
}

rpg_t event_fight_interface5(rpg_t rpg)
{
    if ((rpg.fgt.mouse_pos.x < 582) && (rpg.fgt.mouse_pos.x > 185) &&
        (rpg.fgt.mouse_pos.y < 955) && (rpg.fgt.mouse_pos.y > 852) &&
        rpg.fgt.check_hero_attack == 0 && rpg.fgt.check_hero_shield == 0
        && rpg.fgt.check_hero_heal == 0 && rpg.fgt.check_enemy_attack == 0) {
        rpg.fgt.check_hero_shield = 1;
        if (rpg.fgt.check_hero_magic == 1) {
            rpg.fgt.poison_turn++;
            rpg.fgt.enemy_p.hp -= 5;
            rpg = check_enemy_life(rpg);
        }
    }
    return rpg;
}

rpg_t event_fight_interface6(rpg_t rpg)
{
    if ((rpg.fgt.mouse_pos.x < 992) && (rpg.fgt.mouse_pos.x > 595) &&
        (rpg.fgt.mouse_pos.y < 842) && (rpg.fgt.mouse_pos.y > 740) &&
        rpg.fgt.check_hero_attack == 0 && rpg.fgt.check_hero_shield == 0
        && rpg.fgt.check_hero_heal == 0 && rpg.fgt.check_enemy_attack == 0) {
        rpg.fgt.check_hero_magic = 1;
        if (rpg.fgt.check_enemy_attack == 0)
            rpg.fgt.check_enemy_attack = 1;
    }
    return rpg;
}

rpg_t event_fight_interface7(rpg_t rpg)
{
    if ((rpg.fgt.mouse_pos.x < 992) && (rpg.fgt.mouse_pos.x > 595) &&
        (rpg.fgt.mouse_pos.y < 955) && (rpg.fgt.mouse_pos.y > 852) &&
        rpg.fgt.check_hero_attack == 0 && rpg.fgt.check_hero_shield == 0
        && rpg.fgt.check_hero_heal == 0 && rpg.fgt.check_enemy_attack == 0) {
        rpg.fgt.check_hero_heal = 1;
        if (rpg.fgt.check_hero_magic == 1) {
            rpg.fgt.poison_turn++;
            rpg.fgt.enemy_p.hp -= 5;
            rpg = check_enemy_life(rpg);
        }
    }
    return rpg;
}

rpg_t event_fight_interface(rpg_t rpg)
{
    if (rpg.event.mouseButton.type == sfEvtMouseButtonPressed) {
        rpg = event_fight_interface4(rpg);
        rpg = event_fight_interface5(rpg);
        rpg = event_fight_interface6(rpg);
        rpg = event_fight_interface7(rpg);
    }
    rpg = event_fight_interface8(rpg);
    rpg = event_fight_interface2(rpg);
    rpg = event_fight_interface3(rpg);
    return rpg;
}