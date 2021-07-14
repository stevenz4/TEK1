/*
** EPITECH PROJECT, 2019
** test
** File description:
** test
*/

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;

linked_list_t *my_params_to_list(int ac, char *const *av);
int my_list_size(linked_list_t const *begin);
