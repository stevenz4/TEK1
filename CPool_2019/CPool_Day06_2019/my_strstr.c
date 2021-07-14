/*
** EPITECH PROJECT, 2019
** strstr
** File description:
** strstr
*/


char *my_strstr(char *str, char const *to_find)
{
    int countstr = 0;
    int countfind = 0;

    while (str[countstr] != '\0') {
        if (str[countstr] == to_find[countfind]) {
            while (str[countstr] == to_find[countfind]) {
                my_putchar(str[countstr]);
                countfind++;
                countstr++;
            }
            countfind = 0;
        }
        countstr++;
    }
}

void main()
{
    char str[] = "My name i steven";
    char to_find[] = "is";

    my_strstr(str,to_find);
}
