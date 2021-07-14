/*
** EPITECH PROJECT, 2020
** event
** File description:
** event function
*/

#include "include/my.h"

void close_window(para_move pm)
{
    sfRenderWindow_close(pm.window);
}

void check_position(obj player, para_move pm)
{
    sfVector2f player_pos;

    player_pos = sfSprite_getPosition(player.sprite);
    if (((player_pos.x >= pm.spikes_pos.x) &&
        (player_pos.x) <= pm.spikes_pos.x + 50) &&
        (player_pos.y  >= pm.spikes_pos.y))
        close_window(pm);
}

para_move jumping_script(para_move pm)
{
    if (pm.jump.space == 1) {
        pm.jump.p_ir.left = 0;
        pm.jump.p_ir.top = 55;
        pm.jump.pos.y -= 10;
    }
    if (pm.jump.pos.y == 550)
        pm.jump.space = 2;
    if (pm.jump.space == 2) {
        pm.jump.p_ir.left = 0;
        pm.jump.pos.y += 10;
    }
    if (pm.jump.pos.y == 670) {
        pm.jump.p_ir.top = 0;
        pm.jump.space = 0;
    }
    return pm;
}

para_move poll_event(para_move pm, sfEvent event)
{
    pm = jumping_script(pm);
    while (sfRenderWindow_pollEvent(pm.window, &event)) {
        if (event.key.code == sfKeySpace && pm.jump.space != 2)
            pm.jump.space = 1;
        if (event.key.code == sfKeyEscape)
            close_window(pm);
        if (event.type == sfEvtClosed)
            close_window(pm);
    }
    return pm;
}
