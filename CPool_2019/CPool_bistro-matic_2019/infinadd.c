/*
** EPITECH PROJECT, 2019
** infinadd
** File description:
** infinadd
*/

#include "include/my.h"
#include <stdlib.h>

char *add(char *av1, char *av2, char *resultchar, int i)
{
    int imax = my_strlen(av1);
    int jmax = my_strlen(av2);
    int count = 0;
    int argv1 = 0;
    int argv2 = 0;
    int retain = 0;
    int resultint = 0;

    for (int j = 0; i < imax || j < jmax; j++, count++) {
        argv1 = CTI(av1[i]);
        argv2 = CTI(av2[j]);
        if (i >= imax)
            argv1 = 0;
        if (j >= jmax)
            argv2 = 0;
        if (retain > 9)
            argv1++;
        resultint = argv1 + argv2;
        retain = argv1 + argv2;
        resultint = resultint % 10;
        resultchar[count] = ITC(resultint);
        i++;
        if (retain > 9 && i == imax)
            resultchar[count + 1] = '1';
    }
    my_revstr(resultchar);
    return resultchar;
}

char *infinadd(char *base, char *av)
{
    int i = 0;
    char *resultchar = malloc(sizeof(char) *
                              (my_strlen(base) + my_strlen(av) + 2));

    if (base[0] != '-' && av[0] != '-') {
        my_revstr(base);
        my_revstr(av);
        return add(base,av,resultchar,i);
    }
}
