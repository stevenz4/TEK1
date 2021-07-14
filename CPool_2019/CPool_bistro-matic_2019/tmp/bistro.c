/*
** EPITECH PROJECT, 2019
** bistrotest
** File description:
** base operators size_read
*/

#include "include/my.h"

int *bistro(char *av1, char *av2, char *expr, int size)
{
    char *sign = operator(expr);
    char **nbr = number(expr);

    for (int s = 0; sign[s] != '\0'; s++)
        if (sign[s] == '+')
            infinadd(nbr);
    return 0;
}
