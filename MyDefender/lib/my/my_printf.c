/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** printf function
*/

#include <stdarg.h>
#include "../../include/my.h"

int condition3(char *s, int i, va_list ap)
{
    switch (s[i])
    {
    case ('b'):
        my_put_binary(va_arg (ap, int));
        break;
    case ('%'):
        my_putchar('%');
        break;
    case ('p'):
        my_put_hexadd(va_arg (ap, long long));
        break;
    default:
        return 0;
    }
}

int condition2(char *s, int i, va_list ap)
{
    switch (s[i])
    {
    case ('S'):
        my_putstr_octal(va_arg (ap, char *));
        break;
    case ('x'):
        my_put_hexbis(va_arg (ap, int));
        break;
    case ('X'):
        my_put_hex(va_arg (ap, int));
        break;
    case ('o'):
        my_put_octal(va_arg (ap, int));
        break;
    case ('c'):
        my_putchar(va_arg (ap, int));
        break;
    default:
        return 0;
    }
}

int condition(char *s, int i, va_list ap)
{
    switch (s[i])
    {
    case ('d'):
        my_put_nbr(va_arg (ap, int));
        break;
    case ('u'):
        my_put_nbr(va_arg (ap, int));
        break;
    case ('i'):
        my_put_nbr(va_arg (ap, int));
        break;
    case ('s'):
        my_putstr(va_arg (ap, char *));
        break;
    default:
        return 0;
    }
}

int my_printf(char *s, ...)
{
    int i;
    va_list ap;

    va_start(ap, s);
    for (i = 0;s[i] != '\0'; s++) {
        if (s[i] == '%') {
            s++;
            condition(s, i, ap);
            condition2(s, i, ap);
            condition3(s, i, ap);
            if (s[i] == 'l' && s[i + 1] == 'd') {
                my_put_nbr(va_arg (ap, long));
                i++;
            }
        }
        else
            my_putchar(s[i]);
    }
    va_end(ap);
    return 0;
}
