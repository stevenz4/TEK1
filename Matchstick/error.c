/*
** EPITECH PROJECT, 2020
** error
** File description:
** error message
*/

#include "my.h"

int error_nb_matches(char *board, obj max, char *buff_line, char *buff_matches)
{
    if (my_getnbr(buff_matches) > max.matches) {
        my_printf("Error: you cannot remove more than %d matches per turn\n",
                max.matches);
        while_game_open(board, max);
        return 1;
    }
    if (check_number_matches(board, my_getnbr(buff_line),
                            my_getnbr(buff_matches)) == 1) {
        my_putstr("Error: not enough matches on this line\n");
        while_game_open(board, max);
        return 1;
    }
    return 0;
}

int error_invalid_input(char *board, obj max, char *buff_line)
{
    if (buff_line[0] == '\0')
        return 1;
    if (check_valid_input(buff_line) == 1) {
        my_printf("Error: invalid input (positive number expected)\n");
        while_game_open(board, max);
        return 1;
    }
    if (my_getnbr(buff_line) <= 0 || my_getnbr(buff_line) > max.line) {
        my_printf("Error: this line is out of range\n");
        while_game_open(board, max);
        return 1;
    }
    return 0;
}

int error_invalid_input2(char *board, obj max, char *buff_matches)
{
    if (buff_matches[0] == '\0')
        return 1;
    if (check_valid_input(buff_matches) == 1) {
        my_printf("Error: invalid input (positive number expected)\n");
        while_game_open(board, max);
        return 1;
    }
    if (my_getnbr(buff_matches) == 0) {
        my_printf("Error: you have to remove at least one match\n");
        while_game_open(board, max);
        return 1;
    }
    return 0;
}
