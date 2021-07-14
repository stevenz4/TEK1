/*
** EPITECH PROJECT, 2020
** while_game_open
** File description:
** functions when it's playing
*/

#include "my.h"

char *player_retrieve_sticks(char *board, char *buff_matches, char *buff_line)
{
    my_printf("Player removed %d match(es) from line %d\n",
            my_getnbr(buff_matches), my_getnbr(buff_line));
    board = remove_sticks(board, my_getnbr(buff_line), my_getnbr(buff_matches));
    return board;
}

int ai_winning(char *board, obj max)
{
    if (check_sticks_ingame(board) == 0) {
        my_putstr("\nYou lost, too bad...\n");
        return AI_WIN;
    }
    ai_turn(board, max);
    return 0;
}

int user_winning(char *board)
{
    if (check_sticks_ingame(board) == 0) {
        my_putstr("\nI lost... snif... but I'll get you next time!!\n");
        return USER_WIN;
    }
    return 0;
}

int while_game_open(char *board, obj max)
{
    size_t buffsize = 32;
    char *buff_line = (char *)malloc(buffsize * sizeof(char));
    char *buff_matches = (char *)malloc(buffsize * sizeof(char));

    while (1) {
        my_printf("Line: ");
        getline(&buff_line, &buffsize, stdin);
        if (error_invalid_input(board, max, buff_line) == 1)
            return 0;
        my_printf("Matches: ");
        getline(&buff_matches, &buffsize, stdin);
        if (error_invalid_input2(board, max, buff_matches) == 1 ||
            error_nb_matches(board, max, buff_line, buff_matches) == 1)
            return 0;
        board = player_retrieve_sticks(board, buff_matches, buff_line);
        if (ai_winning(board, max) == AI_WIN)
            return AI_WIN;
        if (user_winning(board) == USER_WIN)
            return USER_WIN;
        my_printf("\n\nYour turn:\n");
    }
}

char *remove_sticks(char *board, int line, int nb_matches)
{
    int c = 0;

    line = line + 1;
    for (int j = 0; j < line; j++, c++) {
        while (board[c] != '\n') {
            c++;
        }
    }
    c -= 2;
    for (int sticks_rm_count = 0; board[c] != '\n'; c--) {
        if (board[c] == '|' && (sticks_rm_count != nb_matches)) {
            board[c] = ' ';
            sticks_rm_count++;
        }
    }
    my_putstr(board);
    return board;
}
