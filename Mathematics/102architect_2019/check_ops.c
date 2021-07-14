/*
** EPITECH PROJECT, 2019
** check_ops
** File description:
** check crash
*/

#include "include/my.h"
#include <unistd.h>
#include <stdlib.h>

/*int check_first_number(char **av)
{
    for (int count = 1; count < 3; count++) {
        if (av[count][0] == '-') {
            if (av[count][1] < '0' || av[count][1] > '9')
                return FAILURE;
        }
        else if (av[count][0] < '0' || av[count][1] > '9')
            return FAILURE;
    }
}

int check_ops(int ac, char **av)
{
    if (ac < 5)
        return (84);
    if (check_first_number(av) == 84)
        return FAILURE;
    else
        av = av + 3;
    for (int count = 0; count < ac - 3;) {
        if (av[count][0] == '-') {
            if (av[count][1] != 't' && av[count][1] != 'z'
                != av[count][1] != 'r' && av[count][1] != 's')
                return FAILURE;
            else
                return FAILURE;
            count += 1;
        }
    }
    return 0;
}
*/

int check_nb_ops(int ac, char **av)
{
    if (ac < 5)
        return (84);
    for (int count = 0; count < ac;) {
        if (av[count] != NULL)
            count += 1;
        else
            return FAILURE;
    }
}


    
