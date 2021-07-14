/*
** EPITECH PROJECT, 2019
** cat
** File description:
** cat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "include/my.h"

int node(int ac, char *av[])
{
    char buffer[30000];
    int size = 1;

    while(size > 0) {
        size = read(0, buffer, 1);
        write(1, buffer, 1);
        buffer[size] = '\0';
    }
    return 0;
}

int main(int ac, char *av[])
{
    int op;
    char buffer[30000];
    int size = 1;
    int count = 1;

    if (ac > 1) {
        while (count < ac) {
            op = open(av[count], O_RDONLY);
            if (op == -1) {
                my_putstr("cat: ");
                my_putstr(av[count]);
                my_putstr(": No such file or directory");
                my_putchar('\n');
            }
            while (size > 0) {
                size = read(op, buffer, 1);
                write(1, &buffer, 1);
                buffer[size] = '\0';
            }
            count++;
            close(op);
        }
        return 0;
    }
    if (ac == 1) {
        node(ac,av);
    }
}
