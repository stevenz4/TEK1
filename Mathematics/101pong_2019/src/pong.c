/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** math
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "libsrc.h"
#include <math.h>

int angle_calc(char **str, float angle)
{
    if (str[0][0] == '-') {
        printf("The incidence angle is:\n");
        printf("%.2f degrees ",sinhf((atof(str[2])) /
                                     angle) * (180/M_PI) * (-1));
    }
    else
        printf("The ball won't reach the paddle. ");
    return 0;
}

int countersize(char * str)
{
    int i = 0;

    for (; str[i] != '.'; i++)
        i = i;
    return i + 3;
}

void printf_result(double *tab, int t, int y)
{
    float angle;
    char **str;

    str = malloc(sizeof(char*) * 6);
    for (int i = 0; i < 6; i++)
        str[i] = malloc(sizeof(char) * 10);
    t -= 1;
    for (int i = 0; i < 6; i++) {
        sprintf(str[i], "%f", tab[i]);
        y = countersize(str[i]);
        str[i][y] = '\0';
    }
    angle = (sqrt(pow(atof(str[0]),2) + pow(atof(str[1]),2)
                  + pow(atof(str[2]),2)));
    printf("The velocity vector of the ball is:\n");
    printf("(%s, %s, %s)\n", str[0], str[1], str[2]);
    printf("At time t + %d, ball coordinates will be:\n", t);
    printf("(%s, %s, %s)\n", str[3], str[4], str[5]);
    angle_calc(str,angle);
    free(str);
}

int pong(char **str)
{
    int a = 1;
    double *tab;
    int t = my_getnbr(str[7]) + 1;
    int y = 0;

    tab = malloc(sizeof(double) * (7));
    for (int i = 0; i < 3; i++, a++)
        tab[i] = atof(str[a + 3]) - atof(str[a]);
    a = 1;
    for (int i = 3; i < 6; i++, a++)
        tab[i] = (tab[i - 3] * t) + atof(str[a]);
    printf_result(tab, t, y);
    free(tab);
    return 0;
}
