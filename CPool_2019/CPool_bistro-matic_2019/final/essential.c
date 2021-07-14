/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** part2
*/

#include "include/my.h"
#include "include/bistromatic.h"
#include <stdlib.h>

char *operator(const char *str)
{
    int s = 0;
    int next = 0;
    char *stock;

    stock = malloc(sizeof(char) * my_strlen(str) + 1);
    while (str[s] != '\0') {
        if (str[s] < '0' || str[s] > '9') {
            stock[next] = str[s];
            next++;
        }
        s++;
    }
    if (stock[0] == '\0') {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    stock[next] = '\0';
    return stock;
}

char **number(const char *str)
{
    int t = 0;
    int next = 0;
    int maxstr = my_strlen(str);
    char **stock;

    stock = malloc(sizeof(char*) * 30);
    for (int s = 0; s < maxstr; s++, t = 0, next++) {
        stock[next] = malloc(sizeof(char) * 3);
        while (str[s] >= '0' && str[s] <= '9') {
            stock[next][t] = str[s];
            s++;
            t++;
        }
    }
    stock[next] = '\0';
    return stock;
}
