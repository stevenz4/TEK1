/*
** EPITECH PROJECT, 2020
** command_bis.c
** File description:
** command bis
*/

#include "my.h"

int three_exec_bis(exe_st e, int pipe_fd[4], char **env)
{
    dup2(pipe_fd[1], 1);
    close(pipe_fd[0]);
    close(pipe_fd[1]);
    close(pipe_fd[2]);
    close(pipe_fd[3]);
    if (execve(e.cmd[0], e.option[0], env) < 0) {
        my_printf("%s: Command not found.\n", e.option[0][0]);
        return 0;
    }
    return 0;
}

int three_exec_bis2(exe_st e, int pipe_fd[4], char **env)
{
    dup2(pipe_fd[0], 0);
    dup2(pipe_fd[3], 1);
    close(pipe_fd[0]);
    close(pipe_fd[1]);
    close(pipe_fd[2]);
    close(pipe_fd[3]);
    if (execve(e.cmd[1], e.option[1], env) < 0) {
        my_printf("%s: Command not found.\n", e.option[1][0]);
        return 0;
    }
    return 0;
}

int three_exec_bis3(exe_st e, int pipe_fd[4], char **env)
{
    dup2(pipe_fd[2], 0);
    close(pipe_fd[0]);
    close(pipe_fd[1]);
    close(pipe_fd[2]);
    close(pipe_fd[3]);
    if (execve(e.cmd[2], e.option[2], env) < 0) {
        my_printf("%s: Command not found.\n", e.option[2][0]);
        return 0;
    }
    return 0;
}

int three_exec_bis4(exe_st e, int pipe_fd[4])
{
    close(pipe_fd[0]);
    close(pipe_fd[1]);
    close(pipe_fd[2]);
    close(pipe_fd[3]);
    for (int i = 0; i < 3; i++)
        wait(&e.status);
    return 0;
}

int three_exec(exe_st e, char **env)
{
    int pipe_fd[4];

    pipe(pipe_fd);
    pipe(pipe_fd + 2);
    if (fork() == 0) {
        three_exec_bis(e, pipe_fd, env);
    } else {
        if (fork() == 0) {
            three_exec_bis2(e, pipe_fd, env);
        } else {
            if (fork() == 0)
                three_exec_bis3(e, pipe_fd, env);
        }
        three_exec_bis4(e, pipe_fd);
    }
    return 0;
}