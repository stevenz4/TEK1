/*
** EPITECH PROJECT, 2020
** exec_cmd.c
** File description:
** execve commands parsing
*/

#include "my.h"

exe_st parse_first_arg(char *cmd2, exe_st e)
{
    e.option[0][0] = my_strcpy(e.option[0][0], e.cmd2[0]);
    for (; cmd2[e.a] != ' ' && cmd2[e.a] != '\n'; e.a++);
    if (cmd2[e.a + 1] == '|' || cmd2[e.a] == '\n')
        e.option[0][1] = NULL;
    else {
        for (e.a = e.a + 1; cmd2[e.a + 1] != '|' &&
        cmd2[e.a] != '\n'; e.a++, e.c++) {
            if (cmd2[e.a] == ' ') {
                e.c = 0;
                e.b++;
                e.a++;
            }
            e.option[0][e.b][e.c] = cmd2[e.a];
        }
        e.option[0][e.b + 1] = NULL;
    }
    return e;
}

exe_st parse_rest_arg(char *c, exe_st e)
{
    for (int j = 1; j < e.pipe_nb + 1; j++, e.ok = 0) {
        e.option[j][e.ok] = my_strcpy(e.option[j][e.ok], e.cmd2[j]);
        for (e.a = e.a + 3; c[e.a] != ' ' && c[e.a] != '\n' &&
        c[e.a] != '\0'; e.a++);
        if (c[e.a + 1] == '|' && c[e.a] == '\n')
            e.option[j][e.ok] = NULL;
        else {
            for (; c[e.a + 1] != '|' && c[e.a + 1] != '\0'; e.a++, e.ol++) {
                if (c[e.a] == ' ') {
                    e.ok++;
                    e.ol = 0;
                    e.a++;
                }
                e.option[j][e.ok][e.ol] = c[e.a];
            }
        }
        e.option[j][e.ok + 1] = NULL;
    }
    return e;
}

int exec_cmd(exe_st e, char **env)
{
    if (e.pipe_nb == 0)
        one_exec(e, env);
    if (e.pipe_nb == 1)
        two_exec(e, env);
    if (e.pipe_nb == 2)
        three_exec(e, env);
    return 0;
}

int parse_arg(char *cmd2, exe_st e, char **env)
{
    e.a = 0;
    e.b = 1;
    e.c = 0;
    e.ok = 0;
    e.ol = 0;
    e.option = malloc(sizeof(char *) * e.pipe_nb + 2);
    for (int j = 0; j < e.pipe_nb + 1; j++) {
        e.option[j] = malloc(sizeof(char *) * 5);
        for (int k = 0; k < 5; k++)
            e.option[j][k] = malloc(sizeof(char) * 20);
    }
    e = parse_first_arg(cmd2, e);
    if (e.pipe_nb >= 1)
        e = parse_rest_arg(cmd2, e);
    exec_cmd(e, env);
    return 0;
}