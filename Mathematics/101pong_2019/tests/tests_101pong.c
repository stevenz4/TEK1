/*
** EPITECH PROJECT, 2019
** test 101pong
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "libsrc.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(pong, simple_calcul, .init = redirect_all_std)
{
    char *str[] = {"1.1", "3", "5", "-7", "9", "2", "4"};

    pong(str);
    cr_assert_stdout_eq_str("The velocity vector of the ball is:\n");
    cr_assert_stdout_eq_str("(-8.10, 6.00, -3.00)\n");
    cr_assert_stdout_eq_str("At time t + 4 ball coordinates will be:\n");
    cr_assert_stdout_eq_str("(-39.40, 33.00, -10.00)\n");
    cr_assert_stdout_eq_str("The incidence angle is:\n");
    cr_assert_stdout_eq_str("16.57 degrees");
}
