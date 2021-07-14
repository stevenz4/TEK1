/*
** EPITECH PROJECT, 2020
** my_atoi
** File description:
** my_my_atoi
*/

#include "my.h"

int my_atoi(char *str)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i++)
        nb = nb * 10 + str[i] - '0';
    return (nb);
}