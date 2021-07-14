/*
** EPITECH PROJECT, 2019
** my_params_to_list
** File description:
** my_params_to_list
*/

#include "include/mylist.h"
#include <stdlib.h>

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *transition = NULL;
    linked_list_t *list = malloc(sizeof(*transition));
    int count = 0;

    while (count < ac) {
        transition = malloc(sizeof(*transition));
        transition->data = av[count];
        list = transition;
        transition->next = list;
        count++;
    }
    return list;
}

int main(int ac, char *av[])
{
    my_params_to_list(ac,av);
    return 0;
}
