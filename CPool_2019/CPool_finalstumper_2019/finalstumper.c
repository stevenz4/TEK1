/*
** EPITECH PROJECT, 2019
** finalstumper
** File description:
** recognize the rush1 and his size
*/

#include <unistd.h>
#include "include/my.h"

void size(char *buff)
{
    int width = 0;
    int height = 0;

    while (buff[width] != '\n')
        width++;
    for (int count = 0; buff[count] != '\0'; count++) {
        if (buff[count] == '\n')
            height++;
    }
    my_putchar(' ');
    my_put_nbr(width);
    my_putchar(' ');
    my_put_nbr(height);
    my_putchar(' ');
}

void other_case_plus(char *buff, int count)
{
    int width = 0;

    while (buff[width] != '\n')
        width++;
    if (buff[0] == 'A' && buff[width - 1] == 'A') {
        my_putstr("[rush1-3]");
        size(buff);
    }
    while (buff[count] != '\0')
            count++;
    if (buff[0] == 'A' && buff[width-1] == 'C' && buff[count - 2] == 'C') {
        my_putstr("[rush1-4]");
        size(buff);
    }
    if (buff[count - 2] == 'A') {
        my_putstr("[rush1-5]");
        size(buff);
    }
}

void other_case(char *buff)
{
    int count = 0;

    if (buff[0] == 'B') {
        my_putstr("[rush1-3]");
        size(buff);
        my_putstr("|| ");
        my_putstr("[rush1-4]");
        size(buff);
        my_putstr("|| ");
        my_putstr("[rush1-5]");
        size(buff);
    }
    else
        other_case_plus(buff,count);
}

void rush3(char *buff)
{
    if (buff[0] == 'o') {
        my_putstr("[rush1-1]");
        size(buff);
    }
    if (buff[0] == '/' || buff[0] == '*') {
        my_putstr("[rush1-2]");
        size(buff);
    }
    if (buff[0] == 'A' || buff[0] == 'B')
        other_case(buff);
}

int main(int argc, char **argv)
{
    char buff[BUFFSIZE + 1];
    int offset = 0;
    int len;
    int n = 0;

    while ((len = read(0, buff + offset, BUFFSIZE - offset)) > 0)
        offset = offset + len;
    buff[offset] = '\0';
    if (offset == 0)
        my_putstr("none");
    if (len < 0) {
        my_putstr("none");
        return 84;
    }
    rush3(buff);
    my_putchar('\n');
    return 0;
}
