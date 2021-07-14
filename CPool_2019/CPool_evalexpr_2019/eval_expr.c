/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** evalexpr
*/

#include "include/my.h"
#include <stdlib.h>
#include <stdio.h>

char *operator(const char *str);
char **number(const char *str);

int mult(char **nbr , char *sign)
{
    int i = 0;
    int result = 0;
    int number_one;
    int number_two;

    for (int s = 0; sign[s] != '\0'; s++) {
        if (sign[s] == '*') {
            number_one = my_getnbr(nbr[s]);
            s = my_strlen(sign);
            i++;
        }
    }
    if (i == 0)
        return 0;
    for (int compt = 0; sign[compt] != '\0'; compt++) {
        number_two = my_getnbr(nbr[compt + 1]);
        if (sign[compt] == '*') {
            result = number_one * number_two;
            number_one = result;
        }
    }
    return result;
}

int eval_expr(char const *str)
{
    char **nbr = number(str);
    char *sign = operator(str);
    int result = 0;
    int returnmult = mult(nbr,sign);
    int multresult = 0;
    int number_one = 0;
    int number_two = 0;

    for (int count = 0; sign[count] != '\0'; count++) {
        number_two = my_getnbr(nbr[count + 1]);
        for (int compt = 0; sign[compt] != '\0'; compt++) {
            if (sign[compt] == '*') {
                multresult = mult(nbr,sign);
                number_two = multresult;
            }
        }
        number_one = my_getnbr(nbr[count]);
        if (sign[count] == '+') {
            result = number_one + number_two;
            number_one = result;
        }
    }
    if (result == 0)
        return returnmult;
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
