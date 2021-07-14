/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** function that swaps the content of two integers
*/

int my_putchar(char c);

void my_swap(int *a, int *b)
{
    int c;
    
    c = *a;
    *b = *a;
    *a = c;            
}

    
       

    
