/*
** EPITECH PROJECT, 2020
** 109titration
** File description:
** main
*/

#include "my.h"

int count_lines(char *buffer)
{
    int i = 0;
    int count = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n')
            count++;
        i++;
    }
    return (count);
}

char *pass_num(char *buffer)
{
    while ((*buffer <= '9' && *buffer >= '0') || *buffer == '.') {
        *buffer++;
    }
    *buffer++;
    return (buffer);
}

double calc_derivate(double **values, int i)
{
    double forward = (values[i + 1][1] - values[i][1]) /
                    (values[i + 1][0] - values[i][0]);
    double backward = (values[i][1] - values[i - 1][1]) /
                    (values[i][0] - values[i - 1][0]);
    double result = ((forward * (values[i][0] - values[i - 1][0])) +
                    (backward * (values[i + 1][0] - values[i][0])))
                    / ((values[i + 1][0] - values[i][0]) +
                    (values[i][0] - values[i - 1][0]));
    return (result);
}

void titration(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer;
    struct stat *info = malloc(sizeof(struct stat));
    int pointer = 0;
    double **values;
    int lines = 0;

    stat(filepath, info);
    buffer = malloc(sizeof(char) * info->st_size + 1);
    read(fd, buffer, info->st_size);
    lines = count_lines(buffer);
    values = malloc(sizeof(double *) * (lines + 1));
    for (int i = 0; i < lines + 1; i++)
        values[i] = malloc(sizeof(double) * 3);
    for (int i = 0; buffer[0] != '\0'; i++) {
        for (int j = 0; j < 2; j++) {
            values[i][j] = atof(buffer);
            buffer = pass_num(buffer);
        }
    }
    display_derivate(values, lines);
}

int main(int argc, char **argv)
{
    int fd;

    if (argc != 2)
        return (84);
    if (argc == 2 && strcmp(argv[1], "-h") == 0)
        usage();
    if ((fd = open(argv[1], O_RDONLY)) == -1)
        return (84);
    titration(argv[1]);
}
