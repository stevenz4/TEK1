/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** math
*/

#include <stdio.h>
#include <stdlib.h>
#include <libsrc.h>

int rappel(void)
{
    printf("USAGE\n    ");
    printf("./101pong x0 y0 z0 x1 y1 z1 n\n\n");
    printf("DESCRIPTION\n    ");
    printf("x0  ball abscissa at time t - 1\n    ");
    printf("y0  ball ordinate at time t - 1\n    ");
    printf("z0  ball altitude at time t - 1\n    ");
    printf("x1  ball abscissa at time t\n    ");
    printf("y1  ball ordinate at time t\n    ");
    printf("z1  ball altitude at time t\n    ");
    printf("n   time shift (greater than or equal to zero, integer)\n");
    return 0;
}

int value_arg(char av)
{
    if (av < '0' || av > '9')
        return 84;
    return 0;
}

int main(int ac, char **av)
{
    for (int i = 1; i <= 7 && ac == 8; i++)
        if (value_arg(av[i][0]) == 84)
        return 84;
    if (ac > 8)
        return 84;
    if (ac == 2 && (av[1][0] == '-' && av[1][1] == 'h'))
        rappel();
    if (ac < 8)
        return 84;
    if (atoi(av[7]) < 0)
        return 84;
    if (atof(av[7]) != atoi(av[7]))
        return 84;
    else if (ac == 8)
        pong(av);
    return 0;
}
