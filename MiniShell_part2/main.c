/*
** EPITECH PROJECT, 2020
** main
** File description:
** main function
*/

#include "my.h"

char **print_path(char **env)
{
    int line = 0;
    int check = 0;
    char *path = malloc(sizeof(char) * 200);

    getcwd(path, 200);
    for (int j = 0; env[j]; j++)
        if (env[j][0] == 'P' && env[j][1] == 'W' &&
        env[j][2] == 'D' && env[j][3] == '=')
            line = j, check = 1;
    if (env[0] != NULL && check == 1) {
        env[line] = malloc(sizeof(char) * 252);
        env[line][0] = 'P';
        env[line][1] = 'W';
        env[line][2] = 'D';
        env[line][3] = '=';
        env[line][4] = '\0';
        env[line] = my_strcat(env[line], path);
    }
    my_printf("[%s]$> ", path);
    return env;
}

char **copy_environ(char **env)
{
    int j = 0;

    for (; environ[j]; j++) {
        env[j] = malloc(sizeof(char) * my_strlen(environ[j]) + 1);
        if (env[j] == NULL) {
            my_putstr("malloc failed");
            return NULL;
        }
        env[j] = my_strcpy(env[j], environ[j]);
    }
    return env;
}

int main(void)
{
    char **env = malloc(sizeof(char *) * 252);

    env = copy_environ(env);
    return loop_command(env);
}
