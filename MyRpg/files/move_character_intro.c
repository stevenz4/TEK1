/*
** EPITECH PROJECT, 2020
** move_character_intro
** File description:
** move_character_intro
*/

#include "rpg.h"

rpg_t interaction_character5(rpg_t rpg, float sec)
{
    if (rpg.intro.int1[rpg.intro.ii] == '\0'
    && rpg.intro.aa == 3 && sec > 2.5) {
        rpg.intro.interac_dialogue = 7;
        rpg.intro.int2[0] = '\0';
        sfText_setString(rpg.intro.text2, rpg.intro.int2);
        rpg.intro.ii = 0;
        rpg.intro.aa = 4;
        rpg.intro.interac_char = 1;
    }
    if (rpg.intro.interac_dialogue == 7 && rpg.intro.aa == 4
    && sec > 0.1 && rpg.intro.int1[rpg.intro.ii] != '\0') {
        rpg.intro.int1 = my_strcpy(rpg.intro.int1,
        "Now i will be\nready for this\nadventure\nLets go!");
        rpg.intro.int2[rpg.intro.ii] = rpg.intro.int1[rpg.intro.ii];
        rpg.intro.int2[rpg.intro.ii + 1] = '\0';
        sfClock_restart(rpg.intro.clock_char);
        sfText_setString(rpg.intro.text2, rpg.intro.int2);
        rpg.intro.ii++;
    } rpg = interaction_character6(rpg, sec);
    return (rpg);
}

rpg_t interaction_character4(rpg_t rpg, float sec)
{
    if (rpg.intro.int1[rpg.intro.ii] == '\0' &&
    rpg.intro.aa == 2 && sec > 2.5) {
        rpg.intro.interac_dialogue = 5;
        rpg.intro.int2[0] = '\0';
        sfText_setString(rpg.intro.text2, rpg.intro.int2);
        rpg.intro.ii = 0;
        rpg.intro.aa = 3;
        rpg.intro.interac_char = 0;
        sfText_setPosition(rpg.intro.text2, (sfVector2f) {500, 0});
    }
    if (rpg.intro.interac_dialogue == 6 && rpg.intro.aa == 3
    && sec > 0.1 && rpg.intro.int1[rpg.intro.ii] != '\0') {
        rpg.intro.int1 = my_strcpy(rpg.intro.int1,
        "Yes !" " I always\nwanted to call\nme like that");
        rpg.intro.int2[rpg.intro.ii] = rpg.intro.int1[rpg.intro.ii];
        rpg.intro.int2[rpg.intro.ii + 1] = '\0';
        sfClock_restart(rpg.intro.clock_char);
        sfText_setString(rpg.intro.text2, rpg.intro.int2);
        rpg.intro.ii++;
    } return (rpg);
}

rpg_t interaction_character3(rpg_t rpg, float sec)
{
    if (rpg.intro.int1[rpg.intro.ii] == '\0'
    && rpg.intro.aa == 1 && sec > 2.5) {
        rpg.intro.interac_dialogue = 4;
        rpg.intro.int2[0] = '\0';
        sfText_setString(rpg.intro.text2, rpg.intro.int2);
        rpg.intro.ii = 0;
        rpg.intro.aa = 2;
    }
    if (rpg.intro.interac_dialogue == 4 && rpg.intro.aa == 2
    && sec > 0.1 && rpg.intro.int1[rpg.intro.ii] != '\0') {
        rpg.intro.int1 = my_strcpy(rpg.intro.int1,
        "But before\nto start\nis it possible\nto change\nmy name?");
        rpg.intro.int2[rpg.intro.ii] = rpg.intro.int1[rpg.intro.ii];
        rpg.intro.int2[rpg.intro.ii + 1] = '\0';
        sfClock_restart(rpg.intro.clock_char);
        sfText_setString(rpg.intro.text2, rpg.intro.int2);
        rpg.intro.ii++;
    }
    return (rpg);
}

rpg_t move_character_2(rpg_t rpg)
{
    if (rpg.intro.i == 110 && rpg.intro.a == 1) {
        rpg.intro.a = 2;
        rpg.intro.i = 0;
    }
    if (rpg.intro.a == 2 && rpg.intro.i != 40 && rpg.intro.seconds > 0.01) {
        rpg.intro.pos_char.x = rpg.intro.pos_char.x - 2;
        rpg.intro.pos_char.y = rpg.intro.pos_char.y + 1;
        rpg.intro.i = rpg.intro.i + 1;
        sfSprite_setPosition(rpg.intro.character.sprite, rpg.intro.pos_char);
        sfClock_restart(rpg.intro.clock);
    }
    if (rpg.intro.i == 40 && rpg.intro.a == 2) {
        rpg.intro.anim_char = 1;
        rpg.intro.interac_char = 1;
        rpg.intro.interac_dialogue = 1;
        rpg.intro.a = 3;
    }
    return (rpg);
}

rpg_t move_character(rpg_t rpg)
{
    rpg.intro.time = sfClock_getElapsedTime(rpg.intro.clock);
    rpg.intro.seconds = rpg.intro.time.microseconds / 1000000.0;
    if (rpg.intro.pos_char.x > 950 && rpg.intro.a == 0
    && rpg.intro.seconds > 0.01) {
        rpg.intro.pos_char.x = rpg.intro.pos_char.x - 2;
        sfSprite_setPosition(rpg.intro.character.sprite, rpg.intro.pos_char);
        sfClock_restart(rpg.intro.clock);
    }
    if (rpg.intro.pos_char.x <= 950 && rpg.intro.a == 0)
        rpg.intro.a = 1;
    if (rpg.intro.a == 1 && rpg.intro.i != 110 && rpg.intro.seconds > 0.01) {
        rpg.intro.pos_char.x = rpg.intro.pos_char.x - 0.5;
        rpg.intro.pos_char.y = rpg.intro.pos_char.y - 1;
        rpg.intro.i++;
        sfSprite_setPosition(rpg.intro.character.sprite, rpg.intro.pos_char);
        sfClock_restart(rpg.intro.clock);
    }
    rpg = move_character_2(rpg);
    return (rpg);
}
