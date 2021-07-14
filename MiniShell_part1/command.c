/*
** EPITECH PROJECT, 2020
** command.c
** File description:
** list of commands
*/

#include "my.h"

int not_found(char *cmd, char *cmd_arg, char *option, char **env)
{
    int status;
    pid_t pid;
    int j = 0;
    char *path = malloc(sizeof(char) * 256);
    char *arg[] = {cmd_arg, option, NULL};

    pid = fork();
    path[0] = '/';
    path[1] = 'b';
    path[2] = 'i';
    path[3] = 'n';
    path[4] = '/';
    for (int k = 5; cmd[j] != '\n' && cmd[j] != ' '; j++, k++)
        path[k] = cmd[j];
    if (pid == 0) {
        if (execve(path, arg, env) < 0)        
            my_printf("%s: Command not found.\n", cmd_arg);
    }
    else
        waitpid(pid, &status, 0);
    return 1;
}

int check_cd(char *str)
{
    int j = 0;
    char *cd_comp = "cd";
    char *cd_path = malloc(sizeof(char) * 255);
    char s[255];

    for (; str[j] != ' '; j++) {
        if (str[j] == '\0')
            return 0;
        if (str[j] != cd_comp[j])
            return 0;
    }
    j++;
    for (int k = 0; str[j] != '\n'; j++, k++)
        cd_path[k] = str[j];
    getcwd(s, 255);
    chdir(cd_path);
    return 0;
}
