/*
** EPITECH PROJECT, 2020
** loop
** File description:
** loop function
*/

#include "my.h"

int loop_command(char **env)
{
    size_t buffsize = 0;
    char *command = malloc(sizeof(char) * buffsize);

    while (1) {
        env = print_path(env);
        command = malloc(sizeof(char) * buffsize);
        if (getline(&command, &buffsize, stdin) < 0) {
            my_putstr("exit");
            return 0;
        }
        if (check_command(command) == 1)
            check_env(env);
        if (check_command(command) == 2)
            env = check_setenv_cmd(command, env);
        if (check_command(command) == 5)
            unsetenv_cmd(command, env);
        loop_checking_cmd(command, env);
        free(command);
    }
}

int loop_checking_cmd(char *command, char **env)
{
    int j = 0;
    char *cmd = malloc(sizeof(char) * 50);

    for (; command[j] != '\n' && command[j] != ' '; cmd[j] = command[j], j++);
    if (check_command(command) == 3)
        check_cd(command);
    if (check_command(command) == 4) {
        my_putstr("exit\n");
        exit(0);
    }
    if (check_command(command) == 84)
        check_nb_command(command, env);
    return 1;
}
