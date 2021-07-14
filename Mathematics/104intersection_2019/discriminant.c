/*
** EPITECH PROJECT, 2019
** bootstrap
** File description:
** intersection
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float discriminant(float a, float b, float c)
{
    float i = (b * b) - (4 * a * c);

    return (i);
}

int nb_solutions(float a, float b, float c)
{
    float i = discriminant(a, b, c);

    if (i == 0)
        return (1);
    if (i < 0)
        return (0);
    if (i > 0)
        return (2);
    return(0);
}

float *solutions(float a, float b, float c)
{
    int i = nb_solutions(a, b, c);
    float *arr = malloc(sizeof(float) * i + 1);

    if (i == 1){
        arr[0] = -b / (2 * a);
    }
    if (i == 2){
        arr[0] = ((-b + sqrt(discriminant(a, b, c))) / (2 * a));
        arr[1] = ((-b - sqrt(discriminant(a, b, c))) / (2 * a));
    }
    return (arr);
}

float *calc_coord(float point[3], float vect[3], float t)
{
    float *coord = malloc(sizeof(float) * 4);

    coord[0] = point[0] + t * vect[0];
    coord[1] = point[1] + t * vect[1];
    coord[2] = point[2] + t * vect[2];
    return (coord);
}
