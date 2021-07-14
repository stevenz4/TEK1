/*
** EPITECH PROJECT, 2020
** exec_cmd.c
** File description:
** execve commands parsing
*/

#include "my.h"

char *check_spaces(char *cmd)
{
    int j = 0;
    int k = 0;
    char *str = malloc(sizeof(char) * my_strlen(cmd));

    for (; cmd[j] == ' '; j++);
    for (; cmd[j] != '\0'; j++, k++) {
        if (cmd[j] == ' ' && cmd[j + 1] == '\n') {
            j++;
            str[k] = cmd[j];
            k++;
        } if (cmd[j] == ' ') {
            str[k] = cmd[j];
            j++;
            k++;
            for (; cmd[j] == ' '; j++);
        }
        str[k] = cmd[j];
    }
    str[k] = '\0';
    return str;
}

char *line_formating(char *str)
{
    for (int j = 0; str[j] != '\n'; j++) {
        if (str[j] == '\t')
            str[j] = ' ';
        if (str[j] == '\n')
            str[j] = ' ';
    }
    str = check_spaces(str);
    return str;
}

int check_nb_command(char *cmd, char **env)
{
    exe_st e;
    char *cmd2 = malloc(sizeof(char) * my_strlen(cmd));

    e.pipe_nb = 0;
    cmd2 = line_formating(cmd);
    cmd2[my_strlen(cmd2) + 1] = '\0';
    for (int j = 0; cmd2[j] != '\n'; j++)
        if (cmd2[j] == '|')
            e.pipe_nb++;
    e.cmd = malloc(sizeof(char *) * e.pipe_nb + 2);
    e.cmd2 = malloc(sizeof(char *) * e.pipe_nb + 2);
    for (int j = 0; j < e.pipe_nb + 1; j++) {
        e.cmd[j] = malloc(sizeof(char) * 15);
        e.cmd2[j] = malloc(sizeof(char) * 15);
    }
    check_nb_command_bis(e, cmd2, env);
    return 0;
}

int check_nb_command_bis(exe_st e, char *cmd2, char **env)
{
    int k = 0;
    int s = 0;

    for (int j = 0; j < e.pipe_nb + 1; j++) {
        e.cmd[j] = my_strcat(e.cmd[j], "/bin/");
        for (k = 0; cmd2[s] != ' ' && cmd2[s] != '\n'; k++, s++) {
            e.cmd[j][k + 5] = cmd2[s];
            e.cmd2[j][k] = cmd2[s];
        }
        if (access(e.cmd[j], F_OK) != 0)
            e.cmd[j] = e.cmd2[j];
        for (; cmd2[s] != '|' && cmd2[s] != '\n'; s++);
        for (; cmd2[s] == ' ' || cmd2[s] == '|'; s++);
    }
    parse_arg(cmd2, e, env);
    return 0;
}