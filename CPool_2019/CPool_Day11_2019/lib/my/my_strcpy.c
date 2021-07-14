/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    int s = 0;
    int t = 0;

    while (src[s] != '\0') {
        dest[t] = src[s];
        s++;
        t++;
    }
    t = s;
    dest[t] = '\0';
    return dest;
}
