/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** yeah
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}
