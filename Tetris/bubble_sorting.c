/*
** EPITECH PROJECT, 2020
** bubble_sorting
** File description:
** bubble_sort tetriminos
*/

#include "my.h"

int bubble_sorting(char *s1, char *s2)
{
    if (my_strlen(s1) < my_strlen(s2)) {
        for (int j = 0; s1[j] != '\0'; j++) {
            if (s1[j] < s2[j])
                return 1;
            if (s1[j] > s2[j])
                return 2;
        }
    }
    return bubble_sorting_bis(s1, s2);
}

int bubble_sorting_bis(char *s1, char *s2)
{
    if (my_strlen(s1) > my_strlen(s2)) {
        for (int j = 0; s1[j] != '\0'; j++) {
            if (s1[j] < s2[j])
                return 1;
            if (s1[j] > s2[j])
                return 2;
        }
    }
    if (my_strlen(s1) == my_strlen(s2)) {
        for (int j = 0; s1[j] != '\0'; j++) {
            if (s1[j] < s2[j])
                return 1;
            if (s1[j] > s2[j])
                return 2;
        }
    }
    return 0;
}

tetris_t sort_tetriminos(tetris_t tetris)
{
    char *temp = malloc(sizeof(char) * 50);

    for (int j = 0; j < tetris.tetri_nb - 1;) {
        if (bubble_sorting(tetris.minos[j], tetris.minos[j + 1]) == 2) {
            temp = my_strcpy(temp, tetris.minos[j]);
            tetris.minos[j] = my_strcpy(tetris.minos[j], tetris.minos[j + 1]);
            tetris.minos[j + 1] = my_strcpy(tetris.minos[j + 1], temp);
            j = 0;
        } else
            j++;
    }
    tetris = copy_name(tetris);
    return tetris;
}

tetris_t copy_name(tetris_t tetris)
{
    tetris.names = malloc(sizeof(char *) * tetris.tetri_nb + 1);
    for (int j = 0; j < tetris.tetri_nb; j++) {
        tetris.names[j] = malloc(sizeof(char) * my_strlen(tetris.minos[j]));
        for (int k = 0; tetris.minos[j][k] != '.'; k++)
            tetris.names[j][k] = tetris.minos[j][k];
    }
    return tetris;
}