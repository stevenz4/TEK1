/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** yeah
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; src[i] != '\0'; i++);
    for (;i != -1; i--) {
        dest[i] = src[i];
    }
    return (dest);
}
