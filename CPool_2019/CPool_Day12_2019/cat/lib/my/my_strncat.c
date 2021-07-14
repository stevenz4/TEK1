/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int s = 0;
    int d = 0;
    int count;

    while (s < nb)
        s++;
    while (dest[d] != '\0')
        d++;
    count = d + s;
    s = 0;
    while (d < count) {
        dest[d] = src[s];
        d++;
        s++;
    }
    return dest;
}
