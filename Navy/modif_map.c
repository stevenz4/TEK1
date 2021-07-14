/*
** EPITECH PROJECT, 2020
** navy
** File description:
** modif_map
*/

#include "my.h"

char **modif_map_bis(char **map_bis, char *buffer, int hit)
{
    int i = 0;
    int j = 0;

    while (map_bis[0][i] != buffer[0])
        i++;
    while (map_bis[j][0] != buffer[1])
        j++;
    if (hit == 2)
        map_bis[j][i] = 'x';
    else
        map_bis[j][i] = 'o';
    return map_bis;
}

void modif_map(char **map, char **map_bis, char *buffer, int hit)
{
    int i = 0;
    int j = 0;

    while (map[0][i] != buffer[0]) {
        i++;
    }
    while (map[j][0] != buffer[1]) {
        j++;
    }
    if (hit == 1)
        map[j][i] = 'x';
    else
        map[j][i] = 'o';
    print_map_p1(map, map_bis);
}

int check_win(char **map)
{
    int i = 2;
    int j = 2;
    int count = 0;

    while (map[j][i] != '\0') {
        i = 2;
        while (map[j][i] != '\n') {
            if (map[j][i] == 'x')
                count++;
            i++;
        }
        j++;
    }
    if (count == 14)
        return (1);
    else
        return (0);
}

int check_getline(char *str)
{
    if (str[0] < 65 || str[0] > 72)
        return (0);
    if (str[1] < 49 || str[1] > 56)
        return (0);
    if (str[2] != '\n' && str[2] != '\0')
        return (0);
    return (1);
}
