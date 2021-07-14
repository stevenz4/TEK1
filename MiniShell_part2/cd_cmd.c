/*
** EPITECH PROJECT, 2020
** cd_cmd
** File description:
** cd command function
*/

#include "my.h"

int check_cd(char *str)
{
    static int where = 0;
    int j = 0;
    char *cd_comp = "cd";
    char *cd_path = malloc(sizeof(char) * 255);

    if (my_strcmp(str, "cd\n") == 0) {
        where = cd_home(where);
        return 0;
    }
    for (; str[j] != ' '; j++)
        if (str[j] != cd_comp[j])
            return 0;
    for (int k = 0; str[j + 1] != '\n'; cd_path[k] = str[j + 1], j++, k++);
    if (my_strcmp(cd_path, "..") == 0)
        where--;
    else
        where++;
    chdir(cd_path);
    return 0;
}

int cd_home(int where)
{
    char *back = malloc(sizeof(char) * (3 * where + 1));

    back = my_strcat(back, "../");
    for (int j = 0; j < where; j++)
        back = my_strcat(back, "../");
    chdir(back);
    return 0;
}