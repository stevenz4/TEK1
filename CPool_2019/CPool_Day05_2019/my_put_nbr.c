/*
** EPITECH PROJECT, 2019
** my_put_char
** File description:
** display numbers
*/

int my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    int rest;
    long long number = nb;
    
    if (number < 0) {
        my_putchar('-');
        number = number * (-1);
    }
    if (nb >= 0) {
        if(number >= 10) {
            rest = (number % 10);
            number = (number - rest) / 10;
            my_put_nbr(number);
            my_putchar(48 + rest);
    }
    else
        my_putchar(48 + number % 10);
    }
    return (0);
}

int main(void)
{
    my_put_nbr(1565465335);
    return (0);
}
           
        
