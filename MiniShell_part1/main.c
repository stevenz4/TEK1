/*
** EPITECH PROJECT, 2020
** main
** File description:
** main function
*/

#include "my.h"

void print_path(void)
{
    char path[255];

    getcwd(path, 255);
    my_printf("[%s]$> ", path);
}

char **copy_environ(char **env)
{
    for (int j = 0; environ[j]; j++) {
        env[j] = malloc(sizeof(char) * my_strlen(environ[j]) + 1);
        if (env[j] == NULL) {
            my_putstr("malloc failed");
            return NULL;
        }
        env[j] = my_strcpy(env[j], environ[j]);
    }
    return env;
}

int main(void)
{
    char **env = malloc(sizeof(char *) * 252);

    env = copy_environ(env);
    return loop_command(env);
}
