/*
** EPITECH PROJECT, 2020
** loop
** File description:
** loop function
*/

#include "my.h"

int loop_command(char **env)
{
    size_t buffsize = 21;
    char *command = malloc(sizeof(char) * buffsize);

    while (1) {
        print_path();
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
    int k = 0;
    char *cmd = malloc(sizeof(char) * 256);
    char *option = malloc(sizeof(char) * 256);

    for (; command[j] != '\n' && command[j] != ' '; cmd[j] = command[j], j++);
    if (my_strlen(cmd) < my_strlen(command) - 1)
        for (j = j + 1; command[j] != '\n'; option[k] = command[j], j++, k++);
    else
        option = NULL;
    if (check_command(command) == 3)
        check_cd(command);
    if (check_command(command) == 4) {
        my_putstr("exit\n");
        exit(0);
    }
    if (check_command(command) == 84)
        not_found(command, cmd, option, env);
    return 1;
}
