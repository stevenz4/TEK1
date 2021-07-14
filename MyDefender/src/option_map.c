/*
** EPITECH PROJECT, 2020
** option map
** File description:
** option map
*/

#include "my.h"

void event_option_map(def_t gnl)
{
    while (sfRenderWindow_pollEvent(gnl.window, &gnl.event)) {
        if (gnl.event.type == sfEvtClosed)
            sfRenderWindow_close(gnl.window);
        if (gnl.event.mouseButton.type == sfEvtMouseButtonPressed) {
            click_sound(gnl);
            if ((gnl.event.mouseButton.x < 450) &&
                (gnl.event.mouseButton.x > 150) &&
                (gnl.event.mouseButton.y < 700) &&
                (gnl.event.mouseButton.y > 400))
                game(gnl);
            if ((gnl.event.mouseButton.x < (gnl.mode.width / 20) + 49) &&
                (gnl.event.mouseButton.x > (gnl.mode.width / 20)) &&
                (gnl.event.mouseButton.y < (gnl.mode.height / 20) + 49) &&
                (gnl.event.mouseButton.y > (gnl.mode.height / 20) - 49))
                create_menu(gnl);
        }
        if (gnl.event.key.type == sfEvtKeyPressed)
            if (gnl.event.key.code == sfKeyEscape)
                create_menu(gnl);
    }
}

void option_map_buttons_animation(def_t gnl)
{
    if ((gnl.mouse_pos.x < 450) &&
        (gnl.mouse_pos.x > 150) &&
        (gnl.mouse_pos.y < 700) &&
        (gnl.mouse_pos.y > 400)) {
        gnl.lmapa_rect.left = 300;
        sfSprite_setTextureRect(gnl.lmap_a.sprite, gnl.lmapa_rect);
        sfSprite_setPosition(gnl.lmap_a.sprite, (sfVector2f) {150, 400});
        sfRenderWindow_drawSprite(gnl.window, gnl.lmap_a.sprite, NULL);
        sfRenderWindow_display(gnl.window);
    }
}

void option_map2(def_t gnl)
{
    gnl.mouse_pos = sfMouse_getPositionRenderWindow(gnl.window);
    sfRenderWindow_clear(gnl.window, sfBlack);
    sfSprite_setTexture(gnl.back.sprite, gnl.back.texture, sfTrue);
    sfSprite_setTexture(gnl.lmap_a.sprite, gnl.lmap_a.texture, sfTrue);
    sfSprite_setTexture(gnl.lmap_b.sprite, gnl.lmap_b.texture, sfTrue);
    sfSprite_setTexture(gnl.lmap_c.sprite, gnl.lmap_c.texture, sfTrue);
    sfSprite_setTexture(gnl.back_b.sprite, gnl.back_b.texture, sfTrue);
    sfSprite_setTextureRect(gnl.lmap_a.sprite, gnl.lmapa_rect);
    sfSprite_setTextureRect(gnl.lmap_b.sprite, gnl.lmapb_rect);
    sfSprite_setTextureRect(gnl.lmap_c.sprite, gnl.lmapc_rect);
    sfSprite_setTextureRect(gnl.back_b.sprite, gnl.back_rect);
    sfRenderWindow_drawSprite(gnl.window, gnl.back.sprite, NULL);
    sfRenderWindow_drawSprite(gnl.window, gnl.lmap_a.sprite, NULL);
    sfRenderWindow_drawSprite(gnl.window, gnl.lmap_b.sprite, NULL);
    sfRenderWindow_drawSprite(gnl.window, gnl.lmap_c.sprite, NULL);
    sfRenderWindow_drawSprite(gnl.window, gnl.back_b.sprite, NULL);
    sfText_setString(gnl.option_map.text, gnl.option_map.str);
    sfText_setString(gnl.map_a.text, gnl.map_a.str);
}

void option_map3(def_t gnl)
{
    sfText_setString(gnl.map_b.text, gnl.map_b.str);
    sfText_setString(gnl.map_c.text, gnl.map_c.str);
    sfText_setFont(gnl.option_map.text, gnl.option_map.font);
    sfText_setFont(gnl.map_a.text, gnl.map_a.font);
    sfText_setFont(gnl.map_b.text, gnl.map_b.font);
    sfText_setFont(gnl.map_c.text, gnl.map_c.font);
    sfRenderWindow_drawText(gnl.window, gnl.option_map.text, NULL);
    sfRenderWindow_drawText(gnl.window, gnl.map_a.text, NULL);
    sfRenderWindow_drawText(gnl.window, gnl.map_b.text, NULL);
    sfRenderWindow_drawText(gnl.window, gnl.map_c.text, NULL);
    event_option_map(gnl);
    option_map_buttons_animation(gnl);
    sfRenderWindow_display(gnl.window);
}

void option_map(def_t gnl)
{
    sfText_setPosition(gnl.option_map.text, (sfVector2f) {720, 100});
    sfText_setPosition(gnl.map_a.text, (sfVector2f) {250, 700});
    sfText_setPosition(gnl.map_b.text, (sfVector2f) {850, 700});
    sfText_setPosition(gnl.map_c.text, (sfVector2f) {1450, 700});
    sfSprite_setPosition(gnl.lmap_a.sprite, (sfVector2f) {150, 400});
    sfSprite_setPosition(gnl.lmap_b.sprite, (sfVector2f) {750, 400});
    sfSprite_setPosition(gnl.lmap_c.sprite, (sfVector2f) {1350, 400});
    sfSprite_setPosition(gnl.back_b.sprite, gnl.back_pos);
    while (sfRenderWindow_isOpen(gnl.window)) {
        option_map2(gnl);
        option_map3(gnl);
    }
}
