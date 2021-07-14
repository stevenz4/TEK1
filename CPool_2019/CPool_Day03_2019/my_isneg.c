/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** displays either N if the integer passed as parameter is engative P, if positive or null
*/

int my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else 
        my_putchar('P');
    return (0);
}
