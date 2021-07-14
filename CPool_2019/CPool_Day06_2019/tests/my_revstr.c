/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** my_revstr
*/

int my_strlen(char const *str)
{
    int s = 0;

    while (str[s] != '\0')
        s++;
    return s;
}

char *my_revstr(char *str)
{
    int rev = my_strlen(str);
    char r[rev];
    int count = 0;

    rev--;
    while (rev >= 0) {
        r[count] = str[rev];
        count++;
        rev--;
    }
    count = 0;
    while (str[count] != '\0') {
        str[count] = r[count];
        count++;
    }
    printf("%s",str);
    return str;
}

