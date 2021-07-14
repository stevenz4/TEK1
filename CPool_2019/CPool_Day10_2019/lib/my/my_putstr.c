/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** function that displays one boy one the characters of a string.
*/

int my_putchar(char c);

int my_putstr(char const *str)
{
    int s = 0;

    while (str[s] != '\0') {
        my_putchar(str[s]);
        s++;
    }
    return 0;
}

