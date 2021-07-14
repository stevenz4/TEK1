/*
** EPITECH PROJECT, 2020
** player1_loop.c
** File description:
** player1 loop
*/

#include "my.h"

int player_1_signal(char **map, char **map_bis, char *pos, size_t buffsize)
{
    char *b = malloc(sizeof(char) * 32);

    for (int hit = 0; 1;) {
        my_putstr("attack: ");
        if (getline(&b, &buffsize, stdin) < 0)
                return FAILURE;
        while (check_getline(b) == 0) {
            my_putstr("wrong position\nattack: ");
            if (getline(&b, &buffsize, stdin) < 0)
                return FAILURE;
        } if (my_strlen(my_strgl(b)) < 2 || check_pos(b) == 1) {
            my_putstr("wrong position\n");
            player_1_signal(map, map_bis, pos, buffsize);
            return 0;
        } p1_sigaction();
        encrypt_hit(b, map_bis);
        map_bis = modif_map_bis(map_bis, my_strgl(b), info_game[4]);
        make_sigaction_decrypt();
        hit = check_hit_signal(pos, map, hit);
        modif_map(map, map_bis, pos, hit);
        if (check_win(map) == 1 || check_win(map_bis) == 1)
            return end_condition_p1(map, map_bis);
    }
}

int win(void)
{
    my_putstr("I won\n\n");
    return 0;
}

int loose(void)
{
    my_putstr("Enemy won\n\n");
    return 1;
}

char **encrypt_hit(char *attack_buf, char **map_bis)
{
    my_printf("%s: ", my_strgl(attack_buf));
    encrypt_signal_to_p2(my_strgl(attack_buf));
    while (info_game[5] == 0);
    if (info_game[4] == 2)
        my_putstr("hit\n");
    if (info_game[4] == 1)
        my_putstr("missed\n");
    info_game[5] = 0;
    modif_map_bis(map_bis, my_strgl(attack_buf), info_game[4]);
    my_putstr("\nwaiting for enemy's attack...\n");
    return map_bis;
}

int check_hit_signal(char *pos, char **map, int hit)
{
    pause();
    while (info_game[3] == 0);
    pos[0] = info_game[1] + 64;
    pos[1] = info_game[2] + 48;
    pos[2] = '\0';
    info_game[3] = 0;
    my_printf("%s: ", pos);
    if (check_hit(map, pos) == 1) {
        my_putstr("hit\n\n");
        send_hit_signal(2);
        hit = 1;
    } else {
        my_putstr("missed\n\n");
        send_hit_signal(1);
        hit = 0;
    }
    return hit;
}