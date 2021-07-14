/*
** EPITECH PROJECT, 2020
** intro2
** File description:
** intro2
*/

#include "rpg.h"

rpg_t interaction_character2(rpg_t rpg, float sec)
{
    if (rpg.intro.int1[rpg.intro.ii] == '\0'
    && rpg.intro.aa == 0 && sec > 2.5) {
        rpg.intro.interac_char = 0;
        rpg.intro.interac_dialogue = 2;
        rpg.intro.int2[0] = '\0';
        sfText_setString(rpg.intro.text2, rpg.intro.int2);
        rpg.intro.ii = 0;
        rpg.intro.aa = 1;
    }
    if (rpg.intro.interac_dialogue == 3 && rpg.intro.aa == 1
    && sec > 0.1 && rpg.intro.int1[rpg.intro.ii] != '\0') {
        rpg.intro.int1 = my_strcpy(
        rpg.intro.int1, "Wouaw that\n will be a\nso great adventure");
        rpg.intro.int2[rpg.intro.ii] = rpg.intro.int1[rpg.intro.ii];
        rpg.intro.int2[rpg.intro.ii + 1] = '\0';
        sfClock_restart(rpg.intro.clock_char);
        sfText_setString(rpg.intro.text2, rpg.intro.int2);
        rpg.intro.ii++;
    }
    return (rpg);
}

rpg_t interaction_character(rpg_t rpg)
{
    float sec;
    rpg.intro.time = sfClock_getElapsedTime(rpg.intro.clock_char);
    sec = rpg.intro.time.microseconds / 1000000.0;
    if (rpg.intro.interac_char == 1)
        sfRenderWindow_drawSprite(rpg.window, rpg.intro.bulle.sprite, NULL);
    if (rpg.intro.interac_dialogue == 1 && rpg.intro.aa == 0
    && sec > 0.1 && rpg.intro.int1[rpg.intro.ii] != '\0') {
        rpg.intro.int1 = my_strcpy(
        rpg.intro.int1, "What is\nthat world?\nWhere am i?");
        rpg.intro.int2[rpg.intro.ii] = rpg.intro.int1[rpg.intro.ii];
        rpg.intro.int2[rpg.intro.ii + 1] = '\0';
        sfClock_restart(rpg.intro.clock_char);
        sfText_setString(rpg.intro.text2, rpg.intro.int2);
        rpg.intro.ii++;
    }
    rpg = interaction_character2(rpg, sec);
    rpg = interaction_character3(rpg, sec);
    rpg = interaction_character4(rpg, sec);
    rpg = interaction_character5(rpg, sec);
        return (rpg);
}

rpg_t animation_char(rpg_t rpg)
{
    float sec;
    rpg.intro.time = sfClock_getElapsedTime(rpg.intro.clock_char);
    sec = rpg.intro.time.microseconds / 1000000.0;

    if (sec > 0.3 && rpg.intro.anim_char != 1) {
        rpg.intro.character.rect.left = rpg.intro.character.rect.left + 360;
        if (rpg.intro.character.rect.left > 720)
            rpg.intro.character.rect.left = 0;
        sfSprite_setTextureRect(
        rpg.intro.character.sprite, rpg.intro.character.rect);
        sfClock_restart(rpg.intro.clock_char);
    }
    if (rpg.intro.anim_char == 1) {
        rpg.intro.character.rect.left = 0;
        rpg.intro.character.rect.top = 960;
        rpg.intro.pos_char.y = 630;
        sfSprite_setTextureRect(
        rpg.intro.character.sprite, rpg.intro.character.rect);
        sfSprite_setPosition(rpg.intro.character.sprite, rpg.intro.pos_char);
    } return (rpg);
}

void intro_2(rpg_t rpg)
{
    rpg.intro.int2[0] = '\0';
    rpg.intro.a = 0;
    rpg.intro.i = 0;
    sfText_setString(rpg.intro.text2, rpg.intro.int2);
    sfSprite_setPosition(rpg.intro.character.sprite, rpg.intro.pos_char);
    sfSprite_setPosition(rpg.intro.bulle.sprite, (sfVector2f) {1000, 400});
    sfText_setPosition(rpg.intro.text2, (sfVector2f) {1150, 430});
    sfClock_restart(rpg.intro.clock);
    sfClock_restart(rpg.intro.clock_char);
    while (sfRenderWindow_isOpen(rpg.window)) {
        sfRenderWindow_clear(rpg.window, sfBlack);
        sfRenderWindow_drawSprite(rpg.window, rpg.intro.paysage.sprite, NULL);
        sfRenderWindow_drawSprite(rpg.window, rpg.intro.character.sprite, NULL);
        sfRenderWindow_drawText(rpg.window, rpg.intro.text2, NULL);
        rpg = interaction_character(rpg);
        rpg = interaction_narrator(rpg);
        rpg = move_character(rpg);
        rpg = animation_char(rpg);
        sfRenderWindow_display(rpg.window);
    }
}
