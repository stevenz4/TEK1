/*
** EPITECH PROJECT, 2019
** rush2
** File description:
** rush2
*/

#include "../my.h"

int min(char change)
{
    if (change >= 'a' || change <= 'z')
        change = change - 32;
    return change;
}

int maj(char change)
{
    if (change >= 'A' || change <= 'Z')
        change = change + 32;
    return change;
}

int argument(char argv1[], char argv2[])
{
    int count1 = my_strlen(argv1);
    int count2 = my_strlen(argv2);
    int compt = 0;
    int nb = 0;
    int freq;
    int freq2;
    int freq3;
    int jump = 0;

    if (count2 > 1)
        return 84;
    else {
        my_putchar(argv2[0]);
        my_putchar(':');
        while (argv1[compt] != argv1[count1]) {
            if (argv1[compt] == argv2[0] || argv1[compt] == min(argv2[0]) || argv1[compt] == maj(argv2[0]))
                nb++;
            if ((argv1[compt] >= 'a' && argv1[compt] <= 'z') || (argv1[compt] >= 'A' && argv1[compt] <= 'Z'))
                jump++;
            compt++;
        }
    }
    my_put_nbr(nb);
    freq = nb * 10000;
    freq = freq / jump;
    my_putchar(' ');
    my_putchar('(');
    freq2 = freq / 100;
    my_put_nbr(freq2);
    my_putchar('.');
    freq3 = freq / 10;
    freq3 = freq3 % 10;
    my_put_nbr(freq3);
    freq = freq % 10;
    my_put_nbr(freq);
    my_putchar('%');
    my_putchar(')');
    return 0;
}

int rush2(int argc, char *argv[])
{
    int count = 2;

    if (argc >= 3) {
        while (count < argc) {
            argument(argv[1], argv[count]);
            my_putchar('\n');
            count++;
        }
    }
    else
        return 84;
    return 0;
}

int main(int argc, char *argv[])
{
    rush2(argc,argv);
    return 0;
}
