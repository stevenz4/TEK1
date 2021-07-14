/*
** EPITECH PROJECT, 2020
** player_signal
** File description:
** player_signal
*/

#include "my.h"

void handle_p2(int mysignal)
{
    static int count1 = 0;
    static int count2 = 0;

    if (mysignal == 12)
        count2 += 1;
    if (mysignal == 10)
        count1 += 1;
    if (count2 == 1 && count1 != 0) {
        info_game[1] = count1;
        count1 = 0;
    }
    if (count2 == 3 && count1 != 0) {
        info_game[2] = count1;
        info_game[3] = 1;
        count1 = 0;
        count2 = 0;
    }
}

void handle_hit_p2(int mysignal)
{
    static int count1 = 0;
    static int count2 = 0;

    if (mysignal == 12)
        count2++;
    if (mysignal == 10)
        count1++;
    if (count1 == 2 && count2 == 1) {
        info_game[4] = 2;
        count1 = 0;
        count2 = 0;
        info_game[5] = 1;
    }
    if (count1 == 1 && count2 == 1) {
        info_game[4] = 1;
        count1 = 0;
        count2 = 0;
        info_game[5] = 1;
    }
}

void make_sigaction_p2_hit(void)
{
    struct sigaction act;

    act.sa_handler = &handle_hit_p2;
    sigaction(SIGUSR2, &act, NULL);
    sigaction(SIGUSR1, &act, NULL);
}

int loose_p2(void)
{
    my_putstr("\nEnemy won\n\n");
    return 1;
}