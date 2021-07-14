/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** yeah
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int temp;
    int max;

    for (; str[i] != '\0'; i++);
    max = i;
    for (; i != max/2; i--) {
        temp = str[i -1];
        str[i -1] = str[max - i];
        str[max - i] = temp;
    }
    return (str);
}
