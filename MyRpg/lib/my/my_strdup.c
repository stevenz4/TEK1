/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** yeah
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    int i = 0;
    char *ret = malloc(sizeof(char) * (my_strlen(src)) + 1);

    for (; src[i] != '\0'; i++) {
        ret[i] = src[i];
    }
    ret[i] = '\0';
    return (ret);
}
