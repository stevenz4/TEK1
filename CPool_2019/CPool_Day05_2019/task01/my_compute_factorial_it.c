/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** returns factorial number
*/
#include<stdio.h>
    
int my_compute_factorial_it(int nb)
{
    int number = nb;
    int start = 1;
    int last = 1;

    if (number < 0) {
        last = 0;
    }
    while (start <= number) {
        last = last*start;
        start++;
    }
    printf("%d",last);
    return last;
    return 0;
}

int main(void)
{
    my_compute_factorial_it(-156546544);
    return 0;
}
