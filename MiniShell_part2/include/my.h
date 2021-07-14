/*
** EPITECH PROJECT, 2019
** my
** File description:
** my
*/


#ifndef _MY_H_

#define _MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <signal.h>
#include <errno.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>

#define FAILURE (84)
#define SUCCESS (0)

extern char **environ;

typedef struct command {
    char **cmd;
    char **cmd2;
    char ***option;
    int pipe_nb;
    int check;
    int status;
    int a;
    int b;
    int c;
    int ok;
    int ol;
} exe_st;

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

int create_child(char **env);
char **copy_environ(char **env);
int loop_command(char **env);
int loop_checking_cmd(char *command, char **env);
char **print_path(char **env);

int check_command(char *str);
int check_nb_command(char *command, char **env);
int check_nb_command_bis(exe_st e, char *cmd2, char **env);

int check_cd(char *str);
int not_found(char *cmd, char *cmd_arg, char *option, char **env);

int check_env(char **env);
char **check_setenv_cmd(char *str, char **env);
char **write_env(int count, char *str, int j, char **env);
char **change_exist_name(char **env, char *name, char *value, int line);
int check_env_name(char **env, char *name);

char **unsetenv_cmd(char *str, char **env);
char **delete_env(char **env, int line, int max_line);
int check_unsetenv_name(char *name);
char **unsetenv_cmd_bis(char **env, int line, int j);

char *line_formating(char *str);
int parse_arg(char *cmd2, exe_st e, char **env);
exe_st parse_first_arg(char *cmd2, exe_st e);
int exec_cmd(exe_st e, char **env);

int cd_home(int where);

void one_exec(exe_st e, char **env);

int two_exec(exe_st e, char **env);
int two_exec_bis(exe_st e, int pipe_fd[2], char **env);

int three_exec(exe_st e, char **env);
int three_exec_bis2(exe_st e, int pipe_fd[4], char **env);
int three_exec_bis3(exe_st e, int pipe_fd[4], char **env);
int three_exec_bis4(exe_st e, int pipe_fd[4]);

int check_errno(char *str);
int check_name(char *name);

#endif