/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
** returns the factorial of the number
*/

int process(int start)
{
    if (start > 12)
        return (0);
    if (start == 0)
        return (1);
    if (start < 0)
        return (0);  
    start = start*process(start - 1);
    return (start);
}

int my_compute_factorial_rec(int nb)
{
    int number = nb;
    int call;

    call = process(number);
}
