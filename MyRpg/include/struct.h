/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** all my
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Network.h>

#ifndef __STRUCT_H__
#define __STRUCT_H__

typedef struct sound_and_music {
    float sound_volume;
    sfSound *sound;
    sfSoundBuffer *soundbuffer;
} sm_t;

typedef struct text {
    sfFont *font;
    sfText *text;
    char *str;
}text_t;

typedef struct clock_def {
    sfClock *clock;
    sfTime time;
    float seconds;
} hdl_clock;

typedef struct fight_intro {
    sfVector2f intro_back_pos;
    sfVector2f intro_ui_pos;
    int check_intro;
} fgt_intro_st;

typedef struct player_stat {
    int atk;
    int hp;
} player;

typedef struct save
    {
        char *save_nbr;
        char *new_save[7];
        char *the_save;
    } save_t;

typedef struct pad
    {
        int up, down, left, right;

    } pad_t;

typedef struct texture
    {
        sfTexture *texture;
        sfSprite *sprite;
        sfIntRect rect;
        sfVector2f vect;

    } texture_t;

typedef struct button
    {
        sfText* text;
        sfVector2f button;

    } button_t;

typedef struct sound
    {
        sfSoundBuffer *buffer;
        sfSound *sound;

    } sound_t;

typedef struct audio
    {
        sound_t bling;
        sfMusic *music;

    } audio_t;

typedef struct dialogue
    {
        texture_t rect;
        texture_t charac;
        sfText* dialogue;
        char *text;
    }dialogue_t;

typedef struct fight {
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    texture_t back;
    texture_t ui;
    texture_t cursor;
    texture_t hero;
    texture_t enemy;
    texture_t poison_icon;
    texture_t shield_icon;
    sfVector2i mouse_pos;
    sfVector2f ui_pos;
    sfVector2f back_pos;
    sfVector2f cursor_pos;
    sfVector2f hero_pos;
    sfVector2f enemy_pos;
    sfIntRect cursor_rect;
    sfIntRect hero_rect;
    sfIntRect enemy_rect;
    hdl_clock cursor_clock;
    hdl_clock back_intro_clock;
    hdl_clock hero_clock;
    hdl_clock enemy_clock;
    sm_t click;
    sm_t music;
    text_t hp;
    text_t e_hp;
    int bonus;
    int weapon;
    int poison_turn;
    int click_check;
    int check_intro;
    int check_hero_attack;
    int check_enemy_attack;
    int check_hero_shield;
    int check_hero_magic;
    int check_hero_heal;
    player hero_p;
    player enemy_p;
} fgt_st;

typedef struct intro
    {
        texture_t background;
        texture_t paysage;
        texture_t character;
        texture_t bulle;
        texture_t rect;
        sfText* text1;
        sfText* text2;
        sfText* text3;
        sfClock *clock;
        sfClock *clock_char;
        sfTime time;
        sfVector2f pos_char;
        float seconds;
        char *pseudo;
        char *int1, *int2;
        int mouse_pass;
        int i, ii, iii;
        int a, aa, aaa;
        int anim_char;
        int interac_char;
        int explications;
        int interac_dialogue;
        int pseudo_pass;
    } intro_t;

typedef struct inv
{
    int inv;
    int my_weapon;
    int wep1;
    int wep2;
    int wep3;
    int wep4;
    int disp_inv;
    int cheat_mode;

    sfVector2i vmouse;
    sfClock *ccarac;
    sfText *tright;
    sfFont *fright;
    sfVector2f vright;
    sfText *tleft;
    sfFont *fleft;
    sfVector2f vleft;

    texture_t caracter;
    texture_t on_me;
    texture_t ache;
    texture_t edb;
    texture_t elongue;
    texture_t gilet;
    texture_t lance;
    texture_t shur;
    texture_t invv;
    texture_t choose_edb;
    texture_t choose_el;
    texture_t choose_a;
    texture_t choose_s;
    texture_t choose_l;

    sfTexture *tfd;
    sfSprite *sfd;

    sfEvent click;
} inv_t;

typedef struct map
    {
        texture_t back;
        texture_t back2;
        texture_t caracter;
        sfIntRect caracter_rect;
        pad_t pad;
        sfVector2i itb_caracter;
        sfClock *m_clock;
        sfVector2f caracter_pos;
        int ac, pos_back_x, pos_back_y, key;
        char **av, itb_map[22][40], *map;
    } map_t;

typedef struct rpg
    {
        save_t save;

        map_t map;

        sfRenderWindow* window;

        sfEvent event;

        sfFont* font;

        button_t play;
        button_t options;
        button_t quit;
        button_t music;
        button_t sound;

        texture_t start_menu;
        texture_t start_menu2;
        texture_t mouse;
        texture_t studio;
        texture_t c_select;
        texture_t OUE;

        audio_t audio;

        sfClock *clock;
        sfClock *clock_corona;

        sfVector2i mouse_pos;

        intro_t intro;

        inv_t inv;

        dialogue_t dialogue;

        int ac, start, m_volume, s_volume, intro_v,
        studio_var, play_var, travel, in_game, fight, new_game;
        char **av;
        fgt_st fgt;
    } rpg_t;

#endif
