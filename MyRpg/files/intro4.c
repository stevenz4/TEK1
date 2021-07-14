/*
** EPITECH PROJECT, 2020
** intro4
** File description:
** intro4
*/

#include "rpg.h"

rpg_t interaction_character6(rpg_t rpg, float sec)
{
    if (rpg.intro.int1[rpg.intro.ii] == '\0'
    && rpg.intro.aa == 4 && sec > 2.5) {
        rpg.intro.interac_dialogue = 8;
        rpg.intro.int2[0] = '\0';
        sfText_setString(rpg.intro.text2, rpg.intro.int2);
        rpg.intro.ii = 0;
        rpg.intro.aa = 5;
        rpg.intro.interac_char = 0;
        sfText_setPosition(rpg.intro.text2, (sfVector2f) {500, 0});
    }
    return (rpg);
}
