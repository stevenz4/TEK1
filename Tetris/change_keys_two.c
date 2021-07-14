/*
** EPITECH PROJECT, 2020
** change_keys_two
** File description:
** change keys two
*/

#include "my.h"

tetris_t change_key_quit(char *key, tetris_t tetris)
{
    tetris.kq = key[0];
    if (my_strlen(key) >= 2)
        tetris.check = FAILURE;
    return tetris;
}

tetris_t change_level(int level, tetris_t tetris)
{
    tetris.level = level;
    return tetris;
}

tetris_t change_next(tetris_t tetris)
{
    tetris.next = malloc(sizeof(char) * 4);
    tetris.next = my_strcpy(tetris.next, "Yes");
    return tetris;
}

tetris_t change_size(int row, int col, tetris_t tetris)
{
    tetris.cols = col;
    tetris.rows = row;
    return tetris;
}