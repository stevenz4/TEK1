/*
** EPITECH PROJECT, 2020
** intro_3
** File description:
** intro_3
*/

#include "rpg.h"

rpg_t interaction_narrator4(rpg_t rpg, float sec)
{
    if (rpg.intro.aaa == 2 && rpg.intro.int1[rpg.intro.iii] == '\0'
    && sec > 2.5) {
        rpg.in_game = 1;
        rpg.intro_v = 0;
    }
    return (rpg);
}

rpg_t interaction_narrator3(rpg_t rpg, float sec)
{
    if (rpg.intro.aaa == 1 && rpg.intro.int1[rpg.intro.iii] == '\0'
    && sec > 2.5) {
        rpg.intro.aaa = 2;
        rpg.intro.interac_dialogue = 6;
        rpg.intro.iii = 0;
        rpg.intro.int2[0] = '\0';
        rpg = change_pseudo(rpg);
        sfText_setPosition(rpg.intro.text2, (sfVector2f) {1130, 430});
    }
    if (rpg.intro.interac_dialogue == 8 && rpg.intro.aaa == 2 && sec > 0.1
    && rpg.intro.int1[rpg.intro.iii] != '\0') {
        rpg.intro.int1 = my_strcpy(rpg.intro.int1,
        "If you are ready let's start !\nGood luck !");
        rpg.intro.int2[rpg.intro.iii] = rpg.intro.int1[rpg.intro.iii];
        rpg.intro.int2[rpg.intro.iii + 1] = '\0';
        sfClock_restart(rpg.intro.clock_char);
        sfText_setString(rpg.intro.text2, rpg.intro.int2);
        rpg.intro.iii++;
    }
    return (rpg);
}

rpg_t interaction_narrator2(rpg_t rpg, float sec)
{
    if (rpg.intro.aaa == 0 && rpg.intro.int1[rpg.intro.iii] == '\0'
    && sec > 2.5) {
        rpg.intro.aaa = 1;
        rpg.intro.interac_dialogue = 3;
        rpg.intro.iii = 0;
        rpg.intro.interac_char = 1;
        rpg.intro.int2[0] = '\0';
        sfText_setPosition(rpg.intro.text2, (sfVector2f) {1130, 430});
    }
    if (rpg.intro.interac_dialogue == 5 && rpg.intro.aaa == 1 &&
    sec > 0.1 && rpg.intro.int1[rpg.intro.iii] != '\0') {
        rpg.intro.int1 = my_strcpy(rpg.intro.int1,
        "Of course you can change your name\nYou are"
        " in a dream you can do everything");
        rpg.intro.int2[rpg.intro.iii] = rpg.intro.int1[rpg.intro.iii];
        rpg.intro.int2[rpg.intro.iii + 1] = '\0';
        sfClock_restart(rpg.intro.clock_char);
        sfText_setString(rpg.intro.text2, rpg.intro.int2);
        rpg.intro.iii++;
    } return (rpg);
}

rpg_t interaction_narrator(rpg_t rpg)
{
    float sec;
    rpg.intro.time = sfClock_getElapsedTime(rpg.intro.clock_char);
    sec = rpg.intro.time.microseconds / 1000000.0;
    if (rpg.intro.interac_dialogue == 2 && rpg.intro.aaa == 0 && sec > 0.1
    && rpg.intro.int1[rpg.intro.iii] != '\0') {
        rpg.intro.int1 = my_strcpy(rpg.intro.int1,
        "You are dreaming, and when you dream you can access in this"
        " new world\nNow you need to explore that new world and fight"
        " against the monsters");
        rpg.intro.int2[rpg.intro.iii] = rpg.intro.int1[rpg.intro.iii];
        rpg.intro.int2[rpg.intro.iii + 1] = '\0';
        sfClock_restart(rpg.intro.clock_char);
        sfText_setString(rpg.intro.text2, rpg.intro.int2);
        sfText_setPosition(rpg.intro.text2, (sfVector2f) {500, 0});
        rpg.intro.iii++;
    }
    rpg = interaction_narrator2(rpg, sec);
    rpg = interaction_narrator3(rpg, sec);
    rpg = interaction_narrator4(rpg, sec);
    return (rpg);
}
