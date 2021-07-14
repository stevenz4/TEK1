/*
** EPITECH PROJECT, 2019
** my
** File description:
** my
*/

#ifndef _MY_H_

#define _MY_H_

#define FAILURE (84)
#define SUCCESS (0)

#include <unistd.h>
#include <getopt.h>
#include <ncurses.h>
#include <curses.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>

typedef struct keyboard_touch {
    int kl;
    int kr;
    int kt;
    int kd;
    int kq;
    int kp;
    char *next;
    int level;
    int rows;
    int cols;
    char **minos;
    char **names;
    int tetri_nb;
    int check;
    int rtn;
} tetris_t;

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

tetris_t init_key(tetris_t tetris);
tetris_t debug_mode(tetris_t tetris);
tetris_t debug_mode_options(tetris_t tetris, int ac, char **av, int option);
tetris_t options_one(tetris_t tetris, int option);
tetris_t options_two(tetris_t tetris, int option);

void display_help(void);
void display_help2(void);

tetris_t change_key_left(char *key, tetris_t tetris);
tetris_t change_key_right(char *key, tetris_t tetris);
tetris_t change_key_turn(char *key, tetris_t tetris);
tetris_t change_key_drop(char *key, tetris_t tetris);
tetris_t change_key_pause(char *key, tetris_t tetris);
tetris_t change_key_quit(char *key, tetris_t tetris);
tetris_t change_level(int level, tetris_t tetris);
tetris_t change_next(tetris_t tetris);
tetris_t change_size(int row, int col, tetris_t tetris);

int check_tetriminos(char *filepath, int nb, tetris_t tetris);
tetris_t display_tetriminos(tetris_t tetris);
tetris_t copy_tetriminos(tetris_t tetris);
tetris_t malloc_tetriminos(tetris_t tetris, struct dirent *sd, DIR *dir);
tetris_t sort_tetriminos(tetris_t tetris);
int bubble_sorting(char *s1, char *s2);
int bubble_sorting_bis(char *s1, char *s2);
tetris_t copy_name(tetris_t tetris);

#endif
