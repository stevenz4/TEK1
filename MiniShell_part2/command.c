/*
** EPITECH PROJECT, 2020
** command.c
** File description:
** list of commands
*/

#include "my.h"

void one_exec(exe_st e, char **env)
{
    int pid;
    int status;

    pid = fork();
    if (pid == 0) {
        if (execve(e.cmd[0], e.option[0], env) < 0) {
            check_errno(e.option[0][0]);
        }
    }
    else
        wait(&status);
}

int two_exec(exe_st e, char **env)
{
    pid_t pid;
    int pipe_fd[2];

    pipe(pipe_fd);
    pid = fork();
    if (pid == 0) {
        dup2(pipe_fd[0], 0);
        close(pipe_fd[1]);
        if (execve(e.cmd[1], e.option[1], env) < 0) {
            my_printf("%s: Command not found.\n", e.option[1][0]);
            return 0;
        }
    } else
        two_exec_bis(e, pipe_fd, env);
    close(pipe_fd[0]);
    close(pipe_fd[1]);
    for (int j = 0; j < 2; j++)
        wait(&e.status);
    return 0;
}

int two_exec_bis(exe_st e, int pipe_fd[2], char **env)
{
    if (fork() == 0) {
        dup2(pipe_fd[1], 1);
        close(pipe_fd[0]);
        if (execve(e.cmd[0], e.option[0], env) < 0) {
            my_printf("%s: Command not found.\n", e.option[0][0]);
            return 0;
        }
    }
    return 0;
}