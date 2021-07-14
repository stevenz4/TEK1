/*
** EPITECH PROJECT, 2020
** navy
** File description:
** read_map
*/

#include "my.h"

void make_all_map(char **map)
{
    char nb = '1';
    int line = 2;
    int col = 2;

    while (nb != '9') {
        map[line][0] = nb;
        map[line][1] = '|';
        while (col <= 17) {
            map[line][col] = '.';
            col++;
            map[line][col] = ' ';
            col++;
        }
        map[line][col] = '\n';
        col = 2;
        line++;
        nb++;
    }
    line = 2;
}

void put_boat(char **map, char *str, int nbr_boat)
{
    char letter1 = str[2 + (nbr_boat * 8)];
    char letter2 = str[5 + (nbr_boat * 8)];
    char nb1 = str[3 + (nbr_boat * 8)];
    char nb2 = str[6 + (nbr_boat * 8)];
    int a = 0;
    int nbr = 0;
    int i = 0;

    if (letter1 == letter2) {
        nbr = nb2 - nb1;
        for (; map[a][0] != nb1; a++);
        for (; map[0][i] != letter1; i++);
        for (; nbr >= 0; a++, nbr--, map[a][i] = str[nbr_boat * 8]);
    } else if (nb1 == nb2) {
        nbr = letter2 - letter1;
        for (; map[0][a] != letter1; a++);
        for (; map[i][0] != nb1; i++);
        for (; nbr >= 0; map[i][a] = str[nbr_boat * 8], a = a + 2, nbr--);
    }
}

void make_second_line(char **map)
{
    int col = 2;

    map[1][0] = '-';
    map[1][1] = '+';
    while (col != 17) {
        map[1][col] = '-';
        col++;
    }
    map[1][17] = '\n';
}

void make_map(char **map, char *str)
{
    int col = 2;
    int nbr_boat = 0;

    map[0][0] = ' ';
    map[0][1] = '|';
    for (char car = 'A'; car != 'I'; col++, car++) {
        map[0][col] = car;
        col++;
        map[0][col] = ' ';
    }
    map[0][col] = '\n';
    make_second_line(map);
    make_all_map(map);
    while (nbr_boat != 5) {
        put_boat(map, str, nbr_boat);
        nbr_boat++;
    }
}

char **create_map(char *str)
{
    char **map = malloc(sizeof(char *) * 12);
    int a = 0;

    while (a != 12) {
        map[a] = malloc(sizeof(char) * 19);
        a++;
    }
    make_map(map, str);
    return (map);
}
