/*
** EPITECH PROJECT, 2020
** my_getnbr2
** File description:
** getnbr2
*/

int my_getnbr_2(char *str)
{
    int i = 0;
    int x = 0;

    while (str[i] < '0' || str[i] > '9')
        i++;
    while (str[i] != '\0') {
        x = x * 10;
        x = x + (str[i] - 48);
        i++;
    }
    return x;
}
