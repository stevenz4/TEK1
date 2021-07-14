/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** all my
*/

#include "my.h"
#include "struct.h"
#include <fcntl.h>
#include <ncurses.h>
#include <string.h>

#ifndef __RPG_H__
#define __RPG_H__

rpg_t set(rpg_t rpg);
rpg_t disp(rpg_t rpg);
int destroy(rpg_t rpg);
rpg_t click(rpg_t rpg);
rpg_t mouse(rpg_t rpg);
rpg_t event(rpg_t rpg);
rpg_t click2(rpg_t rpg);
rpg_t click3(rpg_t rpg);
rpg_t mouse2(rpg_t rpg);
rpg_t isopen(rpg_t rpg);
int disp_mouse(rpg_t rpg);
rpg_t set_text(rpg_t rpg);
rpg_t set_value(rpg_t rpg);
rpg_t event_intro(rpg_t rpg);
int destroy3(rpg_t rpg);
rpg_t set_clock(rpg_t rpg);
rpg_t set_text3(rpg_t rpg);
rpg_t set_value3(rpg_t rpg);
rpg_t set_sound(rpg_t rpg);
sfText *set_text2(sfText *tx, char * str, sfFont *font);
rpg_t keypressed4(rpg_t rpg);
rpg_t keypressed5(rpg_t rpg);
rpg_t set_texture4(rpg_t rpg);
int rpg(int ac, char ** av);
rpg_t set_button(rpg_t rpg);
int rpg(int ac, char ** av);
rpg_t set_texture(rpg_t rpg);
rpg_t disp_corona(rpg_t rpg);
texture_t set_texture2(texture_t tex, char * str);
rpg_t set_texture3(rpg_t rpg);
rpg_t keypressed(rpg_t rpg);
rpg_t keypressed2(rpg_t rpg);
rpg_t keypressed3(rpg_t rpg);
rpg_t disp_in_game(rpg_t rpg);
int disp_caracter(rpg_t rpg);
int disp_back(rpg_t rpg);
rpg_t set_play_menu(rpg_t rpg);
rpg_t disp_play_menu(rpg_t rpg);
rpg_t set_start_menu(rpg_t rpg);
int destroy_texture(texture_t i);
rpg_t set_start_menu3(rpg_t rpg);
rpg_t disp_start_menu(rpg_t rpg);
rpg_t set_start_menu4(rpg_t rpg);
rpg_t disp_start_menu3(rpg_t rpg);
rpg_t disp_start_menu2(rpg_t rpg);
rpg_t set_start_menu2(rpg_t rpg, int seconds);
rpg_t intro(rpg_t rpg);
rpg_t set4(rpg_t rpg);
void intro_2(rpg_t rpg);
rpg_t interaction_narrator(rpg_t rpg);
rpg_t change_pseudo(rpg_t rpg);
map_t set_map(map_t map);
rpg_t apparence(rpg_t rpg);
map_t set_caracter(map_t map);
rpg_t set_value2(rpg_t rpg);
rpg_t move_character(rpg_t rpg);
rpg_t interaction_character3(rpg_t rpg, float sec);
rpg_t interaction_character4(rpg_t rpg, float sec);
rpg_t interaction_character5(rpg_t rpg, float sec);
rpg_t interaction_character6(rpg_t rpg, float sec);
void destroy_intro(rpg_t rpg);
rpg_t save_that(rpg_t rpg);
rpg_t save_to_struct(rpg_t rpg);
rpg_t resume_from_save(rpg_t rpg);
rpg_t dialogue(rpg_t rpg, sfSprite *pictures, char *str);
rpg_t set_dialogue(rpg_t rpg);
void destroy_intro(rpg_t rpg);
rpg_t destroy_inventory(rpg_t rpg);
rpg_t create_sprites_inventory(rpg_t rpg);
rpg_t display_inv(sfRenderWindow *window, rpg_t rpg);
rpg_t display_game(sfRenderWindow *window, rpg_t rpg);
rpg_t display_weapon(rpg_t rpg, sfRenderWindow *window);
rpg_t set_variables(rpg_t rpg);
rpg_t select_weapon(rpg_t rpg);
rpg_t move_rect(rpg_t rpg);
rpg_t move_rect_2(rpg_t rpg);
rpg_t set_weapons_to_choose(rpg_t rpg);
rpg_t display_weapon_to_choose(rpg_t rpg, sfRenderWindow *window);
rpg_t event_selec_weap(rpg_t rpg, int x_click, int y_click);
rpg_t destroy_all(rpg_t rpg);
rpg_t destroy_all2(rpg_t rpg);
rpg_t starting_fight_animation(rpg_t rpg);
rpg_t starting_fight_animation2(rpg_t rpg);
rpg_t initialisation(rpg_t rpg);
rpg_t enemy_animation(rpg_t rpg);
rpg_t enemy_animation2(rpg_t rpg);
rpg_t create_fight_interface(rpg_t rpg);
rpg_t cursor_animation(rpg_t rpg);
rpg_t hero_animation(rpg_t rpg);
rpg_t hero_shield_animation(rpg_t rpg);
rpg_t hero_magic_animation(rpg_t rpg);
rpg_t hero_heal_animation(rpg_t rpg);
rpg_t event_fight_interface(rpg_t rpg);
rpg_t event_fight_interface2(rpg_t rpg);
rpg_t event_fight_interface3(rpg_t rpg);
rpg_t event_fight_interface4(rpg_t rpg);
rpg_t event_fight_interface5(rpg_t rpg);
rpg_t event_fight_interface6(rpg_t rpg);
rpg_t event_fight_interface7(rpg_t rpg);
rpg_t event_fight_interface8(rpg_t rpg);
rpg_t check_enemy_life(rpg_t rpg);
rpg_t check_hero_life(rpg_t rpg);

#endif
