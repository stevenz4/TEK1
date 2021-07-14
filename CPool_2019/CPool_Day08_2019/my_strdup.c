/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** my_strdup
*/

#include <stdlib.h>
 
char *my_strdup(char const *src)
{
    char *source;
    int srcount = my_strlen(src);
    int s;

    source = malloc(sizeof(char) * (srcount + 1));
    s = 0;
    while (s < srcount) {
        source[s] = src[s];
        s = s + 1;
    }
    source[s] = '\0';
    return source;
}
