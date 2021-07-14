/*
** EPITECH PROJECT, 2019
** calcul_pos
** File description:
** calcul the position
*/

#include <stdio.h>

void calcul_pos(float arr[3][3], float x, float y)
{
    float tmp[3] = {x, y, 1.00};
    float pos[3] = {0.00, 0.00, 1.00};
    float stock = 0;

    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 3; b++)
            stock = stock + arr[b][a] * tmp[b];
        pos[a] = stock;
        stock = 0;
    }
    printf(" (%.2f, %.2f)\n", pos[0], pos[1]);
}
