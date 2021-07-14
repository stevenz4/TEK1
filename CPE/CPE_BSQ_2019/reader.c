/*
** EPITECH PROJECT, 2019
** reader
** File description:
** read the file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

int check_map(char *map)
{
    if (map[0] == '\0')
        return FAILURE;
    return 0;
}

int read_file(char *filepath, int size)
{
    int fd = open(filepath, O_RDONLY);
    char buffer;
    char *map;

    map = malloc(sizeof(char) * size + 1);
    if (check_map(filepath) == FAILURE)
        return FAILURE;
    if (fd == -1)
        return FAILURE;
    for (int i = 0; read(fd, &buffer, 1) != 0; i++)
        map[i] = buffer;
    close(fd);
    change_map(map);
    return 0;
}

int change_map(char *map)
{
    int rows = count_rows(map);
    int cols = count_cols(map);
    int count = count_to_first_line(map);
    int **tab;

    tab = malloc(sizeof(int **) * rows + 1);
    for (int i = 0; i < rows; i++)
        tab[i] = malloc(sizeof(int *) * cols + 1);
    for (int j = 0; j < rows; j++) {
        for (int k = 0; k < cols; k++, count++) {
            if (map[count] == '.')
                tab[j][k] = 1;
            if (map[count] == 'o')
                tab[j][k] = 0;
        }
        count++;
    }
    find_square(tab, rows, cols, map);
    return 0;
}

int calcul_square_size(int **tab, int j, int k)
{
    int top_left = tab[j -1][k - 1];
    int top = tab[j - 1][k];
    int left = tab[j][k - 1];
    int small = top_left;

    if (top_left < small)
        small = top_left;
    if (top < small)
        small = top;
    if (left < small)
        small = left;
    tab[j][k] += small;
    return tab[j][k];
}

int find_square(int **tab, int rows, int cols, char *map)
{
    for (int j = 1; j < rows; j++) {
        for (int k = 1; k < cols; k++) {
            if (tab[j][k] != 0)
                tab[j][k] = calcul_square_size(tab, j, k);
        }
    }
    transform_map(tab, map, rows, cols);
    for (int s = 0; s <= rows; s++)
        free(tab[s]);
    free (tab);
    return 0;
}
