/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int s = 0;
    int d = 0;

    while (s < n) {
        dest[d] = src[s];
        s++;
        d++;
    }
    d = s;
}
