/*
** EPITECH PROJECT, 2019
** my_print_digits
** File description:
** displays all the digits on a single line in ascending order 
*/

int my_putchar(char c);

int my_print_digits(void)
{
    int start = '0';

    while (start <= '9') {
        my_putchar(start);
        start++;
    }
    return (0);
}
