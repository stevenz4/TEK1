/*
** EPITECH PROJECT, 2020
** my_strgetline
** File description:
** my_strgetline
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strgl(char const *src)
{
    char *str = malloc(sizeof(char) * my_strlen(src) + 1);

    for (int j = 0; src[j] != '\n'; j++)
        str[j] = src[j];
    return str;
}
