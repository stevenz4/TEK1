/*
** EPITECH PROJECT, 2019
** my_put_hexbis
** File description:
** convert b10 into hexabis
*/

#include <stdlib.h>
#include "../include/my.h"

int my_put_hexbis(int nb)
{
    int stock;
    char *result = malloc(sizeof(char) * 50);

    for (int i = 0; nb != 0; i++) {
        stock = nb % 16;
        if (stock >= 10)
            result[i] = stock + 87;
        else
            result[i] = stock + 48;
        nb = nb / 16;
    }
    my_revstr(result);
    my_putstr(result);
    free(result);
}
