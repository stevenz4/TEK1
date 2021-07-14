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
    float arr[3][3] = {{1.00, 0.00, 0.00}, {0.00, 1.00, 0.00}, {0.00, 0.00, 1.00}};

    for (int count = 0; count < argc;) {
        count += 3;
        if (argv[count] != 0 && argv[count][1] == 't'){
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
            if (arr[k][j] < 0)
                printf("%.2f   ",arr[k][j]);
            else
                printf("%.2f    ",arr[k][j]);
        }
        printf("\n");
    }
    printf("(%.2f, %.2f) =>", atof(argv[1]), atof(argv[2]));
    calcul_pos(arr, atof(argv[1]), atof(argv[2]));
}
