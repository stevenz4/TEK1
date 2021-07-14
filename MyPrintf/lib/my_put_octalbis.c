/*
** EPITECH PROJECT, 2019
** my_put_octalbis
** File description:
** convert b10 into b8 with 3 digits
*/

#include <stdlib.h>
#include "../include/my.h"

int my_put_octalbis(int nb)
{
    int stock;
    char *result = malloc(sizeof(char) * 4);

    result[0] = '0';
    result[1] = '0';
    result[2] = '0';
    result[3] = '\0';
    for (int i = 0; nb != 0; i++) {
        stock = nb % 8;
        result[i] = stock + 48;
        nb = nb / 8;
    }
    my_revstr(result);
    my_putstr(result);
}
