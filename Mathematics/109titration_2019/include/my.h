/*
** EPITECH PROJECT, 2020
** 109titration
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calc_derivate(double **values, int i);
void titration(char *filepath);
void display_derivate(double **values, int lines);
void display_second(double **values, int lines, int equivalence);
void display_estimated(double **values, int lines, int equivalence);
#endif
