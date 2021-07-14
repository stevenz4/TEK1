/*
** EPITECH PROJECT, 2020
** print_board
** File description:
** create the board
*/

#include "my.h"

char *create_board_bis2(char *board, int c, int size)
{
    for (int s = 0; s < size * 2; s++, c++)
        board[c] = '*';
    board[c] = '*';
    board[c + 1] = '\0';
    return board;
}

char *create_board_bis(char *board, int size, int c, int sticks)
{
    int space = size - 1;

    for (int a = 0; a < size; a++, sticks += 2, space += -1, c++) {
        board[c] = '*';
        c++;
        for (int j = 0; j < space; j++, c++)
            board[c] = ' ';
        for (int k = 0; k < sticks; k++, c++)
            board[c] = '|';
        for (int j = 0; j < space; j++, c++)
            board[c] = ' ';
        board[c] = '*';
        c++;
        board[c] = '\n';
    }
    board = create_board_bis2(board, c, size);
    return board;
}

char *create_board(int size)
{
    int c = 0;
    int sticks = 1;
    char *board = malloc(sizeof(char) * (size + 2) * (size * 2 - 1) * size);

    for (int s = 0; s <= size * 2; s++, c++)
        board[c] = '*';
    board[c] = '\n';
    c++;
    board = create_board_bis(board, size, c, sticks);
    return board;
}
