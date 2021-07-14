/*
** EPITECH PROJECT, 2020
** while_is_open
** File description:
** functions when win is open
*/

#include "include/my.h"

para_move init_jump(para_move pm)
{
    pm.jump.p_ir.left = 0;
    pm.jump.p_ir.top = 0;
    pm.jump.p_ir.width = 47;
    pm.jump.p_ir.height = 55;
    pm.jump.pos.x = 350;
    pm.jump.pos.y = 670;
    pm.jump.space = 0;
    return pm;
}

para_move setting_texture(para_obj po, obj player, para_move pm)
{
    sfSprite_setTexture(po.back.sprite, po.back.texture, sfFalse);
    sfSprite_setTexture(po.pillar.sprite, po.pillar.texture, sfFalse);
    sfSprite_setTexture(po.shadows.sprite, po.shadows.texture, sfFalse);
    sfSprite_setTexture(po.buildings.sprite, po.buildings.texture, sfFalse);
    sfSprite_setTexture(player.sprite, player.texture, sfFalse);
    sfSprite_setTexture(pm.spikes.sprite, pm.spikes.texture, sfFalse);
    sfSprite_setTextureRect(player.sprite, pm.jump.p_ir);
    sfSprite_setTextureRect(po.buildings.sprite, pm.move4);
    sfSprite_setTextureRect(po.shadows.sprite, pm.move3);
    sfSprite_setTextureRect(po.pillar.sprite, pm.move2);
    sfSprite_setTextureRect(po.back.sprite, pm.move);
    pm.jump.p_ir.left += 47;
    if (pm.jump.p_ir.left >= 421)
        pm.jump.p_ir.left = 0;
    return pm;
}

void while_is_open(para_obj po, para_move pm, sfEvent event, obj player)
{
    pm = spikes_values(pm);
    pm = init_jump(pm);
    sfSprite_setPosition(pm.spikes.sprite, pm.spikes_pos);
    while (sfRenderWindow_isOpen(pm.window)) {
        time_manage(0.05);
        pm = setting_texture(po, player, pm);
        pm = poll_event(pm, event);
        sfSprite_move(pm.spikes.sprite, pm.spikes_move);
        pm.spikes_pos = sfSprite_getPosition(pm.spikes.sprite);
        check_position(player, pm);
        if (pm.spikes_pos.x <= -50) {
            pm.spikes_move.x += -2;
            pm.spikes_pos.x = 1300;
            sfSprite_setPosition(pm.spikes.sprite, pm.spikes_pos);
        }
        sfSprite_setPosition(player.sprite, pm.jump.pos);
        pm = parallax_movement(pm);
        draw_sprite(pm, po, player);
    }
}

para_move parallax_movement(para_move pm)
{
    pm.move.left += 2;
    pm.move2.left += 5;
    pm.move3.left += 8;
    pm.move4.left += 9;
    if (pm.move.left >= 272)
        pm.move.left = 0;
    if (pm.move2.left >= 575)
        pm.move2.left = 0;
    if (pm.move3.left  >= 800)
        pm.move3.left = 0;
    if (pm.move4.left  >= 900)
        pm.move4.left = 0;
    return pm;
}

void draw_sprite(para_move pm, para_obj po, obj player)
{
    sfRenderWindow_clear(pm.window, sfBlack);
    sfRenderWindow_drawSprite(pm.window, po.back.sprite, NULL);
    sfRenderWindow_drawSprite(pm.window, po.pillar.sprite, NULL);
    sfRenderWindow_drawSprite(pm.window, po.shadows.sprite, NULL);
    sfRenderWindow_drawSprite(pm.window, po.buildings.sprite, NULL);
    sfRenderWindow_drawSprite(pm.window, player.sprite, NULL);
    sfRenderWindow_drawSprite(pm.window, pm.spikes.sprite, NULL);
    sfRenderWindow_display(pm.window);
}
