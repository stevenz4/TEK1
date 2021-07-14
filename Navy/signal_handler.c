/*
** EPITECH PROJECT, 2020
** signal_handler
** File description:
** handle signal
*/

#include "my.h"

void handle_p2pid(int mysignal, siginfo_t *info)
{
    my_putstr("enemy connected\n\n");
    info_game[0] = info->si_pid;
}

void sigaction_get_pid(void)
{
    struct sigaction act;

    act.sa_handler = handle_p2pid;
    sigaction(SIGUSR2, &act, NULL);
}

int send_usr1(void)
{
    usleep(100);
    if (kill(info_game[0], SIGUSR1) < 0) {
        my_putstr("[signal1 failed]");
        return FAILURE;
    }
    usleep(100);
    return 0;
}

int send_usr2(void)
{
    usleep(100);
    if (kill(info_game[0], SIGUSR2) < 0) {
        my_putstr("[signal2 failed]");
        return FAILURE;
    }
    usleep(100);
    return 0;
}

int check_pos(char *b)
{
    if ((b[0] < 'A' || b[0] > 'H') || (b[1] < '1' || b[1] > '8'))
        return 1;
    return 0;
}