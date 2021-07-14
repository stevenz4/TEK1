/*
** EPITECH PROJECT, 2019
** test
** File description:
** my_print tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string , .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, simple_string_with_integer , .init = redirect_all_std)
{
    my_printf("le nombre est %d", 14);
    cr_assert_stdout_eq_str("le nombre est 14");
}

Test(my_printf, simple_string_with_signed , .init = redirect_all_std)
{
    my_printf("the number is %d", -15);
    cr_assert_stdout_eq_str("the number is -15");
}

Test(my_printf, simple_strin_with_flag , .init = redirect_all_std)
{
    my_printf("la phrase est : %s", "je suis un client");
    cr_assert_stdout_eq_str("la phrase est : je suis un client");
}

Test(my_printf, simple_character , .init = redirect_all_std)
{
    my_printf("le charactere est %c", 'S');
    cr_assert_stdout_eq_str("le charactere est S");
}

Test(my_printf, simple_long , .init = redirect_all_std)
{
    my_printf("%ld", 1234567891);
    cr_assert_stdout_eq_str("1234567891");
}

Test(my_printf, decimal_into_octal , .init = redirect_all_std)
{
    my_printf("decimal : %d, octal : %o", 100, 100);
    cr_assert_stdout_eq_str("decimal : 100, octal : 144");
}

Test(my_printf, decimal_into_binary , .init = redirect_all_std)
{
    my_printf("decimal : %d, binary : %b", 100, 100);
    cr_assert_stdout_eq_str("decimal : 100, binary : 1100100");
}

Test(my_printf, pourcent , .init = redirect_all_std)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, string_with_invalid_char , .init = redirect_all_std)
{
    char str[5];

    my_strcpy(str, "tata");
    str[1] = 6;
    my_printf("%S", str);
    cr_assert_stdout_eq_str("t\\006ta");
}

Test(my_printf, decimal_into_hex , .init = redirect_all_std)
{
    my_printf("%X or %x", 9153, 9153);
    cr_assert_stdout_eq_str("23C1 or 23c1");
}

Test(my_printf, display_unsigned_integer , .init = redirect_all_std)
{
    my_printf("%u%u", -18, 151515);
    cr_assert_stdout_eq_str("4294967278151515");
}

Test(my_printf, display_integer , .init = redirect_all_std)
{
    my_printf("%i", 915);
    cr_assert_stdout_eq_str("915");
}

Test(my_printf, display_pointer , .init = redirect_all_std)
{
    my_printf("%p", 14042001);
    cr_assert_stdout_eq_str("0xd64391");
}

Test(my_printf, display_integer_two , .init = redirect_all_std)
{
    my_printf("%I", 14042001);
    cr_assert_stdout_eq_str("14042001");
}
