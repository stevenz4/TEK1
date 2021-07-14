/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** my_compute_power_rec
*/

#include<stdio.h>

int process(int nb, int p)
{
    int pcompt = 2;
    int last = nb;

    if (p < 0)
        nb = 0;
    if (p > 0)
        nb = (p * process(nb - 1,p - 1));
    if (p == 0)
        nb = 1;
        printf("%d",nb);
    return (nb);
    return (0);
}

int my_compute_power_rec(int nb, int p)
{
    int call;

    call = process(nb, p);
}

int main(void)
{
    my_compute_power_rec(2, 4);
        return 0;
}
