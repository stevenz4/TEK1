/*
** EPITECH PROJECT, 2020
** main.
** File description:
** main function
*/

#include "my.h"

void display_help(void)
{
    my_printf("Usage:  ./tetris [options]\nOptions:\n");
    my_printf(" --help               Display this help\n");
    my_printf(" -L --level={num}     Start Tetris at level num (def: 1)\n");
    my_printf(" -l --key-left={K}    ");
    my_printf("Move the tetrimino LEFT using the K key (def: left arrow)\n");
    my_printf(" -r --key-right={K}   ");
    my_printf("Move the tetrimino RIGHT using the K key (def: right arrow)\n");
    my_printf(" -t --key-turn={K}    TURN the tetrimino");
    my_printf(" clockwise 90d using the K key (def: top arrow)\n");
    display_help2();
}

void display_help2(void)
{
    my_printf(" -d --key-drop={K}     ");
    my_printf("DROP the tetrimino using the K key (def: down arrow)\n");
    my_printf(" -q --key-quit={K}    ");
    my_printf("QUIT the game using the K key (def: 'q' key)\n");
    my_printf(" -p --key-pause={K}   ");
    my_printf("PAUSE/RESTART the game using the K key (def: space bar)\n");
    my_printf(" --map-size={row,col} ");
    my_printf("Set the numbers of rows and columns of the map (def: 20,10)\n");
    my_printf(" -w --without-next    ");
    my_printf("Hide next tetrimino (def: false)\n");
    my_printf(" -D --debug           ");
    my_printf("Debug mode (def: false)\n");
}

int main(int ac, char **av)
{
    int option = 0;
    tetris_t tetris;

    if (ac == 1)
        return FAILURE;
    keypad(stdscr, TRUE);
    tetris = init_key(tetris);
    if (my_strcmp(av[1], "--help") == 0 && ac == 2)
        display_help();
    else
        tetris = debug_mode_options(tetris, ac, av, option);
    if (tetris.check == FAILURE) {
        my_printf("There is an bad input\n");
        return FAILURE;
    }
    if (tetris.rtn == FAILURE)
        return FAILURE;
    return 0;
}

