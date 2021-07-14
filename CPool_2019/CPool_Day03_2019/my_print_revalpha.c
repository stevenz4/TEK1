/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** diplays the lowercase alphabet in descending order on a single line
*/

int my_putchar(char c);

int my_print_revalpha(void)
{
    int start = 'z';
    int end = 'a';
    
    while(start >= end) {
        my_putchar(start);
        start--;
    }
    return (0);
}
