/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** count nb charac
*/

int my_strlen(char const *str)
{
    int s = 0;

    while (str[s] != '\0')
        s++;
    return (s);
}
