/*
** EPITECH PROJECT, 2020
** error.c
** File description:
** error.c
*/

#include "my.h"

int check_errno(char *str)
{
    if (errno == EACCES && str[0] != '\0')
        my_printf("%s: Permission denied.\n", str);
    if (errno == ENOEXEC)
        my_printf("%s: Exec format error. Wrong Architecture.\n", str);
    else if (errno != EACCES && errno != ENOEXEC)
        my_printf("%s: Command not found.\n", str);
    return 0;
}