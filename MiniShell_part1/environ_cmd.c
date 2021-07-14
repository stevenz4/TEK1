/*
** EPITECH PROJECT, 2020
** environ_cmd
** File description:
** env command
*/

#include "my.h"

int check_env(char **env)
{
    for (int j = 0; env[j]; j++)
        my_printf("%s\n", env[j]);
    return 0;
}

char **check_setenv_cmd(char *str, char **env)
{
    int j = 0;
    int count = 0;

    for (; str[j] != ' '; j++) {
        if ((str[j] == '\n' && j == 6) || (str[6] == ' ' && str[7] == '\n')) {
            for (int j = 0; env[j]; j++)
                my_printf("%s\n", env[j]);
            return env;
        }
    }
    j++;
    while (env[count])
        count++;
    env = write_env(count, str, j, env);
    return env;
}

char **write_env(int count, char *str, int j, char **env)
{
    int line = 0;
    int s = 0;
    char *name = malloc(sizeof(char) * 255 + 1);
    char *value = malloc(sizeof(char) * 255 + 1);

    for (int k = 0; str[j] != ' ' && str[j] != '\n'; j++, k++)
        name[k] = str[j];
    j++;
    for (int k = 0; str[j] != '\n'; value[k] = str[j], j++, k++);
    if ((line = check_env_name(env, name)) != 84)
        return change_exist_name(env, name, value, line);
    env[count] = malloc(sizeof(char) * 255);
    for (; name[s] != '\0'; env[count][s] = name[s], s++);
    env[count][s] = '=';
    s++;
    for (int k = 0; value[k] != '\0'; env[count][s] = value[k], k++, s++);
    env[count + 1] = '\0';
    return env;
}

char **change_exist_name(char **env, char *name, char *value, int line)
{
    int j = 0;

    free(env[line]);
    env[line] = malloc(sizeof(char) * 256);
    for (;name[j] != '\0'; j++)
        env[line][j] = name[j];
    env[line][j] = '=';
    j++;
    for (int k = 0; value[k] != '\0'; k++, j++)
        env[line][j] = value[k];
    return env;
}

int check_env_name(char **env, char *name)
{
    char *name_bis = malloc(sizeof(char) * 256);

    for (int j = 0; env[j]; j++) {
        for (int k = 0; env[j][k] != '='; k++) {
            name_bis[k] = env[j][k];
            if (my_strcmp(name, name_bis) == 0)
                return j;
        }
        free(name_bis);
        name_bis = malloc(sizeof(char) * 256);
    }
    return FAILURE;
}
