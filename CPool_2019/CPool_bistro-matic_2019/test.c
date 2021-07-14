/*
** EPITECH PROJECT, 2019
** unit test
** File description:
** unit test
*/

#include <criterion/criterion.h>

char *bistro(char *av1, char *av2, char *expr, int size);

Test(bistro, addition_to_do)
{
    cr_assert_str_eq(bistro("012345679", "()+-*/%", "5+5", 4), "10");
}
