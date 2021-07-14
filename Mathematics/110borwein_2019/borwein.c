/*
** EPITECH PROJECT, 2020
** 110borwein
** File description:
** borwein
*/

#include "my.h"

void simpson(int n)
{
    double tmp = 0;
    double total = 0;
    double a = 0;

    for (double b = 0.5; b <= 5000; b = b + 0.5) {
        tmp = ((0.5 / 6) * (borwein(n, a) + borwein(n, b) + 4 * borwein(n, (a + b) / 2)));
        total += tmp;
        a = a + 0.5;
    }
    printf("Simpson:\nI%d = %.10f\n", n, total);
    printf("diff = %.10f\n", fabs((M_PI / 2) - total));
}

void trapezoidal(int n)
{
    double tmp = 0;
    double total = 0;
    double a = 0;

    for (double b = 0.5; b <= 5000; b = b + 0.5) {
        tmp = (0.25 * (borwein(n, a) + borwein(n, b)));
        total += tmp;
        a = a + 0.5;
    }
    printf("Trapezoidal:\nI%d = %.10f\n", n, total);
    printf("diff = %.10f\n\n", fabs((M_PI / 2) - total));
    simpson(n);
}

void midpoint(int n)
{
    double result = 0;
    double a = 0;

    for (double b = 0.5; b <= 5000; b = b + 0.5) {
        result = result + ((b - a) * borwein(n, (a + b) / 2));
        a = a + 0.5;
    }
    printf("Midpoint:\nI%d = %.10f\n", n, result);
    printf("diff = %.10f\n\n", fabs((M_PI / 2) - result));
    trapezoidal(n);
}

double borwein(int n, double x)
{
    double total = 1;

    if (x == 0)
        return (1);
    for (int k = 0; k <= n; k++) {
        total = total * (sin(x / (2 * k + 1)) / (x / (2 * k + 1)));
    }
    return (total);
}

int main(int argc, char **argv)
{
    if (argc != 2 || atoi(argv[1]) > 5000 || atoi(argv[1]) < 0)
        return (84);
    for (int j = 0 ; argv[1][j] != '\0'; j++)
        if (argv[1][j] < '0' || argv[1][j] > '9')
            return (84);
    midpoint(atoi(argv[1]));
}