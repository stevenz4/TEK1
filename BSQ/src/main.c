/*
** EPITECH PROJECT, 2019
** bsq project
** File description:
** find a square
*/

#include "my.h"
#include <sys/stat.h>

int main(int argc, char **argv)
{
    int size;
    struct stat fileStat;

    if (argc != 2) {
        my_putstr("No file");
        return FAILURE;
    }
    if (stat(argv[1], &fileStat) < 0)
        return FAILURE;
    size = fileStat.st_size;
    if (size == 0)
        return FAILURE;
    if (read_file(argv[1], size) == FAILURE)
        return FAILURE;
    return 0;
}
