/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** returns factorial number
*/

int my_compute_factorial_it(int nb)
{
    int number = 1;
    
    if (nb == 1) 
        number = 1;
    if (nb < 0 || nb > 12) 
        number = 0;
    while ( nb > 1) {
        x = x * nb;
        number--;
    }
    return number;
}
