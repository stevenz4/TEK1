/*
** EPITECH PROJECT, 2020
** environ_cmdbis
** File description:
** env command
*/

#include "my.h"

int check_name(char *name)
{
    if (name[0] == '=') {
        my_putstr("setenv: Variable name must begin with a letter.\n");
        return 84;
    }
    if (name[0] < 'A' || (name[0] > 'Z' && name[0] < 'a') || name[0] > 'z') {
        my_putstr("setenv: Variable name must begin with a letter.\n");
        return 84;
    }
    for (int j = 0; name[j] != '\0'; j++) {
        if (name[j] == '=' || name[j] == '£' || name[j] == '$') {
            my_putstr("setenv: Variable name must ");
            my_putstr("contain alphanumeric characters.\n");
            return 84;
        }
    }
    return 0;
}