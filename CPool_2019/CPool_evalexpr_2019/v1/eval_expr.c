/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** evalexpr
*/

#include "include/my.h"
#include <stdlib.h>

char *operator(const char *str)
{
    int s = 0;
    int next = 0;
    char *stock;

    stock = malloc(sizeof(char) * my_strlen(str) + 1);
    while (str[s] != '\0') {
        if (str[s] == '+' || str[s] == '-' || str[s] == '*' ||
            str[s] == '/' || str[s] == '%') {
            stock[next] = str[s];
            next++;
        }
        s++;
    }
    return stock;
}

char **number(const char *str)
{
    int s = 0;
    int t = 0;
    int next = 0;
    int maxstr = my_strlen(str);
    char **stock;

    stock = malloc(sizeof(char*) * 10);
    while (s < maxstr) {
        stock[next] = malloc(sizeof(char) * 3);
        while (str[s] >= '0' && str[s] <= '9') {
            stock[next][t] = str[s];
            s++;
            t++;
        }
        s++;
        t = 0;
        next++;
    }
    return stock;
}

int mult(char **nbr, char *sign)
{
    int result = 1;
    int count = 0;
    int maxsign = my_strlen(sign);
    int s = 0;
    int i = 0;

    for (; count < maxsign; s++, count++) {
        if (sign[s] == '*') {
            result = my_getnbr(nbr[s]);
            i = i + 1;
        }
        if (i == 1)
            count = maxsign;
    }
    if (i == 0)
        return 0;
    count = 0;
    s = 0;
    for (;count < maxsign; count++, s++) {
        if (sign[s] == '*') {
            result = result * my_getnbr(nbr[s + 1]);
        }
    }
    return result;
}

int eval_expr(char const *str)
{
    char **nbr = number(str);
    char *sign = operator(str);
    int count = 0;
    int s = 0;
    int n = 1;
    int maxsign = my_strlen(sign);
    int number_one = my_getnbr(nbr[0]);
    int number_two = 0;
    int multresult = mult(nbr,sign);
    int result = mult(nbr,sign);

    for (int count = 0; count < maxsign; s++, n++, count++) {
        number_two = my_getnbr(nbr[n]);
        if (sign[s + 1] == '*')
            number_two = multresult;
        if (sign[s] == '+') {
            result = number_one + number_two;
            number_one = result;
        }
        if (sign[s] == '-') {
            result = number_one - number_two;
            number_one = result;
        }
    }
    return result;
}

int main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return 0;
    }
    return 84;
}
