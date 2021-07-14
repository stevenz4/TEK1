/*
** EPITECH PROJECT, 2020
** set
** File description:
** set
*/

#include "rpg.h"

int disp_mouse(rpg_t rpg)
{
    sfVector2f mouse = {rpg.mouse_pos.x - 12, rpg.mouse_pos.y - 12};

    sfSprite_setPosition(rpg.mouse.sprite, mouse);
    sfRenderWindow_drawSprite(rpg.window, rpg.mouse.sprite, NULL);
    return (0);
}

rpg_t disp_corona(rpg_t rpg)
{
    sfTime time = sfClock_getElapsedTime(rpg.clock_corona);
    int seconds = time.microseconds / 100000.0;
    sfVector2f stdio = {576, 240};

    sfRenderWindow_clear(rpg.window, sfBlack);
    rpg.studio.rect.left = (seconds - 3) / 2 * 767;
    if (seconds >= 32)
    rpg.studio.rect.left = 11505;
    if (seconds > 50) {
        rpg.studio_var = 1;
        sfClock_destroy(rpg.clock_corona);
    }
    sfSprite_setTextureRect(rpg.studio.sprite, rpg.studio.rect);
    sfSprite_setPosition(rpg.studio.sprite, stdio);
    sfRenderWindow_drawSprite(rpg.window, rpg.studio.sprite, NULL);
    sfRenderWindow_display(rpg.window);
    return (rpg);
}
