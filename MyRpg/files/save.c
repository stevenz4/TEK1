/*
** EPITECH PROJECT, 2020
** destroy_intro
** File description:
** destroy_intro
*/

#include "rpg.h"

rpg_t save_that(rpg_t rpg)
{
    int BUFF_SIZE;
    int size = 1000;

    char *save = my_strcat(rpg.save.the_save, rpg.intro.pseudo);
    BUFF_SIZE = open(rpg.save.save_nbr, O_WRONLY);
    write(BUFF_SIZE, save, size);
    close(BUFF_SIZE);

    return (rpg);
}

rpg_t resume_from_save(rpg_t rpg)
{
    int BUFF_SIZE;
    int size = 1000;

    BUFF_SIZE = open(rpg.save.save_nbr, O_RDONLY);
    rpg.save.the_save = malloc(sizeof(char) * size);
    read(BUFF_SIZE, rpg.save.the_save, size);
    close (BUFF_SIZE);
    if (rpg.save.the_save[0] == '.')
        rpg.new_game = 1;
    else
        rpg.new_game = 0;
    return (rpg);
}