/*
** EPITECH PROJECT, 2019
** key_matrix
** File description:
** create key_matrix
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/my.h"

void key_matrix(int **arr, char **av, int size, int size_m)
{
    int count = 0;

    for (int j = 0; j < size_m; j++) {
        for (int k = 0; k < size_m; k++) {
            if (count != size) {
                arr[j][k] = av[2][count];
                count++;
            }
            else
                arr[j][k] = 0;
        }
    }
    display_key_matrix(arr, size_m);
    count_matrix_rows(av[1], size_m, arr, size_m);
}

int count_matrix_size(char **av)
{
    int **arr;
    int size_m = 1;
    int size = 0;

    size = strlen(av[2]);
    while (size > (size_m * size_m))
        size_m ++;
    arr = malloc((sizeof(int *) * size_m) + 1);
    if (arr == NULL)
        return 84;
    for (int j = 0; j < size_m; j++) {
        arr[j] = malloc((sizeof(int) * size_m) + 1);
        if (arr[j] == NULL)
            return 84;
    }
    key_matrix(arr, av, size, size_m);
    return size_m;
}
