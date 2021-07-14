/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** display
*/

#include <stdio.h>
#include "include/my.h"

void display_key_matrix(int **key, int size_square)
{
    printf("Key matrix:\n");
    for (int j = 0; j < size_square; j++) {
        for (int k = 0; k < size_square; k++) {
            if (k == size_square - 1)
                printf("%d",key[j][k]);
            if (key[j][k] < 10 && k != size_square - 1)
                printf("%d       ",key[j][k]);
            if (key[j][k] < 100 && key[j][k] >= 10 && k != size_square - 1)
                printf("%d      ",key[j][k]);
            if (key[j][k] >= 100 && k != size_square - 1)
                printf("%d     ",key[j][k]);
        }
        printf("\n");
    }
}

void display_encrypted_matrix(int **key, int rows, int size_m)
{
    printf("\nEncrypted message:\n");
    for (int j = 0; j < rows; j++) {
        for (int k = 0; k < size_m; k++)
            printf("%d ",key[j][k]);
        printf("\n");
    }
}
