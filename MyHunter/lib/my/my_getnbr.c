/*
** EPITECH PROJECT, 2019
** my_get_nbr
** File description:
** get_nbr
*/

int my_getnbr(char const *str)
{
    int c = 0;
    int valeur = 0;
    int negatif = 0;

    for (;str[c] == '-' || str[c] == '+'; negatif++)
        c++;
    c = 0;
    while (str[c] > '/' && str[c] < ':' || str[c] == '-' || str[c] == '+') {
        if (str[c] > '/' && str[c] < ':') {
            valeur *= 10;
            valeur += str[c] - '0';
        }
        c++;
    }
    if (negatif % 2 == 0)
        return (valeur);
    if (negatif % 2 != 0)
        return (-valeur);
}
