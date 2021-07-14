/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcmp(char *str1, char *str2)
{
    if (my_strlen(str1) != my_strlen(str2))
        return (1);
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i])
            return (1);
    }
    return (0);
}