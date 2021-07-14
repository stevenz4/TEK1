/*
** EPITECH PROJECT, 2020
** main
** File description:
** main function
*/

#include "include/my.h"

int main(int argc, char **argv)
{
    double *a = malloc(sizeof(double) * 5);
    double *result = malloc(sizeof(double) * 2);
    int i = 1;

    if (argc != 8)
        return FAILURE;
    while (i != 8) {
        if (isnum(argv[i]) != 1)
            return FAILURE;
        i++;
    }
    result[0] = 0;
    result[1] = 1;
    a[4] = atof(argv[6]);
    a[3] = atof(argv[5]);
    a[2] = atof(argv[4]);
    a[1] = atof(argv[3]);
    a[0] = atof(argv[2]);
    if (argv[1][0] == '1')
        interval_bisection(a, result, atoi(argv[7]));
    else if (argv[1][0] == '2')
        interval_newton(a, 0.5, atoi(argv[7]));
    else if (argv[1][0] == '3')
        interval_secant(a, result, atoi(argv[7]));
    else
        return FAILURE;
}
