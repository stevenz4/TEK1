/*
** EPITECH PROJECT, 2019
** rush1-1
** File description:
** square o-
*/

int my_putstr(char const*str)
{
    int s = 0;

    while (str[s] != '\0') {
        my_putchar(str[s]);
        s++;
    }
    return 0;
}

int x1(int x, int y)
{
    if (x == 1) {
        my_putchar('o');
        if (y >= 2){
            my_putchar('\n');
            for (int ycompt = 2; ycompt < y; ycompt++) {
                my_putchar('|');
                my_putchar('\n');
            }
            my_putchar('o');
        }
    }
}

int x2(int x, int y)
{
    int xcompt3;
    
    my_putchar('o');
    for (int xcompt = 2; xcompt < x; xcompt++) {
        my_putchar('-');
    }
    my_putchar('o');
    if (y >= 2) {
        my_putchar('\n');
        for (int ycompt = 2; ycompt < y; ycompt ++) {
            my_putchar('|');
            if (x >= 2) {
                for (int xcompt3 = 2; xcompt3 < x; xcompt3++) {
                    my_putchar(' ');
                }
                my_putchar('|');
                my_putchar('\n');
                xcompt3 = 2;
            }
        }
        my_putchar('o');
        for (int xcompt2 = 2; xcompt2 < x; xcompt2++) {
            my_putchar('-');
        }
        my_putchar('o');
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        my_putstr("Invalid size \n");
    if (x == 1) 
        x1(x, y);
    if (x >= 2) 
        x2(x, y);
}
    
