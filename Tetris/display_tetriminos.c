/*
** EPITECH PROJECT, 2020
** display_tetriminos
** File description:
** display tetrinminos in debug mode
*/

#include "my.h"

tetris_t display_tetriminos(tetris_t tetris)
{
    tetris = copy_tetriminos(tetris);
    if (tetris.rtn == FAILURE)
        return tetris;
    tetris = sort_tetriminos(tetris);
    my_printf("Tetriminos  :  %d\n", tetris.tetri_nb);
    for (int j = 0; j < tetris.tetri_nb; j++) {
        if (check_tetriminos(tetris.minos[j], j, tetris) == FAILURE) {
            tetris.rtn = FAILURE;
            return tetris;
        }
    }
    my_printf("Press any key to start Tetris\n");
    return tetris;
}

tetris_t copy_tetriminos(tetris_t tetris)
{
    DIR *dir;
    struct dirent *sd;

    if (chdir("tetriminos") < 0) {
        tetris.rtn = FAILURE;
        return tetris;
    }
    dir = opendir(".");
    if (dir == NULL)
        tetris.check = FAILURE;
    while ((sd = readdir(dir)) != NULL)
        if (sd->d_name[0] != '.')
            tetris.tetri_nb += 1;
    tetris.minos = malloc(sizeof(char * ) * tetris.tetri_nb + 1);
    dir = opendir(".");
    tetris = malloc_tetriminos(tetris, sd, dir);
    return tetris;
}

tetris_t malloc_tetriminos(tetris_t tetris, struct dirent *sd, DIR *dir)
{
    int c = 0;

    for (int j = 0; (sd = readdir(dir)) != NULL; j++) {
        if (sd->d_name[0] != '.') {
            tetris.minos[c] = malloc(sizeof(char) *  my_strlen(sd->d_name) + 1);
            tetris.minos[c] = my_strcpy(tetris.minos[c], sd->d_name);
            c++;
        }
    }
    return tetris;
}

int check_tetriminos(char *filepath, int nb, tetris_t tetris)
{
    struct stat fileStat;
    int fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) * 50);
    int size = 0;

    if (stat(filepath, &fileStat) < 0)
        return FAILURE;
    size = fileStat.st_size;
    if (size <= 6) {
        my_printf("Tetriminos :  Name %s :  Error\n", tetris.names[nb]);
        return 0;
    }
    my_printf("Tetriminos :  Name %s : ", tetris.names[nb]);
    if (read(fd, buffer, size) < 0)
        return FAILURE;
    my_printf(" Size %c*%c :  Color %c :\n", buffer[0], buffer[2], buffer[4]);
    for (int j = 6; j < size; j++)
        my_putchar(buffer[j]);
    return (0);
}