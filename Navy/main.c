/*
** EPITECH PROJECT, 2020
** ex 1
** File description:
** process_info
*/

#include "my.h"

char *read_folder(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *str = malloc(sizeof(char) * 33);

    read(fd, str, 33);
    return (str);
}

int player_1(char *map_p1)
{
    char **map = create_map(read_folder(map_p1));
    char *str = malloc(sizeof(char) * 33);
    char **empty_map = create_map(str);
    char *pos = malloc(sizeof(char) * 3);
    size_t buffsize = 32;

    my_printf("my_pid: %d\n", getpid());
    my_printf("waiting for enemy connecion...\n\n");
    sigaction_get_pid();
    pause();
    print_map_p1(map, empty_map);
    return player_1_signal(map, empty_map, pos, buffsize);
}

int player_2(int pid, char *map_p2)
{
    char **map = create_map(read_folder(map_p2));
    char *str = malloc(sizeof(char) * 33);
    char **empty_map = create_map(str);
    char *pos = malloc(sizeof(char) * 3);
    size_t buffsize = 32;

    kill(pid, SIGUSR2);
    usleep(500);
    info_game[0] = pid;
    my_printf("my_pid: %d\nsuccessfully connected\n\n", getpid());
    print_map_p2(map, empty_map);
    my_putstr("waiting for enemy's attack...\n");
    return player_2_signal(map, empty_map, pos, buffsize);
}

int main(int ac, char **av)
{
    if (ac >= 4)
        return FAILURE;
    if (ac == 2)
        return player_1(av[1]);
    if (ac == 3)
        return player_2(my_getnbr(av[1]), av[2]);
    return 0;
}
