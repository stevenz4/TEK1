/*
** EPITECH PROJECT, 2020
** main
** File description:
** main function
*/

#include "my.h"

int check_valid_input_av(char *buffer)
{
    for (int j = 0; buffer[j] != '\0'; j++) {
        if (buffer[j] < '0' || buffer[j] > '9')
            return 1;
    }
    return 0;
}

int main(int ac, char **av)
{
    obj max;
    char *board;

    if (ac != 3)
        return FAILURE;
    if (check_valid_input_av(av[1]) == 1 || check_valid_input_av(av[2]) == 1)
        return FAILURE;
    max.line = my_getnbr(av[1]);
    max.matches = my_getnbr(av[2]);
    if (max.line <= 1 || max.line >= 100 || max.matches <= 0)
        return FAILURE;
    board = create_board(max.line);
    my_printf("%s\n\n", board);
    my_printf("Your turn:\n");
    return while_game_open(board, max);
}
