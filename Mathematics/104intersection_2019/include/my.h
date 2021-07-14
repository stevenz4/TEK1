/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** define and proto
*/

#define FAILURE 84

void cone (char **argv);
void cylinder(char **argv);
int discriminant(float a, float b, float c);
int nb_solutions(float a, float b, float c);
float *solutions(float a, float b, float c);
int *calc_coord(int point[3], int vect[3], int t);
