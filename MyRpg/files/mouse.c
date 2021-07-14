/*
** EPITECH PROJECT, 2020
** click
** File description:
** click
*/

#include "rpg.h"

rpg_t mouse(rpg_t rpg)
{
    if (rpg.start == 1 && rpg.mouse_pos.x >= 890 && rpg.mouse_pos.x <=
    1020 && rpg.mouse_pos.y >= 435 && rpg.mouse_pos.y <= 520) {
        rpg.play.button.x = 880;
        rpg.play.button.y = 390;
        sfText_setCharacterSize(rpg.play.text, 120);
    }
    else
    sfText_setCharacterSize(rpg.play.text, 100);
    if (rpg.start == 1 && rpg.mouse_pos.x >= 850 && rpg.mouse_pos.x <=
    1065 && rpg.mouse_pos.y >= 540 && rpg.mouse_pos.y <= 615) {
        rpg.options.button.x = 840;
        rpg.options.button.y = 490;
        sfText_setCharacterSize(rpg.options.text, 120);
    }
    else
    sfText_setCharacterSize(rpg.options.text, 100);
    rpg = mouse2(rpg);
    return (rpg);
}

rpg_t mouse2(rpg_t rpg)
{
    if (rpg.start == 1 && rpg.mouse_pos.x >= 890 && rpg.mouse_pos.x <=
    1020 && rpg.mouse_pos.y >= 640 && rpg.mouse_pos.y <= 710) {
        rpg.quit.button.x = 880;
        rpg.quit.button.y = 590;
        sfText_setCharacterSize(rpg.quit.text, 120);
    }
    else
    sfText_setCharacterSize(rpg.quit.text, 100);
    return (rpg);
}

rpg_t click(rpg_t rpg)
{
    if (rpg.start == 1 && rpg.mouse_pos.x >= 890 && rpg.mouse_pos.x <=
    1020 && rpg.mouse_pos.y >= 435 && rpg.mouse_pos.y <= 520) {
        rpg.play_var = 1;
    }
    if (rpg.start == 1 && rpg.mouse_pos.x >= 850 && rpg.mouse_pos.x <=
    1065 && rpg.mouse_pos.y >= 540 && rpg.mouse_pos.y <= 615) {
        rpg.start = 2;
        sfSound_play(rpg.audio.bling.sound);
    }
    if (rpg.start == 1 && rpg.mouse_pos.x >= 890 && rpg.mouse_pos.x <=
    1020 && rpg.mouse_pos.y >= 640 && rpg.mouse_pos.y <= 710) {
        sfRenderWindow_close(rpg.window);
    }
    rpg = click2(rpg);
    return (rpg);
}

rpg_t click2(rpg_t rpg)
{
    if (rpg.start == 2 && rpg.mouse_pos.x >= 1100 && rpg.mouse_pos.x <=
    1150 && rpg.mouse_pos.y >= 465 && rpg.mouse_pos.y <= 485) {
        rpg.m_volume += 1;
        if (rpg.m_volume > 10)
            rpg.m_volume = 10;
        sfMusic_setVolume(rpg.audio.music, rpg.m_volume * 10);
        sfSound_play(rpg.audio.bling.sound);
    }
    if (rpg.start == 2 && rpg.mouse_pos.x >= 985 && rpg.mouse_pos.x <=
    1015 && rpg.mouse_pos.y >= 465 && rpg.mouse_pos.y <= 485) {
        rpg.m_volume -= 1;
        if (rpg.m_volume < 0)
            rpg.m_volume = 0;
        sfMusic_setVolume(rpg.audio.music, rpg.m_volume * 10);
        sfSound_play(rpg.audio.bling.sound);
    }
    rpg = click3(rpg);
    return (rpg);
}

rpg_t click3(rpg_t rpg)
{
    if (rpg.start == 2 && rpg.mouse_pos.x >= 1100 && rpg.mouse_pos.x <=
    1150 && rpg.mouse_pos.y >= 565 && rpg.mouse_pos.y <= 585) {
        rpg.s_volume += 1;
        if (rpg.s_volume > 10)
            rpg.s_volume = 10;
        sfSound_setVolume(rpg.audio.bling.sound, rpg.s_volume * 10);
        sfSound_play(rpg.audio.bling.sound);
    }
    if (rpg.start == 2 && rpg.mouse_pos.x >= 985 && rpg.mouse_pos.x <=
    1015 && rpg.mouse_pos.y >= 565 && rpg.mouse_pos.y <= 585) {
        rpg.s_volume -= 1;
        if (rpg.s_volume < 0)
            rpg.s_volume = 0;
        sfSound_setVolume(rpg.audio.bling.sound, rpg.s_volume * 10);
        sfSound_play(rpg.audio.bling.sound);
    }
    return (rpg);
}