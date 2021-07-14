/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** my_revstr
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    char r;
    int count;
    int size;

    count = 0;
    size = my_strlen(str);
    if (size > 0) {
        while (count < size / 2)
        {
            r = str[count];
            str[count] = str[size - 1 - count];
            str[size - count - 1] = r;
            count++;
        }
    }
    return str;
}
