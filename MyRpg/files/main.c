/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "rpg.h"

int main(int ac, char **av, char **env)
{
    if (env[0] == NULL)
        return (84);
    return (rpg(ac, av));
}