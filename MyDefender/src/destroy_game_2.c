/*
** EPITECH PROJECT, 2020
** destroy_game_2
** File description:
** destroy_game_2
*/

#include "my.h"

void destroy_game_6(def_t gnl)
{
    sfTexture_destroy(gnl.back_two.texture);
    sfSprite_destroy(gnl.back_two.sprite);
    sfTexture_destroy(gnl.bank.texture);
    sfSprite_destroy(gnl.bank.sprite);
    sfClock_destroy(gnl.m_clock.clock);
    sfClock_destroy(gnl.l_clock.clock);
    sfClock_destroy(gnl.mon_clock.clock);
    sfClock_destroy(gnl.clock_gen.clock);
}
