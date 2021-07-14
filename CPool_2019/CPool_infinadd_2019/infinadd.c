/*
** EPITECH PROJECT, 2019
** infinadd
** File description:
** infinadd
*/

#include "include/my.h"
#include <stdlib.h>
#include <stdio.h>
#define ITC(x)  (x + '0')
#define CTI(y)  (y - '0')

int *add(char *av1, char *av2, char *resultchar)
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

int *sub(char *av1, char *av2, char *resultchar)
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

int *subadd(char *av1, char *av2, char *resultchar)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int count = 0;
    int argv1;
    int argv2;
    int argv3;
    int imax = my_strlen(av1);
    int jminus = my_strlen(av2) - 1;
    int resultint = 0;

    while (i < imax || j < jminus) {
        //k = j + 1;
        argv1 = CTI(av1[i]);
        argv2 = CTI(av2[j]);
        argv3 = CTI(av2[j + 1]);
        printf("[%d]",argv3);
        if (i >= imax)
            argv1 = 0;
        if (j >= jminus)
            argv2 = 0;
        if (argv1 < argv2) {
            argv1 = argv1 + 10;
            argv3 = argv3 + 1;
            argv2 = argv3;
        }
        resultint = argv1 - argv2;
        resultchar[count] = ITC(resultint);
        i++;
        j++;
        count++;
        //if (retain > 9 && i == imax)
        //resultchar[count] = '1';
    }
    my_revstr(resultchar);
    my_putstr(resultchar);
    return 0;
}

int infinadd(int ac, char **av)
{
    char *resultchar = malloc(sizeof(char) * (my_strlen(av[1]) + my_strlen(av[2]) + 2));

    if (av[1][0] != '-' && av[2][0] != '-') {
        my_revstr(av[1]);
        my_revstr(av[2]);
        add(av[1],av[2],resultchar);
    }
    else if (av[1][0] == '-' && av[2][0] == '-') {
        my_revstr(av[1]);
        my_revstr(av[2]);
        sub(av[1],av[2],resultchar);
    }
    else if (av[1][0] != '-' && av[2][0] == '-') {
        my_revstr(av[1]);
        my_revstr(av[2]);
        subadd(av[1],av[2],resultchar);
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (argc != 3)
        return 84;
    infinadd(argc,argv);
    my_putchar('\n');
    return 0;
}
