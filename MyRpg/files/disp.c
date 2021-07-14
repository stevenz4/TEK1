/*
** EPITECH PROJECT, 2020
** disp
** File description:
** disp
*/

#include "rpg.h"

rpg_t disp(rpg_t rpg)
{
    sfRenderWindow_clear(rpg.window, sfBlack);
    if (rpg.play_var <= 0)
        rpg = disp_start_menu(rpg);
    else
        rpg = disp_play_menu(rpg);
    disp_mouse(rpg);
    sfRenderWindow_display(rpg.window);
    return (rpg);
}

rpg_t disp_play_menu(rpg_t rpg)
{
    rpg = set_play_menu(rpg);
    if (rpg.play_var == 1)
        sfRenderWindow_drawSprite(rpg.window, rpg.c_select.sprite, NULL);
    return (rpg);
}

rpg_t disp_start_menu(rpg_t rpg)
{
    rpg = set_start_menu(rpg);
    if (rpg.start <= 0) {
        sfRenderWindow_drawSprite(rpg.window, rpg.start_menu.sprite, NULL);
        sfSprite_setTextureRect(rpg.start_menu.sprite, rpg.start_menu.rect);
    }
    else if (rpg.start == 1) {
        rpg = disp_start_menu2(rpg);
    }
    else {
        rpg = disp_start_menu3(rpg);
    }
    return (rpg);
}

rpg_t disp_start_menu2(rpg_t rpg)
{
    rpg = mouse(rpg);
    sfRenderWindow_drawSprite(rpg.window, rpg.start_menu2.sprite, NULL);
    sfText_setPosition(rpg.play.text, rpg.play.button);
    sfText_setPosition(rpg.options.text, rpg.options.button);
    sfText_setPosition(rpg.quit.text, rpg.quit.button);
    sfRenderWindow_drawText(rpg.window, rpg.play.text, NULL);
    sfRenderWindow_drawText(rpg.window, rpg.options.text, NULL);
    sfRenderWindow_drawText(rpg.window, rpg.quit.text, NULL);
    return (rpg);
}

rpg_t disp_start_menu3(rpg_t rpg)
{
    rpg = mouse(rpg);
    sfRenderWindow_drawSprite(rpg.window, rpg.start_menu2.sprite, NULL);
    sfText_setPosition(rpg.music.text, rpg.music.button);
    sfRenderWindow_drawText(rpg.window, rpg.music.text, NULL);
    sfText_setPosition(rpg.sound.text, rpg.sound.button);
    sfRenderWindow_drawText(rpg.window, rpg.sound.text, NULL);
    return (rpg);
}
