/*
** EPITECH PROJECT, 2020
** debug mode
** File description:
** debug mode functions
*/

#include "my.h"

tetris_t init_key(tetris_t tetris)
{
    tetris.level = 1;
    tetris.kl = KEY_LEFT;
    tetris.kr = KEY_RIGHT;
    tetris.kt = KEY_UP;
    tetris.kd = KEY_DOWN;
    tetris.kq = 'q';
    tetris.kp = ' ';
    tetris.next = "No";
    tetris.rows = 20;
    tetris.cols = 10;
    tetris.tetri_nb = 0;
    return tetris;
}

tetris_t debug_mode_options(tetris_t tetris, int ac, char **av, int option)
{
    int opt_bis = 0;

    while ((option = getopt(ac, av, "-l:r:t:d:p:q:L:wD")) != -1) {
        tetris = options_one(tetris, option);
        tetris = options_two(tetris, option);
    }
    return tetris;
}

tetris_t debug_mode(tetris_t tetris)
{
    my_printf("*** DEBUG MODE ***\n");
    my_printf("Key Left  :  %c\n", tetris.kl);
    my_printf("Key Right  :  %c\n", tetris.kr);
    my_printf("Key Turn  :  %c\n", tetris.kt);
    my_printf("Key Drop  :  %c\n", tetris.kd);
    my_printf("Key Quit  :  %c\n", tetris.kq);
    my_printf("Key Pause  :  %c\n", tetris.kp);
    my_printf("Next  :  %s\n", tetris.next);
    my_printf("Level  :  %d\n", tetris.level);
    my_printf("Size  : %d*%d\n", tetris.rows, tetris.cols);
    tetris = display_tetriminos(tetris);
    return tetris;
}
