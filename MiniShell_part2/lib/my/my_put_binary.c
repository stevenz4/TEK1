/*
** EPITECH PROJECT, 2019
** my_put_binary
** File description:
** convert b10 into b2
*/

#include <stdlib.h>
#include "../../include/my.h"

int my_put_binary(int nb)
{
    int stock;
    char *result = malloc(sizeof(char) * 50);

    for (int i = 0; nb != 0; i++) {
        stock = nb % 2;
        result[i] = stock + 48;
        nb = nb / 2;
    }
    my_revstr(result);
    my_putstr(result);
    free(result);
}
