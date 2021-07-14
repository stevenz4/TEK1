/*
** EPITECH PROJECT, 2019
** my_list_size
** File description:
** returns the number of elements on the list
*/

#include <stdlib.h>
#include "include/mylist.h"
#include "include/my.h"

int my_list_size(linked_list_t const *begin)
{
    linked_list_t *transition = NULL;
    linked_list_t *list = malloc(sizeof(*transition));
    int count = 0;

    while (begin[count] != '\0') {
        transition->data = begin[count];
        list = transition;
        transition->data = list;
        count++;
    }
    return list;
}

int main(void)
{
    char begin[] = "Hello";
    my_list_size(begin);
    return 0;
}
