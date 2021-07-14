/*
** EPITECH PROJECT, 2020
** player2_loop.c
** File description:
** player2 loop.
*/

#include "my.h"

int player_2_signal(char **map, char **map_bis, char *pos, size_t buffsize)
{
    char *attack_buf = malloc(sizeof(char) * 32);

    for (int hit = 0; 1;) {
        p2_sigaction();
        usleep(100000000);
        hit = receive_and_send_hit(map, pos, hit);
        if (getline(&attack_buf, &buffsize, stdin) < 0)
            return 0;
        while (check_getline(attack_buf) == 0) {
            my_putstr("wrong position\nattack: ");
            if (getline(&attack_buf, &buffsize, stdin) < 0)
                return FAILURE;
        } if (my_strlen(my_strgl(attack_buf)) < 2) {
            my_putstr("wrong position\n");
            player_2_signal(map, map_bis, pos, buffsize);
            return 0;
        }
        encrypt_hit_p2(attack_buf);
        modif_map_bis(map_bis, my_strgl(attack_buf), info_game[4]);
        modif_map(map, map_bis, pos, hit);
        my_putstr("waiting for enemy's attack...\n");
        if (check_win(map) == 1 || check_win(map_bis) == 1)
            return end_condition_p2(map, map_bis);
    }
}

int end_condition_p2(char **map, char **map_bis)
{
    if (check_win(map) == 1)
        return loose_p2();
    if (check_win(map_bis) == 1)
        return win();
}

void p2_sigaction(void)
{
    struct sigaction act;

    act.sa_handler = handle_p2;
    sigaction(SIGUSR2, &act, NULL);
    sigaction(SIGUSR1, &act, NULL);
}

int receive_and_send_hit(char **map, char *pos, int hit)
{
    pause();
    while (info_game[3] == 0);
    pos[0] = info_game[1] + 64;
    pos[1] = info_game[2] + 48;
    pos[2] = '\0';
    my_printf("%s: ", pos);
    if (check_hit(map, pos) == 1) {
        my_putstr("hit\n\nattack: ");
        send_hit_signal(2);
        hit = 1;
    } else {
        my_putstr("missed\n\nattack: ");
        send_hit_signal(1);
        hit = 0;
    }
    info_game[3] = 0;
    return hit;
}

void encrypt_hit_p2(char *attack_buf)
{
    my_printf("%s: ", my_strgl(attack_buf));
    encrypt_signal_to_p1(my_strgl(attack_buf));
    make_sigaction_p2_hit();
    pause();
    while (info_game[5] == 0);
    if (info_game[4] == 2)
        my_putstr("hit\n\n");
    if (info_game[4] == 1)
        my_putstr("missed\n\n");
    info_game[5] = 0;
}