/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** all my
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#ifndef __MY_H__
#define __MY_H__

void my_putchar(char c);
int my_putstr(char const *str);
int my_atoi(char *str);
char *my_itoa(int value, int base);
int my_put_nbr(int nbr);
char *my_revstr(char *str);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_strlen(char const *str);
int my_strcmp(char *str1, char *str2);
char *my_strcat(char *dest, char *src);


#endif
