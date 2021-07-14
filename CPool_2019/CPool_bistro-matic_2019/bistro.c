/*
** EPITECH PROJECT, 2019
** bistrotest
** File description:
** base operators size_read
*/

#include "include/my.h"
#include <stdlib.h>

char *addbis(char **nbr, int n, char *result)
{
    infinadd(nbr[0], nbr[n]);
    result = malloc(sizeof(char) *
                    my_strlen(infinadd(nbr[0], nbr[n])) + 2);
    my_strcpy(result, infinadd(nbr[0], nbr[n]));
    nbr[0] = malloc(sizeof(char) *
                    my_strlen(infinadd(nbr[0], nbr[n])) + 2);

    for (int i = 0; result[i] != '\0'; i++)
        nbr[0][i] = result[i];
    return nbr[0];
}

char *subbis(char **nbr, int n, char *result)
{
    infinsub(nbr[0], nbr[n]);
    result = malloc(sizeof(char) *
                    my_strlen(infinsub(nbr[0], nbr[n])) + 2);
    my_strcpy(result, infinsub(nbr[0], nbr[n]));
    nbr[0] = malloc(sizeof(char) *
                    my_strlen(infinsub(nbr[0], nbr[n])) + 2);

    for (int i = 0; result[i] != '\0'; i++)
        nbr[0][i] = result[i];
    return nbr[0];
}

int bistro(char *av1, char *av2, char *expr, int size)
{
    char *sign = operator(expr);
    char **nbr = number(expr);
    char *result;
    int n = 1;

    for (int s = 0; sign[s] != '\0'; s++, n++) {
        if (sign[s] == av2[2])
            addbis(nbr, n, result);
        if (sign[s] == av2[3])
            subbis(nbr, n, result);
    }
    my_putstr(nbr[0]);
    return (EXIT_SUCCESS);
}
