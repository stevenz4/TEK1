/*
** EPITECH PROJECT, 2020
** loop
** File description:
** loop
*/

#include "rpg.h"

rpg_t keypressed(rpg_t rpg)
{
    rpg.map.key = 1;
    rpg.map.itb_caracter.x = rpg.map.caracter_pos.x + 60;
    rpg.map.itb_caracter.y = rpg.map.caracter_pos.y + 200;
    if (rpg.map.itb_map[rpg.map.itb_caracter.y / 50]
    [rpg.map.itb_caracter.x  / 50] == '2') {
        rpg.fight = 1;
        sfMusic_stop(rpg.audio.music);
        sfSound_play(rpg.fgt.music.sound);
        rpg = initialisation(rpg);
        rpg.map.itb_map[rpg.map.itb_caracter.y / 50]
        [rpg.map.itb_caracter.x  / 50] = '0';
    } if (rpg.map.itb_map[rpg.map.itb_caracter.y / 50]
    [(rpg.map.itb_caracter.x - 5) / 50]
    != '1' && rpg.map.caracter_pos.x > -60 && rpg.event.key.code == sfKeyLeft) {
        rpg.map.pad.left = 1;
        rpg.map.caracter_pos.x -= 5;
    } else
        rpg.map.pad.left = 0;
    rpg = keypressed2(rpg);
    return (rpg);
}

rpg_t keypressed2(rpg_t rpg)
{
    if (rpg.map.itb_map[rpg.map.itb_caracter.y / 50]
    [(rpg.map.itb_caracter.x + 5) / 50]
    != '1' && rpg.map.caracter_pos.x < 1800 &&
    rpg.event.key.code == sfKeyRight) {
        rpg.map.pad.right = 1;
        rpg.map.caracter_pos.x += 5;
    }
    else
        rpg.map.pad.right = 0;
    if (rpg.map.itb_map[(rpg.map.itb_caracter.y - 5) / 50]
    [rpg.map.itb_caracter.x / 50]
    != '1' && rpg.map.caracter_pos.y > -115 && rpg.event.key.code == sfKeyUp) {
        rpg.map.pad.up = 1;
        rpg.map.caracter_pos.y -= 5;
    }
    else
        rpg.map.pad.up = 0;
    rpg = keypressed3(rpg);
    return (rpg);
}

rpg_t keypressed3(rpg_t rpg)
{
    if (rpg.map.itb_map[(rpg.map.itb_caracter.y + 5) / 50]
    [rpg.map.itb_caracter.x / 50]
    != '1' && rpg.map.caracter_pos.y < 865 && rpg.event.key.code == sfKeyDown) {
        rpg.map.pad.down = 1;
        rpg.map.caracter_pos.y += 5;
    }
    else
        rpg.map.pad.down = 0;
    return (rpg);
}