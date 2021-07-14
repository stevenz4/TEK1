/*
** EPITECH PROJECT, 2020
** dialogue
** File description:
** dialogue
*/

#include "rpg.h"

rpg_t dialogue(rpg_t rpg, sfSprite *pictures, char *str)
{
    sfSprite_setPosition(rpg.dialogue.rect.sprite, (sfVector2f) {260, 700});
    sfSprite_setPosition(rpg.dialogue.charac.sprite, (sfVector2f) {350, 720});
    sfText_setPosition(rpg.dialogue.dialogue, (sfVector2f) {540, 730});
    sfText_setString(rpg.dialogue.dialogue, str);
    sfRenderWindow_drawSprite(rpg.window, rpg.dialogue.rect.sprite, NULL);
    sfRenderWindow_drawSprite(rpg.window, pictures, NULL);
    sfRenderWindow_drawText(rpg.window, rpg.dialogue.dialogue, NULL);
    return (rpg);
}
