/*
** EPITECH PROJECT, 2019
** main
** File description:
** sokoban's main
*/

#include "include/my.h"

int description(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map file representing the warehouse map, ");
    my_putstr("containing '#' for walls,\n         'P' for the player, ");
    my_putstr("'X' for boxes and 'O' for storage locations.\n");
    return 0;
}

int main(int ac, char **av)
{
    if (ac != 2)
        return FAILURE;
    if (av[1][0] == '-' && av[1][1] == 'h')
        description();
    if (read_file(av[1]) == FAILURE)
        return FAILURE;
    return 0;
}
