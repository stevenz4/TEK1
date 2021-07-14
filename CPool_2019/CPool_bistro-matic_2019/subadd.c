/*
** EPITECH PROJECT, 2019
** subadd
** File description:
** subadd
*/

#include "include/my.h"
#include <stdlib.h>

char *sub(char *av1, char *av2, char *resultchar, int i)
{
    int imax = my_strlen(av1);
    int jmax = my_strlen(av2);
    int count = 0;
    int argv1 = 0;
    int argv2 = 0;
    int retain = 0;
    int resultint = 0;

    for (int j = 0; i < imax || j < jmax; j++, i++, count++) {
        argv1 = CTI(av1[i]);
        argv2 = CTI(av2[j]);
        if (i >= imax)
            argv1 = 0;
        if (j >= jmax)
            argv2 = 0;
        if (retain < 0)
            argv2++;
        resultint = argv1 - argv2;
        retain = argv1 - argv2;
        if (retain < 0) {
            argv1 = argv1 + 10;
            resultint = argv1 - argv2;
        }
        resultchar[count] = ITC(resultint);
        if (retain == 0 && (i >= imax || j >= jmax))
            resultchar[count] = '\0';
    }
    my_revstr(resultchar);
    return resultchar;
}

char *infinsub(char *base, char *av)
{
    int i = 0;
    char *resultchar = malloc(sizeof(char) *
                              (my_strlen(base) + my_strlen(av) + 2));

    if (base[0] != '-' && av[0] != '-') {
        my_revstr(base);
        my_revstr(av);
        return sub(base,av,resultchar,i);
    }
}
