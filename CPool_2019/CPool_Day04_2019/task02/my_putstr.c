/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** function that displays one boy one the characters of a string.
*/

int my_putchar(char c);

int my_putstr(char const *str)
{
    for (int s = 0; str[s] != '\0'; s ++) {
        my_putchar(str[s]);
    }
    return(0);
}

