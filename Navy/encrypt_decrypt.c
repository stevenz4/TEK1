/*
** EPITECH PROJECT, 2020
** encrypt_decrypt
** File description:
** encrypt_decrypt
*/

#include "my.h"

int encrypt_signal_to_p2(char *pos)
{
    int letter = pos[0] - 64;
    int number = pos[1] - 48;

    usleep(500);
    for (int j = 0; j < letter; j++)
        send_usr1();
    send_usr2();
    send_usr2();
    for (int j = 0; j < number; j++)
        send_usr1();
    send_usr2();
    return 0;
}

int encrypt_signal_to_p1(char *pos)
{
    int letter = pos[0] - 64;
    int number = pos[1] - 48;

    usleep(500);
    for (int j = 0; j < letter; j++)
        send_usr1();
    send_usr2();
    send_usr2();
    for (int j = 0; j < number; j++)
        send_usr1();
    send_usr2();
    return 0;
}

int send_hit_signal(int i)
{
    if (i == 2) {
        send_usr1();
        send_usr1();
        send_usr2();
    }
    if (i == 1) {
        send_usr1();
        send_usr2();
    }
    return 0;
}