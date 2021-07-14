/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** concat_params
*/

#include<stdlib.h>
#include<unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int s = 0;

    while (str[s] != '\0') {
        my_putchar(str[s]);
        s++;
    }
    return 0;
}

char *concat_params(int argc, char **argv)
{
    int count = 0;
    char *string;
    
    while (count < argc) {
        my_putstr(*argv[count]);
        argv[count] = malloc(sizeof(char) * (argc));
        my_putchar('\n');
        count++;
    }
    free(argv);
}
int main(int ac, char **av)
{
    my_putstr(concat_params(ac,av));
    return (0);
}
