/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** my_strcat
*/

char *my_strcat(char *dest, char const *src)
{
    int s = 0;
    int d = 0;
    int count;

    while (src[s] != '\0') 
        s++;
    while (dest[d] != '\0')
        d++;
    count = (d) + (s);
    s = 0;
    while (d <= count) {
        dest[d] = src[s];
        d++;
        s++;
    }
    return dest;
}
