/*
** EPITECH PROJECT, 2020
** ai_turn
** File description:
** function when it's ai's turn
*/

#include "my.h"

char *ai_remove_sticks(char *board, int line, int nb_matches)
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

int ai_check_matches(char *board, int line)
{
    int count_line = 0;
    int j = 0;

    for (; count_line != line; j++) {
        if (board[j] == '\n')
            count_line += 1;
    }
    j++;
    for (;board[j] != '\n'; j++) {
        if (board[j] == '|')
            return 1;
    }
    return 0;
}

obj ai_check_enough_matches(char *board, obj ai)
{
    int count_line = 0;
    int count_matches = 0;
    int j = 0;

    for (; count_line != ai.line; j++) {
        if (board[j] == '\n')
            count_line += 1;
    }
    j++;
    for (;board[j] != '\n'; j++) {
        if (board[j] == '|')
            count_matches += 1;
    }
    if (count_matches < ai.matches)
        ai.matches = count_matches;
    if (count_matches == 2)
        ai.matches = 1;
    return ai;
}

char *ai_turn(char *board, obj max)
{
    obj ai;

    ai.matches = (rand() % (max.matches + 1));
    ai.line = (rand() % (max.line + 1));
    if (ai.matches == 0 || ai.line == 0 ||
        ai_check_matches(board, ai.line) == 0) {
        ai_turn(board, max);
        return 0;
    }
    ai = ai_check_enough_matches(board, ai);
    my_printf("\n\nAI's turn...\nAI removed %d match(es) from line %d\n",
            ai.matches, ai.line);
    ai_remove_sticks(board, ai.line, ai.matches);
    return board;
}
