/*
** EPITECH PROJECT, 2020
** change_keys
** File description:
** change keys macro
*/

#include "my.h"

tetris_t change_key_left(char *key, tetris_t tetris)
{
    tetris.kl = key[0];
    if (my_strlen(key) >= 2)
        tetris.check = FAILURE;
    return tetris;
}

tetris_t change_key_right(char *key, tetris_t tetris)
{
    tetris.kr = key[0];
    if (my_strlen(key) >= 2)
        tetris.check = FAILURE;
    return tetris;
}

tetris_t change_key_turn(char *key, tetris_t tetris)
{
    tetris.kt = key[0];
    if (my_strlen(key) >= 2)
        tetris.check = FAILURE;
    return tetris;
}

tetris_t change_key_drop(char *key, tetris_t tetris)
{
    tetris.kd = key[0];
    if (my_strlen(key) >= 2)
        tetris.check = FAILURE;
    return tetris;
}

tetris_t change_key_pause(char *key, tetris_t tetris)
{
    tetris.kp = key[0];
    if (my_strlen(key) >= 2)
        tetris.check = FAILURE;
    return tetris;
}