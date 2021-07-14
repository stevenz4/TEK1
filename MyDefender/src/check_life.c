/*
** EPITECH PROJECT, 2020
** check_life
** File description:
** check_life
*/

#include "my.h"

def_t check_life_2(def_t gnl)
{
    int x;
    if (gnl.life.str[0] == ' ' && gnl.life.str[1] == ' ')
        x = gnl.life.str[2] - 48;
    if (gnl.life.str[0] == ' ' && gnl.life.str[1] != ' ')
        x = ((gnl.life.str[1] - 48) * 10) + (gnl.life.str[2] - 48);
    if (gnl.life.str[0] == '1')
        x =  my_getnbr(gnl.life.str);
    x = x - 2;
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

def_t check_life_1(def_t gnl)
{
    int x;
    if (gnl.life.str[0] == ' ' && gnl.life.str[1] == ' ')
        x = gnl.life.str[2] - 48;
    if (gnl.life.str[0] == ' ' && gnl.life.str[1] != ' ')
        x = ((gnl.life.str[1] - 48) * 10) + (gnl.life.str[2] - 48);
    if (gnl.life.str[0] == '1')
        x =  my_getnbr(gnl.life.str);
    x = x - 1;
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

def_t check_life_three(def_t gnl, int i)
{
    if (gnl.skull[i].rect.left == 440) {
        gnl = check_life_5(gnl);
        return gnl;
    }
    if (gnl.skull[i].rect.left == 550) {
        gnl = check_life_6(gnl);
        return gnl;
    }
    return gnl;
}

def_t check_life_two(def_t gnl, int i)
{
    if (gnl.skull[i].rect.left == 0) {
        gnl = check_life_1(gnl);
        return gnl;
    }
    if (gnl.skull[i].rect.left == 110) {
        gnl = check_life_2(gnl);
        return gnl;
    }
    if (gnl.skull[i].rect.left == 220) {
        gnl = check_life_3(gnl);
        return gnl;
    }
    if (gnl.skull[i].rect.left == 330) {
        gnl = check_life_4(gnl);
        return gnl;
    }
    gnl = check_life_three(gnl, i);
    return gnl;
}

def_t check_life(def_t gnl)
{
    int i = 0;
    sfVector2f pos;

    while (i != 50) {
        pos = sfSprite_getPosition(gnl.skull[i].sprite);
        if (pos.x > 1925 && gnl.skull[i].pass == 0) {
            gnl = check_life_two(gnl, i);
            gnl.skull[i].pass = 1;
        }
        i++;
    }
    return gnl;
}