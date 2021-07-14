/*
** EPITECH PROJECT, 2019
** display
** File description:
** display the map
*/

#include <ncurses.h>
#include <curses.h>
#include <stdlib.h>
#include "include/my.h"

char **move_player(char **map, pos coord, char *str, int rows)
{
    int c = getch();

    switch (c) {
    case (KEY_DOWN):
        move_down(map, coord.x, coord.y);
        break;
    case (KEY_UP):
        move_up(map, coord.x, coord.y);
        break;
    case (KEY_LEFT):
        move_left(map, coord.x, coord.y);
        break;
    case (KEY_RIGHT):
        move_right(map, coord.x, coord.y);
        break;
    case (' '):
        reset_map(map, str, rows);
        break;
    }
    return map;
}

char **reset_everytime(char **map, char *str)
{
    int j = 0;
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++, k++) {
        if (str[i] == 'O' && map[j][k - 1] != 'P' && map[j][k - 1] != 'X')
            map[j][k - 1] = 'O';
        if (str[i] == '\n') {
            j++;
            k = 0;
        }
    }
    return map;
}

char **reset_map(char **map, char *str, int rows)
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
    return map;
}

int check_win_status(char **map, char *str, int rows)
{
    int count = 0;
    int k = 0;
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'O' && map[j][k] != 'X')
            count++;
        k++;
        if (str[i] == '\n') {
            j++;
            k = 0;
        }
    }
    return count;
}

int print_on_mid(char **map, int rows, char *str)
{
    pos coord = get_position(map, rows);
    int w_row = 0;

    initscr();
    noecho();
    for (int w_col = 0; 1; refresh()) {
        coord = get_position(map, rows);
        clear();
        getmaxyx(stdscr, w_row, w_col);
        keypad(stdscr, TRUE);
        for (int j = 0; j < rows; j++, w_row += 2)
            mvprintw((w_row / 2) - (rows / 2), (w_col / 2) - 15, map[j]);
        map = move_player(map, coord, str, rows);
        map = reset_everytime(map, str);
        if (check_win_status(map, str, rows) == 0)
            break;
    }
    endwin();
    return 0;
}
