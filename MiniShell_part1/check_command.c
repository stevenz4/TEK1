/*
** EPITECH PROJECT, 2020
** check_command
** File description:
** check input
*/

#include "my.h"

int check_command(char *str)
{
    char *command = malloc(sizeof(char) * 256);

    if (command == NULL) {
        my_putstr("malloc failed");
        return FAILURE;
    }
    for (int j = 0; str[j] != '\n' && str[j] != ' '; j++)
        command[j] = str[j];
    if (my_strcmp("env", command) == 0)
        return 1;
    if (my_strcmp("setenv", command) == 0)
        return 2;
    if (my_strcmp("cd", command) == 0)
        return 3;
    if (my_strcmp("exit", command) == 0)
        return 4;
    if (my_strcmp("unsetenv", command) == 0)
        return 5;
    return 84;
}
