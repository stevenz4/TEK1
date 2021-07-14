/*
** EPITECH PROJECT, 2020
** event_fight2
** File description:
** event_fight2.c
*/

#include "rpg.h"

rpg_t event_fight_interface2(rpg_t rpg)
{
    if ((rpg.fgt.mouse_pos.x < 992) && (rpg.fgt.mouse_pos.x > 595) &&
        (rpg.fgt.mouse_pos.y < 955) && (rpg.fgt.mouse_pos.y > 852)) {
            if (rpg.fgt.click_check != 4)
                sfSound_play(rpg.fgt.click.sound);
            rpg.fgt.cursor_pos.x = 607;
            rpg.fgt.cursor_pos.y = 875;
            rpg.fgt.click_check = 4;
    }
    return rpg;
}

rpg_t event_fight_interface3(rpg_t rpg)
{
    if ((rpg.fgt.mouse_pos.x < 992) && (rpg.fgt.mouse_pos.x > 595) &&
        (rpg.fgt.mouse_pos.y < 842) && (rpg.fgt.mouse_pos.y > 740)) {
            if (rpg.fgt.click_check != 3)
                sfSound_play(rpg.fgt.click.sound);
            rpg.fgt.cursor_pos.x = 607;
            rpg.fgt.cursor_pos.y = 765;
            rpg.fgt.click_check = 3;
    }
    return rpg;
}

rpg_t event_fight_interface8(rpg_t rpg)
{
    if ((rpg.fgt.mouse_pos.x < 582) && (rpg.fgt.mouse_pos.x > 185) &&
            (rpg.fgt.mouse_pos.y < 842) && (rpg.fgt.mouse_pos.y > 740)) {
                if (rpg.fgt.click_check != 1)
                    sfSound_play(rpg.fgt.click.sound);
                rpg.fgt.cursor_pos.x = 100;
                rpg.fgt.cursor_pos.y = 765;
                rpg.fgt.click_check = 1;
    }
    if ((rpg.fgt.mouse_pos.x < 582) && (rpg.fgt.mouse_pos.x > 185) &&
        (rpg.fgt.mouse_pos.y < 955) && (rpg.fgt.mouse_pos.y > 852)) {
            if (rpg.fgt.click_check != 2)
                sfSound_play(rpg.fgt.click.sound);
            rpg.fgt.cursor_pos.x = 100;
            rpg.fgt.cursor_pos.y = 875;
            rpg.fgt.click_check = 2;
    }
    return rpg;
}
