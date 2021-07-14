/*
** EPITECH PROJECT, 2020
** chek_life_2
** File description:
** check_life_2
*/

#include "my.h"

def_t check_life_6(def_t gnl)
{
    int x;
    if (gnl.life.str[0] == ' ' && gnl.life.str[1] == ' ')
        x = gnl.life.str[2] - 48;
    if (gnl.life.str[0] == ' ' && gnl.life.str[1] != ' ')
        x = ((gnl.life.str[1] - 48) * 10) + (gnl.life.str[2] - 48);
    if (gnl.life.str[0] == '1')
        x =  my_getnbr(gnl.life.str);
    x = x - 6;
    gnl.life.str[0] = ' ';
    gnl.life.str[1] = (x / 10) + 48;
    gnl.life.str[2] = (x % 10) + 48;
    if (x < 10)
        gnl.life.str[1] = ' ';
    if (x <= 0) {
        gnl.lose = 1;
        gnl.life.str[2] = '0';
    }
    return (gnl);
}

def_t check_life_5(def_t gnl)
{
    int x;
    if (gnl.life.str[0] == ' ' && gnl.life.str[1] == ' ')
        x = gnl.life.str[2] - 48;
    if (gnl.life.str[0] == ' ' && gnl.life.str[1] != ' ')
        x = ((gnl.life.str[1] - 48) * 10) + (gnl.life.str[2] - 48);
    if (gnl.life.str[0] == '1')
        x =  my_getnbr(gnl.life.str);
    x = x - 5;
    gnl.life.str[0] = ' ';
    gnl.life.str[1] = (x / 10) + 48;
    gnl.life.str[2] = (x % 10) + 48;
    if (x < 10)
        gnl.life.str[1] = ' ';
    if (x <= 0) {
        gnl.lose = 1;
        gnl.life.str[2] = '0';
    }
    return (gnl);
}

def_t check_life_4(def_t gnl)
{
    int x;
    if (gnl.life.str[0] == ' ' && gnl.life.str[1] == ' ')
        x = gnl.life.str[2] - 48;
    if (gnl.life.str[0] == ' ' && gnl.life.str[1] != ' ')
        x = ((gnl.life.str[1] - 48) * 10) + (gnl.life.str[2] - 48);
    if (gnl.life.str[0] == '1')
        x =  my_getnbr(gnl.life.str);
    x = x - 4;
    gnl.life.str[0] = ' ';
    gnl.life.str[1] = (x / 10) + 48;
    gnl.life.str[2] = (x % 10) + 48;
    if (x < 10)
        gnl.life.str[1] = ' ';
    if (x <= 0) {
        gnl.lose = 1;
        gnl.life.str[2] = '0';
    }
    return (gnl);
}

def_t check_life_3(def_t gnl)
{
    int x;
    if (gnl.life.str[0] == ' ' && gnl.life.str[1] == ' ')
        x = gnl.life.str[2] - 48;
    if (gnl.life.str[0] == ' ' && gnl.life.str[1] != ' ')
        x = ((gnl.life.str[1] - 48) * 10) + (gnl.life.str[2] - 48);
    if (gnl.life.str[0] == '1')
        x =  my_getnbr(gnl.life.str);
    x = x - 3;
    gnl.life.str[0] = ' ';
    gnl.life.str[1] = (x / 10) + 48;
    gnl.life.str[2] = (x % 10) + 48;
    if (x < 10)
        gnl.life.str[1] = ' ';
    if (x <= 0) {
        gnl.lose = 1;
        gnl.life.str[2] = '0';
    }
    return (gnl);
}
