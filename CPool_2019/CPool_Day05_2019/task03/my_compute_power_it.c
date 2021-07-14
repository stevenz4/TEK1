/*
** EPITECH PROJECT, 2019
** my_compute_power_it
** File description:
** raised power
*/

int my_compute_power_it(int nb, int p)
{
    int pcompt = 2;
    int last = nb;
        
    if (p < 0)
        nb = 0;
    while (pcompt <= p) {
        nb = (nb * last);
        pcompt++;
    }
    if (p == 0)
        nb = 1;
    return (nb);
    return (0);
}
    
