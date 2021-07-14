/*
** EPITECH PROJECT, 2019
** matrix_message
** File description:
** create a matrix according to a row size
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/my.h"

int count_matrix_rows(char *str, int size_m, int **key, int key_size)
{
    int **arr;
    size mm;
    int size = 0;

    mm.rows = 0;
    mm.size_m = size_m;
    size = strlen(str);
    for (mm.rows = 0; size > 0; mm.rows++)
        size -= mm.size_m;
    arr = malloc((sizeof(int *) * mm.rows) + 1);
    if (arr == NULL)
        return 84;
    for (int j = 0; j < mm.rows; j++) {
        arr[j] = malloc((sizeof(int) * mm.size_m) + 1);
        if (arr[j] == NULL)
            return 84;
    }
    message_matrix(arr, str, mm, key);
    encrypted(arr, key, mm, key_size);
}

void message_matrix(int **arr, char *str, size mm, int **key)
{
    int count = 0;

    for (int j = 0; j < mm.rows; j++) {
        for (int k = 0; k < mm.size_m; k++) {
            if (count != strlen(str)) {
                arr[j][k] = str[count];
                count++;
            }
            else
                arr[j][k] = 0;
        }
    }
}
