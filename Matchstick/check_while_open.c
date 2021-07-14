/*
** EPITECH PROJECT, 2020
** check_while_open
** File description:
** check all errors
*/

#include "my.h"

int check_sticks_ingame(char *board)
{
    for (int j = 0; board[j] != '\0'; j++) {
        if (board[j] == '|')
            return 1;
    }
    return 0;
}

int check_number_matches(char *board, int line, int nb_matches)
{
    int c = 0;
    int nb_line = 0;
    int count_sticks = 0;

    for (; nb_line != line; c++) {
        if (board[c] == '\n')
            nb_line += 1;
    }
    for (;board[c] != '\n'; c++) {
        if (board[c] == '|')
            count_sticks += 1;
    }
    if (count_sticks < nb_matches)
        return 1;
    return 0;
}

int check_valid_input(char *buffer)
{
    for (int j = 0; buffer[j] != '\n'; j++) {
        if (buffer[j] < '0' || buffer[j] > '9')
            return 1;
    }
    return 0;
}
