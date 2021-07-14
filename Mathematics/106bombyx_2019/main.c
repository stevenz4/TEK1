/*
** EPITECH PROJECT, 2020
** bombyx
** File description:
** usefull_functions
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int bombyx(double n, double k)
{
    int i = 1;

    while (i != 101) {
        printf("%d %.2f\n", i, n);
        n = k * n * ((1000 - n) / 1000);
        i++;
    }
    return (0);
}

double bombyx_bis_init(double n, double k, double i_start)
{
    int i = 1;

    while (i < i_start - 1) {
        n = k * n * ((1000 - n) / 1000);
        i++;
    }
    return n;
}

double bombyx_bis(double n, double k)
{
    n = k * n * ((1000 - n) / 1000);
    printf("%.2f %.2f\n", k, n);
    return n;
}

int main(int argc, char **argv)
{
    int j = 0;
    double n = 0;

    if (argc != 3 && argc != 4)
        return FAILURE;
    if (argc == 4 && atoi(argv[2]) > atoi(argv[3]))
        return FAILURE;
    if (argc == 3 && (atof(argv[2]) < 1 || atof(argv[2]) > 4))
        return FAILURE;
    if (argc == 3)
        bombyx(atof(argv[1]), atof(argv[2]));
    if (argc == 4) {
        for (double k = 1; k <= 4; k = k + 0.01) {
            n = bombyx_bis_init(atof(argv[1]), k, atof(argv[2]));
            for (j = atoi(argv[2]); j <= atoi(argv[3]); j++) {
                n = bombyx_bis(n, k);
            }
        }
    }
}
