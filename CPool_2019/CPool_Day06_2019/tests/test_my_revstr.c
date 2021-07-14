/*
** EPITECH PROJECT, 2019
** tst
** File description:
** tst
*/

#include <criterion/criterion.h>

Test(my_revstr, reversing_a_string)
{
    char str[] = "Salut les bg";
    my_revstr(str);
    cr_assert_str_eq(str, "gb sel tulaS");
}
