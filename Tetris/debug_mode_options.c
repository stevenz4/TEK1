/*
** EPITECH PROJECT, 2020
** debug_mode_options
** File description:
** debug mode options
*/

#include "my.h"

tetris_t options_one(tetris_t tetris, int option)
{
    switch (option) {
    case ('l'):
        tetris = change_key_left(optarg, tetris);
        break;
    case ('r'):
        tetris = change_key_right(optarg, tetris);
        break;
    case ('t'):
        tetris = change_key_turn(optarg, tetris);
        break;
    case ('d'):
        tetris = change_key_drop(optarg, tetris);
        break;
    case ('?'):
        break;
    }
    return tetris;
}

tetris_t options_two(tetris_t tetris, int option)
{
    switch (option) {
    case ('p'):
        tetris = change_key_pause(optarg, tetris);
        break;
    case ('q'):
        tetris = change_key_quit(optarg, tetris);
        break;
    case ('L'):
        tetris = change_level(my_getnbr(optarg), tetris);
        break;
    case ('w'):
        tetris = change_next(tetris);
        break;
    case ('D'):
        tetris = debug_mode(tetris);
        break;
    case ('?'):
        break;
    }
    return tetris;
}