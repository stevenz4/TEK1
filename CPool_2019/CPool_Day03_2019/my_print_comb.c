/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** displays in ascending order all the numbers composed by three differents digits numbers
*/

int my_putchar(char c);

int my_print_comb(void)
{
    for (int first = '0'; first < '7'; first++) {
        for (int second = '1'; second <= '8'; second++) {
            for (int third = '2'; third <= '9'; third++) {
                if (first != third && first < second && second < third) {
                    my_putchar(first);
                    my_putchar(second);
                    my_putchar(third);
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
        }
    }
    my_putchar('7');
    my_putchar('8');
    my_putchar('9');
    return ('0');
}

