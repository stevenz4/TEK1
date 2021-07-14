/*
** EPITECH PROJECT, 2020
** set4
** File description:
** set4
*/

#include "rpg.h"

rpg_t set_text(rpg_t rpg)
{
    rpg.font = sfFont_createFromFile( "assets/Enchanted Land.otf");
    rpg.fgt.e_hp.font = sfFont_createFromFile("assets/fight/land.otf");
    rpg.fgt.hp.font = sfFont_createFromFile("assets/fight/land.otf");
    rpg.play.text = set_text2(rpg.play.text, "Play", rpg.font);
    rpg.options.text = set_text2(rpg.play.text, "Options", rpg.font);
    rpg.quit.text = set_text2(rpg.play.text, "Quit", rpg.font);
    rpg.fgt.hp.text = set_text2(rpg.fgt.hp.text, "100", rpg.fgt.hp.font);
    rpg.fgt.e_hp.text = set_text2(rpg.fgt.e_hp.text, "100", rpg.fgt.e_hp.font);
    rpg.intro.text1 = set_text2(rpg.intro.text1,
    "Hello, Welcome in our game !\nYou will incarn this ", rpg.font);
    rpg.intro.text2 = set_text2(rpg.intro.text2,
    "litlle boy\nThe goal of this game is to sucess at school", rpg.font);
    rpg.intro.text3 = set_text2(rpg.intro.text3, "Finish", rpg.font);
    rpg.music.text = sfText_create();
    rpg.sound.text = sfText_create();
    rpg = set_text3(rpg);
    return (rpg);
}

rpg_t set_text3(rpg_t rpg)
{
    sfText_setFont(rpg.music.text, rpg.font);
    sfText_setFont(rpg.sound.text, rpg.font);
    sfText_setCharacterSize(rpg.intro.text1, 50);
    sfText_setCharacterSize(rpg.intro.text2, 50);
    sfText_setCharacterSize(rpg.intro.text3, 50);
    sfText_setCharacterSize(rpg.music.text, 75);
    sfText_setCharacterSize(rpg.sound.text, 75);
    sfText_setCharacterSize(rpg.fgt.e_hp.text, 65);
    sfText_setCharacterSize(rpg.fgt.hp.text, 65);
    sfText_setColor(rpg.fgt.hp.text, sfGreen);
    sfText_setColor(rpg.fgt.e_hp.text, sfRed);
    sfText_setPosition(rpg.fgt.hp.text, (sfVector2f) {1260, 780});
    sfText_setPosition(rpg.fgt.e_hp.text, (sfVector2f) {1630, 780});
    sfText_setPosition(rpg.intro.text2, (sfVector2f) {500, 0});
    sfText_setPosition(rpg.intro.text1, (sfVector2f) {500, 150});
    return (rpg);
}

sfText *set_text2(sfText *tx, char * str, sfFont *font)
{
    tx = sfText_create();
    sfText_setFont(tx, font);
    sfText_setCharacterSize(tx, 100);
    sfText_setString(tx, str);
    return (tx);
}

rpg_t set_value(rpg_t rpg)
{
    rpg.c_select.rect = (sfIntRect) {0, 0, 1920, 1080};
    rpg.studio.rect = (sfIntRect) {0, 0, 767, 600};
    rpg.intro.character.rect = (sfIntRect) {0, 1440, 360, 480};
    rpg.start_menu.rect = (sfIntRect) {0, 0, 1920, 1080};
    rpg.fgt.enemy_rect = (sfIntRect) {0, 0, 199, 199};
    rpg.map.caracter_rect = (sfIntRect) {0, 0, 180, 336};
    rpg.fgt.cursor_rect = (sfIntRect) {0, 0, 105, 60};
    rpg.fgt.hero_rect = (sfIntRect) {0, 0, 500, 225};
    rpg.map.pad = (pad_t) {0, 0, 0, 1};
    rpg.map.caracter_pos = (sfVector2f) {-50, 360};
    rpg.fgt.ui_pos = (sfVector2f) {1945, 675};
    rpg.fgt.hero_pos = (sfVector2f) {400, 450};
    rpg.fgt.back_pos = (sfVector2f) {1920, 0};
    rpg.fgt.cursor_pos = (sfVector2f) {100, 765};
    rpg.fgt.enemy_pos = (sfVector2f) {1200, 450};
    rpg.intro.anim_char = 0, rpg.intro.mouse_pass = 0, rpg.in_game = 0;
    rpg.intro.pseudo_pass = 0, rpg.intro.a = 0, rpg.intro.i = 0;
    rpg.intro.aa = 0, rpg.intro.aaa = 0, rpg.intro.ii = 0, rpg.intro.iii = 0;
    rpg = set_value3(rpg);
    return (rpg);
}

rpg_t set_value3(rpg_t rpg)
{
    rpg.intro.interac_dialogue = 0, rpg.m_volume = 10, rpg.s_volume = 10;
    rpg.studio_var = 0, rpg.start = 0, rpg.play_var = 0, rpg.intro_v = 0;
    rpg.map.pos_back_x = 0, rpg.map.pos_back_y = 0, rpg.map.key = 0;
    rpg.fgt.click_check = 0, rpg.fgt.check_intro = 0, rpg.fight = 0;
    rpg.fgt.check_enemy_attack = 0, rpg.fgt.check_hero_attack = 0;
    rpg.fgt.hero_p.atk = 10, rpg.fgt.hero_p.hp = 100, rpg.fgt.weapon = 3;
    rpg.fgt.enemy_p.atk = 15, rpg.fgt.enemy_p.hp = 100;
    rpg.fgt.check_hero_shield = 0, rpg.fgt.check_hero_magic = 0;
    rpg.fgt.poison_turn = 0, rpg.fgt.check_hero_heal = 0;
    rpg.travel = 0, rpg.fgt.bonus = 15;
    rpg = initialisation(rpg);
    rpg = set_value2(rpg);
    return (rpg);
}
