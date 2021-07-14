/*
** EPITECH PROJECT, 2020
** intro
** File description:
** intro
*/

#include "rpg.h"

rpg_t message_intro2(rpg_t rpg, int x)
{
    if (rpg.intro.i == x && rpg.intro.a == 2) {
        sfClock_restart(rpg.intro.clock);
        rpg.intro.a++;
    }
    if (rpg.intro.seconds > 2.5 && rpg.intro.a == 3) {
        rpg.intro.i = 0;
        rpg.intro.int1 = my_strcpy(rpg.intro.int1,
        "If you go sleep something incredible "
        "will arrive\nTrust me an go in your bed");
        sfClock_restart(rpg.intro.clock);
        rpg.intro.a++;
    }
    if ((rpg.intro.i == x && rpg.intro.a == 4
    && rpg.intro.seconds > 0.80) || rpg.intro.a > 4) {
        rpg.intro.int1 = my_strcpy(rpg.intro.int1, "go to bed");
        sfText_setString(rpg.intro.text1, rpg.intro.int1);
        sfRenderWindow_drawText(rpg.window, rpg.intro.text1, NULL);
        rpg.intro.mouse_pass = 1;
        rpg.intro.a++;
    } return (rpg);
}

rpg_t message_intro(rpg_t rpg)
{
    int x = my_strlen(rpg.intro.int1) + 1;
    rpg.intro.time = sfClock_getElapsedTime(rpg.intro.clock);
    rpg.intro.seconds = rpg.intro.time.microseconds / 1000000.0;
    if (rpg.intro.i != x) {
        if (rpg.intro.seconds > 0.1) {
            rpg.intro.int2[rpg.intro.i] = rpg.intro.int1[rpg.intro.i];
            rpg.intro.int2[rpg.intro.i + 1] = '\0';
            rpg.intro.i++;
            sfClock_restart(rpg.intro.clock);
            sfText_setString(rpg.intro.text2, rpg.intro.int2);
        }
    }
    if (rpg.intro.i == x && rpg.intro.a == 0) {
        sfClock_restart(rpg.intro.clock);
        rpg.intro.a++;
    }
    if (rpg.intro.seconds > 2.5 && rpg.intro.a == 1) {
        rpg.intro.i = 0;
        rpg.intro.int1 = my_strcpy(rpg.intro.int1, "What ? You "
        "find the goal of this game boring?\nDon't worry my "
        "friend i will give you a tips");
        rpg.intro.a++;
    }
    rpg = message_intro2(rpg, x);
    return (rpg);
}

rpg_t event_intro(rpg_t rpg)
{
    if (rpg.event.key.code == sfKeyEscape) {
        if (rpg.new_game == 1)
            rpg = change_pseudo(rpg);
        rpg.in_game = 1;
        rpg.intro_v = 0;
    }
    if (rpg.intro.mouse_pass == 1 && rpg.mouse_pos.x < 610
    && rpg.mouse_pos.x > 490 && rpg.mouse_pos.y < 220
    && rpg.mouse_pos.y > 140)
        sfText_setCharacterSize(rpg.intro.text1, 60);
    if (rpg.intro.mouse_pass == 1 && ((rpg.mouse_pos.x > 600
    || rpg.mouse_pos.x < 500) || (rpg.mouse_pos.y > 220 ||
    rpg.mouse_pos.y < 150)))
        sfText_setCharacterSize(rpg.intro.text1, 50);
    if (rpg.intro.mouse_pass == 1 && rpg.mouse_pos.x < 610 &&
    rpg.mouse_pos.x > 490 && rpg.mouse_pos.y < 220 && rpg.mouse_pos.y > 140
    && rpg.event.type == sfEvtMouseButtonPressed)
        intro_2(rpg);
    return rpg;
}

rpg_t intro(rpg_t rpg)
{
    sfRenderWindow_clear(rpg.window, sfBlack);
    rpg.mouse_pos = sfMouse_getPositionRenderWindow(rpg.window);
    sfRenderWindow_drawSprite(
    rpg.window, rpg.intro.background.sprite, NULL);
    sfRenderWindow_drawText(rpg.window, rpg.intro.text2, NULL);
    rpg = message_intro(rpg);
    disp_mouse(rpg);
    sfRenderWindow_display(rpg.window);
    return rpg;
}
