/*
** EPITECH PROJECT, 2019
** reader
** File description:
** read the map
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ncurses.h>
#include <stdlib.h>
#include "include/my.h"

int read_file(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char buffer;
    struct stat fileStat;
    int size;
    char *map;

    if (stat(filepath, &fileStat) < 0)
        return FAILURE;
    size = fileStat.st_size;
    map = malloc(sizeof(char) * size + 1);
    if (fd == -1)
        return FAILURE;
    for (int i = 0; read(fd, &buffer, 1) != 0; i++)
        map[i] = buffer;
    if (map_validation(map) == FAILURE)
        return FAILURE;
    mallocation(map, map);
    close(fd);
    return 0;
}

int mallocation(char *str, char *filepath)
{
    int rows = 0;
    int compt = 0;
    int count = 0;
    char **map;

    for (int k = 0; str[k] != '\0'; k++)
        if (str[k] == '\n')
            rows++;
    map = malloc(sizeof(char *) * rows + 2);
    if (map == NULL)
        return FAILURE;
    for (int j = 0; str[j] != '\0'; j++, count++) {
        if (str[j] == '\n') {
            map[compt] = malloc(sizeof(char) * count + 2);
            compt++;
            count = 0;
        }
    }
    copy_map(map, rows, filepath);
    return 0;
}

int copy_map(char **map, int rows, char *str)
{
    int j = 0;
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        map[j][k] = str[i];
        k++;
        if (str[i] == '\n') {
            j++;
            k = 0;
        }
    }
    print_on_mid(map, rows, str);
    return 0;
}

int map_validation(char *str)
{
    int count = 0;
    int compt = 0;

    for (int j = 0; str[j] != '\0'; j++) {
        if (str[j] != 'X' && str[j] != 'O' &&
            str[j] != '\n' && str[j] != ' ' && str[j] != '#' && str[j] != 'P')
            return FAILURE;
        if (str[j] == 'O')
            count += 1;
        if (str[j] == 'X')
            compt += 1;
    }
    if (count != compt)
        return FAILURE;
    return 0;
}

pos get_position(char **map, int rows)
{
    pos coord;

    for (int j = 0; j < rows; j++) {
        for (int k = 0; map[j][k] != '\n'; k++) {
            if (map[j][k] == 'P') {
                coord.x = k;
                coord.y = j;
            }
        }
    }
    return coord;
}
