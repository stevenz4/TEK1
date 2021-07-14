/*
** EPITECH PROJECT, 2020
** pseudo
** File description:
** pseudo
*/

#include "rpg.h"

rpg_t set_position_pseudo(rpg_t rpg)
{
    rpg.intro.int1 = my_strcpy(rpg.intro.int1, "Choose your pseudo");
    sfText_setString(rpg.intro.text1, rpg.intro.int1);
    sfText_setString(rpg.intro.text2, rpg.intro.pseudo);
    sfText_setPosition(rpg.intro.text1, (sfVector2f) {800, 75});
    sfText_setPosition(rpg.intro.text2, (sfVector2f) {880, 450});
    sfText_setPosition(rpg.intro.text3, (sfVector2f) {920, 700});
    sfSprite_setPosition(rpg.intro.rect.sprite, (sfVector2f) {600, 200});
    return (rpg);
}

rpg_t chose_your_pseudo(rpg_t rpg)
{
    static int i = 0;
    if (rpg.event.text.unicode == 8 && i == 0)
        return (rpg);
    if (rpg.event.text.unicode == 8 && i > 0) {
        i--;
        rpg.intro.pseudo[i] = '\0';
        sfText_setString(rpg.intro.text2, rpg.intro.pseudo);
        return (rpg);
    }
    if (i == 12)
        return (rpg);
    if (rpg.event.text.unicode < 33 || rpg.event.text.unicode > 126)
        return (rpg);
    rpg.intro.pseudo[i] = rpg.event.text.unicode;
    rpg.intro.pseudo[i + 1] = '\0';
    i++;
    sfText_setString(rpg.intro.text2, rpg.intro.pseudo);
    return (rpg);
}

rpg_t event_pseudo(rpg_t rpg)
{
    while (sfRenderWindow_pollEvent(rpg.window, &rpg.event)) {
        if (rpg.event.type == sfEvtClosed)
            sfRenderWindow_close(rpg.window);
        if (rpg.event.type == sfEvtTextEntered)
            rpg = chose_your_pseudo(rpg);
        if (rpg.mouse_pos.x > 920 && rpg.mouse_pos.x < 1020
        && rpg.mouse_pos.y > 710 && rpg.mouse_pos.y < 755)
            sfText_setCharacterSize(rpg.intro.text3, 60);
        if (rpg.event.type == sfEvtMouseButtonPressed && rpg.mouse_pos.x > 920
        && rpg.mouse_pos.x < 1020 && rpg.mouse_pos.y > 710
        && rpg.mouse_pos.y < 755)
            rpg.intro.pseudo_pass = 1;
        if ((rpg.mouse_pos.x < 920 || rpg.mouse_pos.x > 1020)
        || (rpg.mouse_pos.y < 710 || rpg.mouse_pos.y > 755))
            sfText_setCharacterSize(rpg.intro.text3, 50);
    }
    return (rpg);
}

rpg_t change_pseudo(rpg_t rpg)
{
    rpg = set_position_pseudo(rpg);
    while (sfRenderWindow_isOpen(rpg.window)) {
        sfRenderWindow_clear(rpg.window, sfBlack);
        sfRenderWindow_drawText(rpg.window, rpg.intro.text1, NULL);
        sfRenderWindow_drawSprite(rpg.window, rpg.intro.rect.sprite, NULL);
        sfRenderWindow_drawText(rpg.window, rpg.intro.text2, NULL);
        sfRenderWindow_drawText(rpg.window, rpg.intro.text3, NULL);
        rpg.mouse_pos = sfMouse_getPositionRenderWindow(rpg.window);
        disp_mouse(rpg);
        sfRenderWindow_display(rpg.window);
        rpg = event_pseudo(rpg);
        if (rpg.intro.pseudo_pass == 1) {
            rpg.intro.interac_char = 1;
            sfText_setPosition(rpg.intro.text2, (sfVector2f) {500, 0});
            return (rpg);
        }
    }
    return (rpg);
}
