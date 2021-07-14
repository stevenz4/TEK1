/*
** EPITECH PROJECT, 2020
** set_dialogue
** File description:
** set_dialogue
*/

#include "rpg.h"

rpg_t set_dialogue2(rpg_t rpg)
{
    sfSprite_setTexture(
    rpg.dialogue.charac.sprite, rpg.dialogue.charac.texture, sfTrue);
    sfSprite_setTextureRect(
    rpg.dialogue.charac.sprite, rpg.dialogue.charac.rect);
    rpg.dialogue.text = malloc(sizeof(char) * 1000);
    rpg.dialogue.text[0] = '\0';
    rpg.dialogue.dialogue = sfText_create();
    sfText_setColor(rpg.dialogue.dialogue, sfBlack);
    sfText_setString(rpg.dialogue.dialogue, rpg.dialogue.text);
    sfText_setFont(rpg.dialogue.dialogue, rpg.font);
    sfText_setCharacterSize(rpg.dialogue.dialogue, 50);
    return (rpg);
}

rpg_t set_dialogue(rpg_t rpg)
{
    rpg.dialogue.rect.texture = sfTexture_createFromFile(
    "assets/dialogue/rect_dialogue.png", NULL);
    rpg.dialogue.charac.texture = sfTexture_createFromFile(
    "assets/dialogue/perso_dialogue.png", NULL);
    rpg.dialogue.rect.sprite = sfSprite_create();
    rpg.dialogue.charac.sprite = sfSprite_create();
    rpg.dialogue.charac.rect.height = 200;
    rpg.dialogue.charac.rect.width = 165;
    rpg.dialogue.charac.rect.top = 0;
    rpg.dialogue.charac.rect.left = 0;
    sfSprite_setTexture(
    rpg.dialogue.rect.sprite, rpg.dialogue.rect.texture, sfTrue);
    rpg = set_dialogue2(rpg);
    return (rpg);
}
