/*
** EPITECH PROJECT, 2019
** move_player
** File description:
** all keybord input
*/

#include <ncurses.h>
#include <curses.h>
#include <stdlib.h>
#include "include/my.h"

char **move_down(char **map, int x, int y)
{
    if (map[y + 1][x] == 'X' && map[y + 2][x] != '#' && map[y + 2][x] != 'X') {
        map[y + 1][x] = map[y][x];
        map[y + 2][x] = 'X';
    }
    if (map[y + 1][x] != 'X' && map[y + 1][x] != '#') {
        map[y + 1][x] = map[y][x];
        map[y][x] = ' ';
    }
    return map;
}

char **move_up(char **map, int x, int y)
{
    if (map[y - 1][x] == 'X' && map[y - 2][x] != '#' && map[y - 2][x] != 'X') {
        map[y - 1][x] = map[y][x];
        map[y - 2][x] = 'X';
    }
    if (map[y - 1][x] != 'X' && map[y - 1][x] != '#') {
        map[y - 1][x] = map[y][x];
        map[y][x] = ' ';
    }
    return map;
}

char **move_left(char **map, int x, int y)
{
    if (map[y][x - 1] == 'X' && map[y][x - 2] != '#' && map[y][x - 2] != 'X') {
        map[y][x - 1] = map[y][x];
        map[y][x - 2] = 'X';
    }
    if (map[y][x - 1] != 'X' && map[y][x - 1] != '#') {
        map[y][x - 1] = map[y][x];
        map[y][x] = ' ';
    }
    return map;
}

char **move_right(char **map, int x, int y)
{
    if (map[y][x + 1] == 'X' && map[y][x + 2] != '#' && map[y][x + 2] != 'X') {
        map[y][x + 1] = map[y][x];
        map[y][x + 2] = 'X';
    }
    if (map[y][x + 1] != 'X' && map[y][x + 1] != '#') {
        map[y][x + 1] = map[y][x];
        map[y][x] = ' ';
    }
    return map;
}
