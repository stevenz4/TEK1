/*
** EPITECH PROJECT, 2020
** print_map
** File description:
** print players' map
*/

#include "my.h"

int print_map_p1(char **map, char **map_bis)
{
    my_putstr("my positions:\n");
    for (int j = 0; j != 10; my_putstr(map[j]), j++);
    my_printf("\nenemy's positions:\n");
    for (int j = 0; j != 10; my_putstr(map_bis[j]), j++);
    my_putchar('\n');
    return 0;
}

int print_map_p2(char **map, char **map_bis)
{
    my_putstr("my positions:\n");
    for (int j = 0; j != 10; my_putstr(map[j]), j++);
    my_printf("\nenemy's positions:\n");
    for (int j = 0; j != 10; my_putstr(map_bis[j]), j++);
    my_putchar('\n');
    return 0;
}

int check_hit(char **map, char *str)
{
    int i = 0;
    int j = 0;

    while (map[0][i] != str[0]) {
        i++;
    }
    while (map[j][0] != str[1]) {
        j++;
    }
    if (map[j][i] == '.')
        return (0);
    else
        return (1);
}