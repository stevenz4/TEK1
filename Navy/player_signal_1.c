/*
** EPITECH PROJECT, 2020
** player_signal_1
** File description:
** player_signal_1
*/

#include "my.h"

void handle_decryption(int mysignal)
{
    static int count1 = 0;
    static int count2 = 0;

    if (mysignal == 12)
        count2++;
    if (mysignal == 10)
        count1++;
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

void make_sigaction_decrypt(void)
{
    struct sigaction act;

    act.sa_handler = &handle_decryption;
    sigaction(SIGUSR2, &act, NULL);
    sigaction(SIGUSR1, &act, NULL);
}

void handle_p1(int mysignal)
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

void p1_sigaction(void)
{
    struct sigaction act;

    act.sa_handler = handle_p1;
    sigaction(SIGUSR2, &act, NULL);
    sigaction(SIGUSR1, &act, NULL);
}

int end_condition_p1(char **map, char **map_bis)
{
    if (check_win(map) == 1)
        return loose();
    if (check_win(map_bis) == 1)
        return win();
}