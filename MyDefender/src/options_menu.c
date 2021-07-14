/*
** EPITECH PROJECT, 2020
** options_menu
** File description:
** options menu
*/

#include "my.h"

def_t adjust_sound(def_t gnl)
{
    if ((gnl.event.mouseButton.x < (gnl.mode.width / 3) + 49) &&
        (gnl.event.mouseButton.x > (gnl.mode.width / 3)) &&
        (gnl.event.mouseButton.y < (gnl.mode.height / 2) + 49) &&
        (gnl.event.mouseButton.y > (gnl.mode.height / 2) - 49)) {
        gnl.music1.sound_volume -= 10;
        sfSound_setVolume(gnl.music1.sound, gnl.music1.sound_volume);
        if (gnl.vol_rect.width >= 17)
            gnl.vol_rect.width -= 17;
    }
    if ((gnl.event.mouseButton.x < (gnl.mode.width / 2) + 49) &&
        (gnl.event.mouseButton.x > (gnl.mode.width / 2)) &&
        (gnl.event.mouseButton.y < (gnl.mode.height / 2) + 49) &&
        (gnl.event.mouseButton.y > (gnl.mode.height / 2) - 49)) {
        gnl.music1.sound_volume += 10;
        sfSound_setVolume(gnl.music1.sound, gnl.music1.sound_volume);
        if (gnl.vol_rect.width <= 153)
            gnl.vol_rect.width += 17;
    }
    return gnl;
}

def_t  event_options_menu(def_t gnl)
{
    while (sfRenderWindow_pollEvent(gnl.window, &gnl.event)) {
        if (gnl.event.type == sfEvtClosed)
            sfRenderWindow_close(gnl.window);
        if (gnl.event.mouseButton.type == sfEvtMouseButtonPressed) {
            click_sound(gnl);
            gnl = adjust_sound(gnl);
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
    return gnl;
}

void option_buttons_animation(def_t gnl)
{
    if ((gnl.mouse_pos.x < (gnl.mode.width / 3) + 49) &&
        (gnl.mouse_pos.x > (gnl.mode.width / 3)) &&
        (gnl.mouse_pos.y < (gnl.mode.height / 2) + 49) &&
        (gnl.mouse_pos.y > (gnl.mode.height / 2))) {
        gnl.minus_rect.height = 42;
        gnl.minus_rect.top = 47;
        sfSprite_setTextureRect(gnl.minus_b.sprite, gnl.minus_rect);
        sfSprite_setPosition(gnl.minus_b.sprite, gnl.minus_pos);
        sfRenderWindow_drawSprite(gnl.window, gnl.minus_b.sprite, NULL);
        sfRenderWindow_display(gnl.window);
    }
    option_button_animation2(gnl);
    option_button_animation3(gnl);
}

void options_menu(def_t gnl)
{
    sfVector2f sound_pos = {(gnl.mode.width / 5), (gnl.mode.height / 2)};
    sfVector2f vol_pos = {(gnl.mode.width / 2.6), (gnl.mode.height / 1.95)};

    while (sfRenderWindow_isOpen(gnl.window)) {
        gnl = options_menu2(gnl);
        sfRenderWindow_drawSprite(gnl.window, gnl.back.sprite, NULL);
        sfRenderWindow_drawSprite(gnl.window, gnl.sound_b.sprite, NULL);
        sfRenderWindow_drawSprite(gnl.window, gnl.minus_b.sprite, NULL);
        sfRenderWindow_drawSprite(gnl.window, gnl.plus_b.sprite, NULL);
        sfRenderWindow_drawSprite(gnl.window, gnl.sound_vol.sprite, NULL);
        sfRenderWindow_drawSprite(gnl.window, gnl.back_b.sprite, NULL);
        sfSprite_setPosition(gnl.sound_b.sprite, sound_pos);
        sfSprite_setPosition(gnl.minus_b.sprite, gnl.minus_pos);
        sfSprite_setPosition(gnl.plus_b.sprite, gnl.plus_pos);
        sfSprite_setPosition(gnl.sound_vol.sprite, vol_pos);
        sfSprite_setPosition(gnl.back_b.sprite, gnl.back_pos);
        option_buttons_animation(gnl);
        sfRenderWindow_display(gnl.window);
        gnl = event_options_menu(gnl);
    }
}

def_t options_menu2(def_t gnl)
{
    gnl.mouse_pos = sfMouse_getPositionRenderWindow(gnl.window);
    sfRenderWindow_clear(gnl.window, sfBlack);
    sfSprite_setTexture(gnl.back.sprite, gnl.back.texture, sfFalse);
    sfSprite_setTexture(gnl.sound_b.sprite, gnl.sound_b.texture, sfFalse);
    sfSprite_setTexture(gnl.minus_b.sprite, gnl.minus_b.texture, sfFalse);
    sfSprite_setTexture(gnl.plus_b.sprite, gnl.plus_b.texture, sfFalse);
    sfSprite_setTexture(gnl.sound_vol.sprite,
    gnl.sound_vol.texture, sfFalse);
    sfSprite_setTexture(gnl.back_b.sprite, gnl.back_b.texture, sfFalse);
    sfSprite_setTextureRect(gnl.sound_vol.sprite, gnl.vol_rect);
    sfSprite_setTextureRect(gnl.back_b.sprite, gnl.back_rect);
    sfSprite_setTextureRect(gnl.minus_b.sprite, gnl.minus_rect);
    sfSprite_setTextureRect(gnl.plus_b.sprite, gnl.plus_rect);
    return gnl;
}
