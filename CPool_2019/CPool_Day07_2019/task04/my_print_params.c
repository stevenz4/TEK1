/*
** EPITECH PROJECT, 2019
** my_print_params
** File description:
** my_print_params
*/

int my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const*str)
{
    int s = 0;

    while (str[s] != '\0') {
        my_putchar(str[s]);
        s++;
    }
    return 0;
}

int my_print_params(int argc, char *argv[])
{
    int count = 0;

    while (count < argc) {
        my_putstr(argv[count]);
        my_putchar('\n');
        count++;
    }
}
