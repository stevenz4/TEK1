/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** function that displays the lowercase alphabet in ascending order on a single line
*/

int my_putchar(char c);

int my_print_alpha(void)
{
    int start = 'a';    
    int end = 'z';
    
    while (start <= end) {
        my_putchar(start);
        start++;
    }
    return (0);
}

