/*
** EPITECH PROJECT, 2020
** unsetenv
** File description:
** unsetenv function
*/

#include "my.h"

char **unsetenv_cmd(char *str, char **env)
{
    int line = FAILURE;
    int j = 9;
    char *name = malloc(sizeof(char) * 256);
    char *name_bis = malloc(sizeof(char) * 256);

    name[0] = '\0';
    for (int k = 0; str[j] != '\n'; name[k] = str[j], j++, k++);
    if (check_unsetenv_name(name) == 1)
        return env;
    for (j = 0; env[j]; name_bis = malloc(sizeof(char) * 256), j++) {
        for (int k = 0; env[j][k] != '='; k++)
            name_bis[k] = env[j][k];
        if (my_strcmp(name, name_bis) == 0)
            line = j;
        free(name_bis);
    }
    return unsetenv_cmd_bis(env, line, j);
}

char **unsetenv_cmd_bis(char **env, int line, int j)
{
    if (line != FAILURE) {
        env = delete_env(env, line, j - 1);
        return env;
    }
    return env;
}

int check_unsetenv_name(char *name)
{
    if (name[0] == '\0') {
        my_putstr("unsetenv: Too few arguments.\n");
        return 1;
    }
    return 0;
}

char **delete_env(char **env, int line, int max_line)
{
    if (line == max_line) {
        env[line] = '\0';
        return env;
    }
    for (int j = line; j < max_line; j++)
        env[line] = my_strcpy(env[line], env[line + 1]);
    env[max_line] = '\0';
    return env;
}
