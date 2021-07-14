/*
** EPITECH PROJECT, 2019
** my
** File description:
** my
*/

#ifndef _MY_H_

#define _MY_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>

#define FAILURE (84)
#define SUCCESS (0)

#define WIDTH (1920)
#define HEIGHT (1080)

typedef struct skull {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f coord;
    sfVector2f speed;
    int pass;
    int x;
}skull_t;

typedef struct object {
    sfTexture *texture;
    sfSprite *sprite;
} obj;

typedef struct text {
    sfFont *font;
    sfText *text;
    char *str;
}text_t;

typedef struct clock_def {
    sfClock *clock;
    sfTime time;
    float seconds;
} handle_time_t;

typedef struct skull_position {
    sfVector2f one;
    sfVector2f two;
    sfVector2f three;
    sfVector2f four;
} pos_t;

typedef struct sound_and_music {
    float sound_volume;
    sfSound *sound;
    sfSoundBuffer *soundbuffer;
} sm_t;

typedef struct my_defender_struct {
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    sm_t music1;
    sm_t click1;
    sfVector2i mouse_pos;
    sfVector2f play_pos;
    sfVector2f option_pos;
    sfVector2f quit_pos;
    sfVector2f skull_vector[50];
    sfVector2f fire_vector[1];
    sfVector2f minus_pos;
    sfVector2f back_pos;
    sfVector2f plus_pos;
    sfVector2f title_pos;
    sfVector2f shop_pos;
    sfVector2f shop_left;
    sfVector2f case_c_pos;
    sfIntRect vol_rect;
    sfIntRect quit_rect;
    sfIntRect option_rect;
    sfIntRect play_rect;
    sfIntRect rskull;
    sfIntRect fire_rect[5];
    sfIntRect rock_rect;
    sfIntRect back_rect;
    sfIntRect plus_rect;
    sfIntRect minus_rect;
    sfIntRect lmapa_rect;
    sfIntRect lmapb_rect;
    sfIntRect lmapc_rect;
    sfIntRect rlife;
    sfIntRect rmoney;
    sfIntRect rbank;
    sfIntRect ftp_rect;
    sfIntRect rtp_rect;
    handle_time_t f_clock[6];
    handle_time_t r_clock;
    handle_time_t m_clock;
    handle_time_t l_clock;
    handle_time_t mon_clock;
    handle_time_t clock_gen;
    skull_t skull[50];
    obj shop;
    obj ft1;
    obj rt1;
    obj bank_min;
    obj title;
    obj option_b;
    obj quit_b;
    obj sound_b;
    obj back;
    obj minus_b;
    obj plus_b;
    obj sound_vol;
    obj play_b;
    obj back_b;
    obj lmap_a;
    obj lmap_b;
    obj lmap_c;
    obj map;
    obj fire_t[5];
    obj rock_t;
    obj smoney;
    obj slife;
    obj back_two;
    obj bank;
    text_t option_map;
    text_t map_a;
    text_t text_lvl;
    text_t map_b;
    text_t map_c;
    text_t money;
    text_t life;
    text_t tlose;
    text_t rules[10];
    pos_t pos[50];
    pos_t hitbox[1];
    int case_a;
    int case_b;
    int case_c;
    int case_d;
    int case_e;
    int case_f;
    int lose;
    int fire_a;
    int fire2_a;
    int fire3_a;
    int fire_b;
    int fire2_b;
    int fire3_b;
    int fire_c;
    int fire2_c;
    int fire3_c;
    int rock_d;
    int rock2_d;
    int rock3_d;
    int fire_e;
    int fire2_e;
    int fire3_e;
    int bank_a;
    int imoney;
    int gold_sec;
    int lvl;
    int count;
} def_t;

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_printf(char *s, ...);
int my_put_binary(int nb);
int my_put_octal(int nb);
int my_putstr_octal(char const *str);
int my_put_octalbis(int nb);
int my_put_hex(int nb);
int my_put_hexbis(int nb);
int my_put_hexadd(long long nb);
int my_getnbr_2(char *str);

