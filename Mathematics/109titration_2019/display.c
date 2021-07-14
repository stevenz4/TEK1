/*
** EPITECH PROJECT, 2020
** 109titration
** File description:
** display
*/

#include "my.h"

void display_second(double **values, int lines, int equivalence)
{
    double **second = malloc(sizeof(double *) * lines);

    for (int i = 0; i < lines; i++)
        second[i] = malloc(sizeof(double) * 3);
    printf("Second derivative:\n");
    for (int i = 2; i != lines - 1; i++) {
        printf("%.2f ml -> %.2f\n", values[i][0], calc_derivate(values, i));
        second[i][0] = values[i][0];
        second[i][1] = calc_derivate(values, i);
    }
    printf("\n");
    display_estimated(second, lines, equivalence);
}

void display_estimated(double **values, int lines, int equivalence)
{
    double add = (values[equivalence - 1][1] - values[equivalence][1]) /
                ((values[equivalence][0] - values[equivalence - 1][0]) * 10);
    double total = values[equivalence - 1][1];
    double precision = equivalence - 1;
    double tmp = values[equivalence - 1][1];

    printf("Second derivative estimated:\n");
    for (double i = values[equivalence - 1][0]; i < values[equivalence][0] - 0.1;
        i = i + 0.1) {
        printf("%.1f ml -> %.2f\n", i, total);
        if (fabs(total) < tmp)
            precision = i;
        if (i != values[equivalence - 1][0])
            tmp = tmp - add;
        total = total - add;
    }
    add = (values[equivalence][1] - values[equivalence + 1][1]) /
            ((values[equivalence + 1][0] - values[equivalence][0]) * 10);
    total = values[equivalence][1];
    tmp = total;
    for (double i = values[equivalence][0]; i < values[equivalence + 1][0];
        i = i + 0.1) {
        printf("%.1f ml -> %.2f\n", i, total);
        if (fabs(total) < tmp)
            precision = i;
        if (i != values[equivalence][0])
            tmp = tmp - add;
        total = total - add;
    }
    printf("\nEquivalence point at %.1f ml\n", precision);
}

void display_derivate(double **values, int lines)
{
    double **second = malloc(sizeof(double *) * lines);
    int equivalence = 0;

    for (int i = 0; i < lines; i++)
        second[i] = malloc(sizeof(double) * 3);
    printf("Derivative:\n");
    for (int i = 1; i != lines; i++) {
        printf("%.2f ml -> %.2f\n", values[i][0], calc_derivate(values, i));
        if (calc_derivate(values, i) > values[equivalence][1])
            equivalence = i;
        second[i][0] = values[i][0];
        second[i][1] = calc_derivate(values, i);
    }
    printf("\nEquivalence point at %.2f ml\n\n", values[equivalence][0]);
    display_second(second, lines, equivalence);
}