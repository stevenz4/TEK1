/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "my.h"

void click_sound(def_t gnl)
{
    sfSound_play(gnl.click1.sound);
}

int main(int ac, char **av)
{
    def_t gnl;

    gnl.mode.width = WIDTH;
    gnl.mode.height = HEIGHT;
    gnl.window = sfRenderWindow_create(gnl.mode,
    "MyDefender", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(gnl.window, 60);
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        gnl = init_rules(gnl);
        rules(gnl);
        destroy_rules(gnl);
        return 0;
    }
    gnl = initialisation(gnl);
    create_menu(gnl);
    destroy_game(gnl);
    return 0;
}
