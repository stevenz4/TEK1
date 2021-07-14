/*
** EPITECH PROJECT, 2020
** 105torus
** File description:
** bootstrap
*/

#include "include/my.h"

int isnum(char *str)
{
    int i = 0;

    if (str[i] == '-')
        i++;
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

double result(double *a, double x)
{
    double result = a[4] * pow(x, 4) + a[3] * pow(x, 3) +
        a[2] * pow(x, 2) + a[1] * x + a[0];
    if (result == 0)
        return FAILURE;
    return (result);
}

double result_derived(double *a, double x)
{
    double result = 4 * a[4] * pow(x, 3) + 3 * a[3] *
        pow(x, 2) + 2 * a[2] * x + a[1];
    if (result == 0)
        return FAILURE;
    return (result);
}

int interval_newton(double *acoef, double x_n, int stop)
{
    double r_s = result_derived(acoef, x_n);
    if (r_s == 84)
        return FAILURE;
    double x_n1 = x_n - (result(acoef, x_n) / r_s);
    double f_x_n1 = result(acoef, x_n1);

    if (f_x_n1 < 0)
        f_x_n1 = -f_x_n1;
    printf("x = %.1f\n", x_n);
    while (f_x_n1 >= pow(10, -stop)) {
        x_n = x_n1;
        x_n1 = x_n - (result(acoef, x_n) / result_derived(acoef, x_n));
        f_x_n1 = result(acoef, x_n);
        if (f_x_n1 < 0)
            f_x_n1 = -f_x_n1;
        printf("x = %.*f\n", stop, x_n);
    }
}

int interval_bisection(double *acoef, double *result_array, int stop)
{
    double a = result_array[0];
    double b = result_array[1];
    double c = (a + b) / 2;
    double f_a = result(acoef, a);
    double f_c = result(acoef, c);
    int i = 1;

    if (f_c < 0)
        f_c = -f_c;
    while (f_c > pow(10, -stop)) {
        a = result_array[0];
        b = result_array[1];
        c = (a + b) / 2;
        f_c = result(acoef, c);
        f_a = result(acoef, a);
        if (f_a * f_c < 0) {
            result_array[0] = a;
            result_array[1] = c;
        }
        else {
            result_array[0] = c;
            result_array[1] = b;
            if (f_c == 1)
                return FAILURE;
        }
        printf("x = %.*f\n", i, c);
        if (f_c < 0)
            f_c = -f_c;
        if (i != stop)
            i++;
    }
    return 0;
}

int interval_secant(double *acoef, double *result_array, int stop)
{
    double xn = result_array[1];
    double div = (result(acoef, xn) - result(acoef, result_array[0]));
    if (div == 84)
        return FAILURE;
    double xn1 = xn - (((result(acoef, xn) * (xn - result_array[0])))
                       / div);
    double f_xn1 = result(acoef, xn1);

    result_array[0] = xn;
    result_array[1] = xn1;
    if (f_xn1 < 0)
        f_xn1 = -f_xn1;
    printf("x = %.1f\n", xn1);
    while (f_xn1 >= pow(10, -stop)){
        xn = result_array[1];
        xn1 = xn - (((result(acoef, xn) * (xn - result_array[0])))
                    / (result(acoef, xn) - result(acoef, result_array[0])));
        f_xn1 = result(acoef, xn1);
        result_array[0] = xn;
        result_array[1] = xn1;
        if (f_xn1 < 0)
            f_xn1 = -f_xn1;
        printf("x = %.*f\n", stop, xn1);
    }
}
