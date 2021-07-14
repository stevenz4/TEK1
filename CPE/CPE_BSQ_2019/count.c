/*
** EPITECH PROJECT, 2019
** count
** File description:
** count lines, rows and fline
*/

int count_rows(char *map)
{
    int rows = 0;

    for (int j = 0; map[j] != '\0'; j++) {
        if (map[j] == '\n')
            rows += 1;
    }
    rows = rows - 1;
    return rows;
}

int count_cols(char *map)
{
    int cols = 0;
    int i = 0;

    for (i = 0; map[i] != '\n'; i++)
        cols = i;
    cols += 2;
    while (map[cols] != '\n')
        cols++;
    cols = cols - (i + 1);
    return cols;
}

int count_to_first_line(char *map)
{
    int space = 0;

    while (map[space] != '\n')
        space += 1;
    space += 1;
    return space;
}
