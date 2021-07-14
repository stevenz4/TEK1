/*
** EPITECH PROJECT, 2019
** my_print_comb2
** File description:
** displays in ascending order all the different combinations of two two-digit
*/

int my_putchar(char c);

int my_print_comb2(void)
{
   
    for (int first = '0'; first <= '9'; first++){
        for (int second = '0'; second <= '8'; second++){
            for (int third = '0'; third <= '9'; third++){
                for (int fourth = '1'; fourth <= '8'; fourth++){
                    my_putchar(first);
                    my_putchar(second);
                    my_putchar(' ');
                    my_putchar(third);
                    my_putchar(fourth);
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
        }
    }
    my_putchar('9');
    my_putchar('8');
    my_putchar(' ');
    my_putchar('9');
    my_putchar('9');
    return(0);
}


       
        
