/*
** EPITECH PROJECT, 2020
** set4
** File description:
** set4
*/

#include "rpg.h"

rpg_t set_value2(rpg_t rpg)
{
    rpg.intro.pseudo = malloc(sizeof(char) * 14);
    rpg.intro.int1 = malloc(sizeof(char) * 200);
    rpg.intro.int2 = malloc(sizeof(char) * 200);
    rpg.intro.int1 = my_strcpy(rpg.intro.int1,
    "Hello, welcome in our gam\nYou will incarn this little boy\n"
    "The goal of this game is to sucess at school");
    rpg.intro.pos_char = (sfVector2f) {2000, 670};
    rpg.intro.pseudo[0] = '\0';
    for (int i = 0; i < 7; i++)
        rpg.save.new_save[i] = malloc(sizeof(char) * 100);
    return (rpg);
}

rpg_t set_clock(rpg_t rpg)
{
    rpg.clock = sfClock_create();
    rpg.map.m_clock = sfClock_create();
    rpg.clock_corona = sfClock_create();
    rpg.fgt.cursor_clock.clock = sfClock_create();
    rpg.fgt.back_intro_clock.clock = sfClock_create();
    rpg.fgt.hero_clock.clock = sfClock_create();
    rpg.fgt.enemy_clock.clock = sfClock_create();
    rpg.intro.clock = sfClock_create();
    rpg.intro.clock_char = sfClock_create();
    return (rpg);
}

rpg_t initialisation(rpg_t rpg)
{
    if (rpg.fgt.weapon == 0) {
        rpg.fgt.hero.texture =
        sfTexture_createFromFile("assets/fight/hero_sword.png", NULL);
        rpg.fgt.hero.sprite = sfSprite_create();
    } if (rpg.fgt.weapon == 1) {
        rpg.fgt.hero.texture =
        sfTexture_createFromFile("assets/fight/hero_lsword.png", NULL);
        rpg.fgt.hero.sprite = sfSprite_create();
        rpg.fgt.hero_p.atk = 15;
    } if (rpg.fgt.weapon == 2) {
        rpg.fgt.hero.texture =
        sfTexture_createFromFile("assets/fight/hero_lance.png", NULL);
        rpg.fgt.hero.sprite = sfSprite_create();
        rpg.fgt.hero_p.atk = 20;
    } if (rpg.fgt.weapon == 3) {
        rpg.fgt.hero.texture =
        sfTexture_createFromFile("assets/fight/hero_trident.png", NULL);
        rpg.fgt.hero.sprite = sfSprite_create();
        rpg.fgt.hero_p.atk = 40;
    } if (rpg.fgt.weapon == 4) {
        rpg.fgt.hero.texture =
        sfTexture_createFromFile("assets/fight/hero_axe.png", NULL);
        rpg.fgt.hero.sprite = sfSprite_create();
        rpg.fgt.hero_p.atk = 20;
    }
    return rpg;
}