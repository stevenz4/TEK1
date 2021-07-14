/*
** EPITECH PROJECT, 2019
** encrypted msg calcul
** File description:
** create the encryted msg
*/

#include <stdio.h>
#include "include/my.h"

int encrypted(int **msg, int **key, size mm, int key_size)
{
    int array[mm.rows][mm.size_m];
    int result = 0;
    int cols = 0;

    printf("\nEncrypted message:\n");
    for (int i = 0; i < key_size; i++) {
        for (int j = 0; j < mm.rows; j++) {
            for (int k = 0; k < mm.size_m; k++)
                result = result + msg[j][k] * key[k][i];
            array[j][i] = result;
            result = 0;
        }
    }
    for (int j = 0; j < mm.rows; j++) {
        for (int k = 0; k < mm.size_m; k++) {
            if (j == mm.rows - 1 && k == mm.size_m - 1)
                printf ("%d", array[j][k]);
            else
                printf ("%d ", array[j][k]);
        }
    }
    printf("\n");
}
