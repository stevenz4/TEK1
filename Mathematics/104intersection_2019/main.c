/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** main.c
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <my.h>

void cylinder(char **argv)
{
    float *arr = malloc(sizeof(float) * 3);
    float a = pow(atof(argv[5]), 2) + pow(atof(argv[6]), 2);
    float b = 2 * ((atof(argv[2]) * atof(argv[5]))
                   + (atof(argv[3]) * atof(argv[6])));
    float c = pow(atof(argv[2]), 2)
        + pow(atof(argv[3]), 2)
        - pow(atof(argv[8]), 2);
    int k = nb_solutions(a, b, c);

    arr = solutions(a, b, c);
    if (k == 0)
        printf("No intersection point.\n");
    if (k == 1)
        printf("1 intersection point:\n");
    if (k == 2)
        printf("2 intersection points:\n");
    for (int i = 1; i <= k; i++)
        printf("(%.3f, %.3f, %.3f)\n", arr[i - 1] * atoi(argv[5]) + atoi(argv[2]),
               arr[i - 1] * atoi(argv[6]) + atoi(argv[3]),
               arr[0] * atoi(argv[7]) + atoi(argv[4]));
}

void cone (char **argv)
{
    float *arr = malloc(sizeof(float) * 3);
    float a = pow(tan(atof(argv[8])) * M_PI/180, 2) *
        (pow(atof(argv[5]), 2)
         + pow(atof(argv[6]), 2))
        - pow(atof(argv[7]), 2);
    float b = pow(tan(atof(argv[8])) * M_PI/180, 2) *
        (2 * ((atof(argv[2]) * atof(argv[5]))
              + (atof(argv[3]) * atof(argv[6]))
              - (atof(argv[4]) * atof(argv[7]))));
    float c = pow(tan(atof(argv[8])) * M_PI/180, 2) *
        (pow(atof(argv[2]), 2)
         + pow(atof(argv[3]), 2))
        - pow(atof(argv[4]), 2);
    int k = nb_solutions(a, b, c);

    arr = solutions(a, b, c);
    if (k == 0)
        printf("No intersection point.\n");
    if (k == 1)
        printf("1 intersection point:\n");
    if (k == 2)
        printf("2 intersection points:\n");
    for (int i = 1; i <= k; i++)
        printf("(%.3f, %.3f, %.3f)\n", arr[i - 1] * atoi(argv[5]) + atoi(argv[2]),
               arr[i - 1] * atoi(argv[6]) + atoi(argv[3]),
               arr[0] * atoi(argv[7]) + atoi(argv[4]));
}

void sphere(char **argv)
{
    float *arr = malloc(sizeof(float) * 3);
    float a = pow(atof(argv[5]), 2) + pow(atof(argv[6]), 2) + pow(atof(argv[7]), 2);
    float b = 2 * ((atof(argv[2]) * atof(argv[5]))
                   + (atof(argv[3]) * atof(argv[6]))
                   + (atof(argv[4]) * atof(argv[7])));
    float c = pow(atof(argv[2]), 2)
        + pow(atof(argv[3]), 2)
        + pow(atof(argv[4]), 2)
        - pow(atof(argv[8]), 2);
    int k = nb_solutions(a, b, c);

    arr = solutions(a, b, c);
    if (k == 0)
        printf("No intersection point.\n");
    if (k == 1)
        printf("1 intersection point:\n");
    if (k == 2)
        printf("2 intersection points:\n");
    for (int i = 1; i <= k; i++)
        printf("(%.3f, %.3f, %.3f)\n", arr[i - 1] * atoi(argv[5]) + atoi(argv[2]),
               arr[i - 1] * atoi(argv[6]) + atoi(argv[3]),
               arr[0] * atoi(argv[7]) + atoi(argv[4]));
}

void display_info(char **argv)
{
    printf("Line passing through the point (%d, %d, %d)", atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
    printf(" and parallel to the vector (%d, %d, %d)\n", atoi(argv[5]), atoi(argv[6]), atoi(argv[7]));

}

int main(int argc, char **argv)
{
    if (argc != 9)
        return 84;
    if (argv[1][0] == '1'){
        printf("Sphere of radius %d\n", atoi(argv[8]));
        display_info(argv);
        sphere(argv);
    }
    if (argv[1][0] == '2'){
        printf("Cylinder of radius %d\n", atoi(argv[8]));
        display_info(argv);
        cylinder(argv);
    }
    if (argv[1][0] == '3'){
        printf("Cone with a %d degree angle\n", atoi(argv[8]));
        display_info(argv);
        cone(argv);
    }
    else
        return 84;
}