def_t initialisation(def_t gnl);
def_t init_2(def_t gnl);
def_t init_3(def_t gnl);
def_t init_4(def_t gnl);
def_t init_5(def_t gnl);
def_t init_6(def_t gnl);
def_t init_7(def_t gnl);
def_t init_8(def_t gnl);
def_t init_9(def_t gnl);
def_t init_10(def_t gnl);
def_t init_11(def_t gnl);
def_t init_12(def_t gnl);
def_t init_13(def_t gnl);
def_t init_14(def_t gnl);
def_t init_15(def_t gnl);

void create_menu(def_t gnl);
void menu_event_handle(def_t gnl);
void options_menu(def_t gnl);
void option_map(def_t gnl);
void game(def_t gnl);
def_t speed_the_skull(def_t gnl, int i);
def_t money(def_t gnl);
def_t init_skull(def_t gnl);
def_t set_position_skull(def_t gnl);
def_t speed_skulls(def_t gnl);
def_t draw_skull(def_t gnl);
def_t texture_skull(def_t gnl);
def_t life(def_t gnl);
def_t money_animation(def_t gnl);
def_t fire_tower_animation(def_t gnl, int j, int i);
def_t get_tower_pos(def_t gnl, int i);
def_t case_a_b(def_t gnl);
def_t case_c_d(def_t gnl);
def_t case_e_f(def_t gnl);
def_t close_shop(def_t gnl);
def_t check_display_shop(def_t gnl);
def_t check_life_6(def_t gnl);
def_t check_life_5(def_t gnl);
def_t check_life_4(def_t gnl);
def_t check_life_3(def_t gnl);
def_t check_life(def_t gnl);
def_t check_hit(def_t gnl, int i);
def_t check_lose(def_t gnl);
def_t check_hit_2(def_t gnl);
def_t init_rect(def_t gnl);
def_t draw_turrets(def_t gnl);
def_t texture_turrets(def_t gnl);
def_t str_money(def_t gnl, int x);
def_t init_rules(def_t gnl);
void rules(def_t gnl);
def_t bank_animation(def_t gnl);
def_t pos_skull(def_t gnl);
def_t write_lvl(def_t gnl);
def_t get_rock_tower_pos(def_t);
def_t rock_tower_animation(def_t gnl, int j);
def_t get_rock_tower_pos(def_t gnl);
def_t rock_check_hit(def_t gnl);
void destroy_rules(def_t gnl);
void destroy_game(def_t gnl);
void destroy_game_6(def_t gnl);
def_t event_lose_2(def_t gnl);
void menu_buttons_animation_two_bis(def_t gnl);
void loser_screen2(def_t gnl);
void menu_event_handle2(def_t gnl);
void menu_buttons_animation2(def_t gnl);
void menu_buttons_animation3(def_t gnl);
void create_menu2(def_t gnl);
def_t game2(def_t gnl);
def_t game3(def_t gnl);
def_t game5(def_t gnl);
def_t get_skull_pos(def_t gnl);
def_t game4(def_t gnl);
def_t init_skull2(def_t gnl, int i, int y);
void option_map2(def_t gnl);
void option_map3(def_t gnl);
void option_button_animation2(def_t gnl);
void option_button_animation3(def_t gnl);
def_t options_menu2(def_t gnl);
def_t shop_a(def_t gnl);
def_t shop_b(def_t gnl);
def_t shop_c(def_t gnl);
def_t shop_d(def_t gnl);
def_t shop_e(def_t gnl);
def_t shop_f(def_t gnl);
def_t set_position_skull_2(def_t gnl);

def_t a_1(def_t gnl);
void a_2(def_t gnl);
def_t b_1(def_t gnl);
void b_2(def_t gnl);
def_t c_1(def_t gnl);
void c_2(def_t gnl);
def_t e_1(def_t gnl);
void e_2(def_t gnl);
def_t f_1(def_t gnl);
void f_2(def_t gnl);

def_t rock_check_hitbis(def_t gnl, int j);
def_t check_hitbis(def_t gnl, int j, int i);

#endif
