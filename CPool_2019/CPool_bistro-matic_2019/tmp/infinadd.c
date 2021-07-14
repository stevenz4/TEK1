/*
** EPITECH PROJECT, 2019
** infinadd
** File description:
** infinadd
*/

#include "include/my.h"
#include <stdlib.h>
#include <stdio.h>

int add(char *av1, char *av2, char *resultchar)
{
    int i = 0;
    int j = 0;
    int imax = my_strlen(av1);
    int jmax = my_strlen(av2);
    int count = 0;
    int argv1 = 0;
    int argv2 = 0;
    int retain = 0;
    int resultint = 0;

    while (i < imax || j < jmax) {
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
        j++;
        count++;
        if (retain > 9 && i == imax)
            resultchar[count] = '1';
    }
    my_revstr(resultchar);
    my_putstr(resultchar);
    return 0;
}

int sub(char *av1, char *av2, char *resultchar)
{
    int i = 0;
    int j = 0;
    int count = 0;
    int argv1 = 0;
    int argv2 = 0;
    int retain = 0;
    int resultint = 0;
    int iminus = my_strlen(av1) - 1;
    int jminus = my_strlen(av2) - 1;

    while (i < iminus || j < jminus) {
        argv1 = CTI(av1[i]);
        argv2 = CTI(av2[j]);
        if (i >= iminus)
            argv1 = 0;
        if (j >= jminus)
            argv2 = 0;
        if (retain > 9)
            argv1++;
        resultint = argv1 + argv2;
        retain = argv1 + argv2;
        resultint = resultint % 10;
        resultchar[count] = ITC(resultint);
        i++;
        j++;
        count++;
        if (retain > 9 && i == iminus)
            resultchar[count++] = '1';
    }
    resultchar[count] = '\0';
    my_putchar('-');
    my_revstr(resultchar);
    my_putstr(resultchar);
    return 0;
}

int infinadd(char **av)
{
    char *resultchar = malloc(sizeof(char) * (my_strlen(av[0]) + my_strlen(av[1])) + 2);

    if (av[0][0] != '-' && av[1][0] != '-') {
        my_revstr(av[0]);  
        my_revstr(av[1]);
        add(av[0],av[1],resultchar);
        }
    else if (av[0][0] == '-' && av[1][0] == '-') {
        my_revstr(av[0]);
        my_revstr(av[1]);
        sub(av[0],av[1],resultchar);
        }
    return 0;
}
