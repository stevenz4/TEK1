/*
** EPITECH PROJECT, 2019
** my
** File description:
** my
*/

#ifndef _MY_H_

#define _MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <grp.h>
#include <signal.h>

#define FAILURE (84)
#define SUCCESS (0)

int info_game[5];

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
char *my_strgl(char const *src);

int player_2(int pid, char *map_p2);
int player_1(char *map_p1);
char *read_folder(char *filepath);

void make_all_map(char **map);
void put_boat(char **map, char *str, int nbr_boat);
void make_second_line(char **map);
void make_map(char **map, char *str);
char **create_map(char *str);

char **modif_map_bis(char **map_bis, char *buffer, int hit);
void modif_map(char **map, char **map_bis, char *buffer, int hit);
int check_win(char **map);
int check_getline(char *str);

void handle_decryption(int mysignal);
void make_sigaction_decrypt(void);
void handle_p1(int mysignal);
void p1_sigaction(void);
int end_condition_p1(char **map, char **map_bis);

void handle_p2(int mysignal);
void handle_hit_p2(int mysignal);
void make_sigaction_p2_hit(void);
int loose_p2(void);

int player_1_signal(char **map, char **map_bis, char *pos, size_t buffsize);
int win(void);
int loose(void);
char **encrypt_hit(char *attack_buf, char **map_bis);
int check_hit_signal(char *pos, char **map, int hit);

int player_2_signal(char **map, char **map_bis, char *pos, size_t buffsize);
int end_condition_p2(char **map, char **map_bis);
void p2_sigaction(void);
int receive_and_send_hit(char **map, char *pos, int hit);
void encrypt_hit_p2(char *attack_buf);

int print_map_p1(char **map, char **map_bis);
int print_map_p2(char **map, char **map_bis);
int check_hit(char **map, char *str);

void handle_p2pid(int mysignal, siginfo_t *info);
void sigaction_get_pid(void);
int send_usr1(void);
int send_usr2(void);
int check_pos(char *b);

int encrypt_signal_to_p2(char *pos);
int encrypt_signal_to_p1(char *pos);
int send_hit_signal(int i);

#endif
