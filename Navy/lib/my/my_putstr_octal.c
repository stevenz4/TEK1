/*
** EPITECH PROJECT, 2019
** my_putstr_octal
** File description:
** put octal for my_printf
*/

#include "../../include/my.h"

int my_putstr_octal(char const *str)
{
    int s = 0;

    while (str[s] != '\0') {
        if (str[s] > 32 && str[s] < 127)
            my_putchar(str[s]);
        else {
            my_putchar('\\');
            my_put_octalbis(str[s]);
        }
        s++;
    }
    return 0;
}
