/*
** EPITECH PROJECT, 2019
** main bistro
** File description:
** main bistro
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "include/bistromatic.h"
#include "include/my.h"

static char *get_expr(int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = '\0';
    return (expr);
}

static void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
    for (int count = 0; ops[count] != '\0'; count++) {
        if (ops[count] == ops[count + 1] || ops[count] == ops[count + 2]) {
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_BASE);
        }
    }
}

static void check_base(char const *b)
{
    if (my_strlen(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
    for (int count = 0; b[count] != '\0'; count++) {
        if (b[count] == b[count + 1] || b[count] == b[count + 2]) {
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_BASE);
        }
    }
}

static void check_ops_ops(char const *base, char const *expr)
{
    char *sign = operator(expr);
    int i = 0;
    int s = 0;

    for (int count = 0; base[count] != '\0'; count++) {
        if (base[count] == sign[i]) {
            s++;
            i++;
            count = 0;
        }
    }
    if (s == 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
}

int main(int ac, char **av)
{
    int size;
    char *expr;

    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+-*/%\" exp_len\n");
        return (EXIT_USAGE);
    }
    check_base(av[1]);
    check_ops(av[2]);
    size = my_getnbr(av[3]);
    expr = get_expr(size);
    check_ops_ops(av[2], expr);
    bistro(av[1], av[2], expr, size);
    return (EXIT_SUCCESS);
}
