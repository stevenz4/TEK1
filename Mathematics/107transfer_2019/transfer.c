/*
** EPITECH PROJECT, 2020
** tranfer
** File description:
** basics fonctions
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

float transfer(char *str, float x)
{
    int i = 0;
    int a = 0;
    float pow = 0;

    while (*str != '\0') {
        a = atoi(str);
        while (*str != '*' && *str != '\0') {
            *str++;
        }
        *str++;
        i = i + a * powf(x, pow);
        pow++;
    }
    return (i);
}

float calc_pow(char *str)
{
    int a = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '*')
            a++;
        i++;
    }
    a++;
    return (a);
}

int main(int argc, char **argv)
{
    return (0);
}
