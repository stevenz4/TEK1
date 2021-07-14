/*
** EPITECH PROJECT, 2020
** main
** File description:
** yeah
*/

#include "my.h"

char *my_strcat(char *dest, char *src)
{
    int x;
    char *result;

    if (dest == NULL)
        return (src);
    if (src == NULL)
        return (dest);
    x = my_strlen(src);
    result = malloc(sizeof(char) * (my_strlen(dest) +
                                    my_strlen(src) + 1) + 100);
    for (int i = 0; src[i] != '\0'; i++)
        result[i] = src[i];
    for (int i = 0; dest[i] != '\0'; i++, x++)
        result[x] = dest[i];
    result[x + 1] = '\0';
    return (result);
}