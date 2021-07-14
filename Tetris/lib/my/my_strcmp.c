/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** my_strcmp
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    if (my_strlen(s1) != my_strlen(s2))
        return 1;
    for (int j = 0; s1[j] != '\0'; j++) {
        if (s1[j] < s2[j])
            return -1;
        if (s1[j] > s2[j])
            return 1;
    }
    return 0;
}
