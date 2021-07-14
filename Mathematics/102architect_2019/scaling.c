/*
** EPITECH PROJECT, 2019
** scaling
** File description:
** scaling by factors
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>

void scaling(float arr[3][3], float x, float y)
{
    float tmp[3][3];
    float base[3][3] = {{x, 0.00, 0.00}, {0.00, y, 0.00}, {0.00, 0.00, 1}};
    float stock = 0.00;

    for (int a = 0; a < 3; a ++) {
        for (int b = 0; b < 3; b++)
            stock = stock + arr[b][a] * base[0][b];
        tmp[0][a] = stock;
        stock = 0;
    }
    for (int a = 0; a < 3; a ++) {
        for (int b = 0; b < 3; b++)
            stock = stock + arr[b][a] * base[1][b];
        tmp[1][a] = stock;
        stock = 0;
    }
    for (int a = 0; a < 3; a ++) {
        for (int b = 0; b < 3; b++)
            stock = stock + arr[b][a] * base[2][b];
        tmp[2][a] = stock;
        stock = 0;
    }
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++)
            arr[a][b] = tmp[a][b];
    }
}
