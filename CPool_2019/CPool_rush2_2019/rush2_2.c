/*
** EPITECH PROJECT, 2019
** rush2
** File description:
** rush2
*/

#include "my.h"

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
    int count = my_strlen(argv1);
    int count2 = my_strlen(argv2);
    int compteur = 0;
    int nb = 0;

    if (count2 > 1)
        return 84;
    else {
        my_putchar(argv2[0]);
        my_putchar(':');
        while (argv1[compteur] != argv1[count]) {
            if (argv1[compteur] == argv2[0] || argv1[compteur] == min(argv2[0]) || argv1[compteur] == maj(argv2[0]))
                nb++;
            compteur++;
        }
    }
    my_put_nbr(nb);
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
