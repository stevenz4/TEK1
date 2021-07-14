/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** display nbr given as parameter
*/

int my_putchar(char c);

int my_put_nbr(int nb)
{
    long long int rest;
    long long int nbr = nb;

    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * (-1);
    }
    if (nbr >= 0) {
        if (nbr >= 10) {
            rest = (nbr % 10);
            nbr = (nbr - rest) / 10;
            my_put_nbr(nbr);
            my_putchar('0' + rest);
        }
        else
            my_putchar('0' + nbr % 10);
    }
    return (0);
}
