/*
** EPITECH PROJECT, 2019
** display_square
** File description:
** display the biggest square
*/

#include <stdlib.h>
#include "my.h"

int transform_map(int **tab, char *arr, int rows, int cols)
{
    char **map;
    int l = 0;

    map = malloc(sizeof(char *) * rows + 2);
    if (map == NULL)
        return 84;
    for (int i = 0; i <= rows; i++) {
        map[i] = malloc(sizeof(char) * cols + 2);
        if (map[i] == NULL)
            return 84;
    }
    while (arr[l] != '\n')
        l++;
    l++;
    for (int j = 0; j <= rows; j++) {
        for (int k = 0; k <= cols; k++, l++)
            map[j][k] = arr[l];
    }
    find_pos(tab, map, rows, cols);
    return 0;
}

int find_pos(int **tab, char **map, int rows, int cols)
{
    pos coord;

    coord.x = 0;
    coord.y = 0;
    coord.larger = 0;
    for (int j = 0; j < rows; j++) {
        for (int k = 0; k < cols; k++) {
            if (tab[j][k] > coord.larger) {
                coord.larger = tab[j][k];
                coord.y = j;
                coord.x = k;
            }
        }
    }
    draw_square(map, coord, rows);
    return 0;
}

int draw_square(char **map, pos coord, int rows)
{
    int xtmp = coord.x;
    int ytmp = coord.y;

    for (int j = coord.larger; j > 0; j--) {
        for (int k = coord.larger; k > 0; k--) {
            map[ytmp][xtmp] = 'x';
            xtmp--;
        }
        ytmp--;
        xtmp = coord.x;
    }
    for (int s = 0; s < rows; s++)
        my_putstr(map[s]);
    for (int d = 0; d <= rows; d++)
        free (map[d]);
    free (map);
    return 0;
}
