/*
** EPITECH PROJECT, 2019
** 102 architect
** File description:
** 102 architect
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include "include/my.h"

int main(int argc, char **argv)
{
    int j = 0;
    int count = argc - 2;
    if (argc < 5)
        return (84);
    float x = atof(argv[1]);
    float y = atof(argv[2]);
    float arr[3][3] = {{1.00, 0.00, 0.00}, {0.00, 1.00, 0.00}, {0.00, 0.00, 1.00}};

    argv = argv + 2;
    while (count != 1){
        if (argv[1] != 0 && argv[1][1] != 't' && argv[1][1] != 'z' && argv[1][1] != 'r' && argv[1][1] != 's')
            return (84);
        if (argv[1][1] == 't' || argv[1][1] == 'z'){
            argv++;
            count--;
            j++;
        }
        j = j + 2;
        argv = argv + 2;
        count = count - 2;
    }
    argv = argv - j;
    count = count + j;
    while (count != 1){
        if (argv[1] != 0 && argv[1][1] == 't'){
            printf("Translation along vector (%.0f, %.0f)\n", atof(argv[2]), atof(argv[3]));
            translation(arr, atof(argv[2]), atof(argv[3]));
            argv = argv + 3;
            count = count - 3;
        }
        if (argv[1] != 0 && argv[1][1] == 'z'){
            printf("Scaling by factors %.0f and %.0f\n", atof(argv[2]), atof(argv[3]));
            scaling(arr, atof(argv[2]), atof(argv[3]));
            argv = argv + 3;
            count = count - 3;
        }
        if (argv[1] != 0 && argv[1][1] == 'r'){
            printf("Rotation by a %d degree angle\n", atoi(argv[2]));
            rotation(arr, atoi(argv[2]));
            argv = argv + 2;
            count = count - 2;
        }
        if (argv[1] != 0 && argv[1][1] == 's'){
            printf("Reflection over an axis with an inclination angle of %d degrees\n", atoi(argv[2]));
            reflection(arr, atoi(argv[2]));
            argv = argv + 2;
            count =  count - 2;
        }
    }
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            if (roundf(arr[k][j]) > 0 && k != 2)
                printf("%.2f    ",arr[k][j]);
            else if (roundf(arr[k][j]) < 0 && k != 2)
                printf("%.2f   ",arr[k][j]);
            else if (roundf(arr[k][j]) == 0 && k != 2)
                printf("0.00    ");
            if (k == 2)
                printf("%.2f",arr[k][j]);
        }
        printf("\n");
    }
    printf("(%.2f, %.2f) =>", x, y);
    calcul_pos(arr, x, y);
}
