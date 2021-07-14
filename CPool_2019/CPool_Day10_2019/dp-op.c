/*
** EPITECH PROJECT, 2019
** dop-op
** File description:
** do-op
*/

#include "do-op.h"

int do_op(int argc, char *argv[])
{
    int count = 0;

    if (argc > 3 || argc == 0)
        return 84;    
    if (argv[2] == '+')
        OPPLUS(argv[1],argv[2]);
}

int main(int argc, char *argv[])
{
    do_op(argc,argv);
    return 0;
}
