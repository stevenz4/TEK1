/*
** EPITECH PROJECT, 2020
** loop
** File description:
** loop
*/

#include "rpg.h"

rpg_t isopen(rpg_t rpg)
{
    while (sfRenderWindow_isOpen(rpg.window))
    {
        if (rpg.studio_var == 0 && rpg.in_game == 0 && rpg.intro_v == 0)
            rpg = disp_corona(rpg);
        else if (rpg.in_game == 0 && rpg.intro_v == 0) {
            rpg.mouse_pos = sfMouse_getPositionRenderWindow(rpg.window);
            rpg = disp(rpg);
        }
        else
            if (rpg.in_game == 1 && rpg.fight == 0 && rpg.intro_v == 0)
                rpg = disp_in_game(rpg);
            else if (rpg.fight == 1 && rpg.intro_v == 0)
                rpg = create_fight_interface(rpg);
            else
                rpg = intro(rpg);
        rpg = event(rpg);
    }
    return (rpg);
}

rpg_t event(rpg_t rpg)
{
    while (sfRenderWindow_pollEvent(rpg.window, &rpg.event))
        {
            if (rpg.in_game == 0 && rpg.intro_v == 0 && rpg.fight == 0) {
                if (rpg.event.type == sfEvtKeyPressed)
                    rpg = keypressed4(rpg);
                if (rpg.event.type == sfEvtMouseButtonPressed)
                    rpg = click(rpg);
            }
            else if (rpg.fight == 0 && rpg.intro_v == 0) {
                if (rpg.event.type == sfEvtKeyPressed)
                    rpg = keypressed(rpg);
                else
                    rpg.map.key = 0;
            }
            else {
                if (rpg.intro_v == 0 && rpg.fight == 1)
                    rpg = event_fight_interface(rpg);
                else
                    rpg = event_intro(rpg);
            }
            if (rpg.event.type == sfEvtClosed)
                sfRenderWindow_close(rpg.window);
        }
    return (rpg);
}

rpg_t select_save(rpg_t rpg)
{
    if (rpg.travel >= 0 && rpg.travel < 1920) {
        rpg.intro_v = 1;
        rpg.save.save_nbr = "sauvegardes/save1";
    }
    else if (rpg.travel >= 1920 && rpg.travel < 3840) {
        rpg.intro_v = 1;
        rpg.save.save_nbr = "sauvegardes/save2";
    }
    if (rpg.travel >= 3840) {
        rpg.intro_v = 1;
        rpg.save.save_nbr = "sauvegardes/save3";
    }
    rpg = resume_from_save(rpg);
    return (rpg);
}

rpg_t keypressed4(rpg_t rpg)
{
    if (rpg.start <= 0)
        rpg.start = 1;
    else if (rpg.event.key.code == sfKeyEscape) {
        if (rpg.play_var <= 0)
            rpg.start -= 1;
        rpg.play_var -= 1;
    }
    if (rpg.play_var == 1 && rpg.event.key.code == sfKeyEnter)
        rpg = select_save(rpg);
    if (rpg.play_var == 1 && rpg.event.key.code == sfKeyLeft)
        rpg.travel -= 1920;
    if (rpg.play_var == 1 && rpg.event.key.code == sfKeyRight)
        rpg.travel += 1920;
    if (rpg.travel < 0)
        rpg.travel = 0;
    if (rpg.travel > 3840)
        rpg.travel = 3840;
    return (rpg);
}

int destroy_texture(texture_t i)
{
    sfTexture_destroy(i.texture);
    sfSprite_destroy(i.sprite);
    return (0);
}