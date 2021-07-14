/*
** EPITECH PROJECT, 2019
** rush1-4
** File description:
** rush1-4
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
    if (y == 1) {
        for (int xcompt = 0; xcompt < x; xcompt++)
            my_putchar('B');
    }    
    else if (x == 1) {
        my_putchar('B');
        if (y >= 2){
            my_putchar('\n');
            for(int ycompt = 2; ycompt < y; ycompt++) {
                my_putchar('B');
                my_putchar('\n');
            }
            my_putchar('B');
        }
    }
}

int x2(int x, int y)
{
    int ycompt = 2;
    int xcompt3 = 2;
    
    if (x >= 2) {
        my_putchar('A');
        for (int xcompt = 2; xcompt < x; xcompt++) {
            my_putchar('B');
        }
        my_putchar('C');
        if (y >= 2) {
            my_putchar('\n');
            while (ycompt < y) {
                my_putchar('B');
                if (x >= 2) {
                    for (int xcompt3 = 2; xcompt3 < x; xcompt3++) {
                        my_putchar(' ');
                    }
                    my_putchar('B');
                    my_putchar('\n');
                    ycompt++;
                    xcompt3 = 2;
                }
            }
            my_putchar('A');
            for (int xcompt2 = 2; xcompt2 < x; xcompt2++) {
                my_putchar('B');
            }
            my_putchar('C');
        }
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        my_putstr("Invalid size \n");
    if (x == 1 || y == 1)
        x1(x, y);
    if (x >= 2 && y > 1) 
        x2(x, y); 
}


