/*
** EPITECH PROJECT, 2020
** init_rules
** File description:
** init_rules
*/

#include "my.h"

def_t init_rules_3(def_t gnl)
{
    gnl.rules[0].str = "Rules :";
    gnl.rules[1].str = "- This game is a tower defense, protect your kingdom";
    gnl.rules[2].str = "- You need to put differents towers";
    gnl.rules[3].str = "- You have two different types of towers";
    gnl.rules[4].str = "- You have a bank which will generate more money";
    gnl.rules[5].str = "- You can upgrade some towers";
    gnl.rules[6].str = "- Buy towers by clicking on the square on the map";
    gnl.rules[7].str = "- You just have 100 life points, watch out to skulls";
    gnl.rules[8].str = "Good luck my friend";
    sfText_setCharacterSize(gnl.rules[0].text, 90);
    sfText_setCharacterSize(gnl.rules[1].text, 50);
    sfText_setCharacterSize(gnl.rules[2].text, 50);
    sfText_setCharacterSize(gnl.rules[3].text, 50);
    sfText_setCharacterSize(gnl.rules[4].text, 50);
    sfText_setCharacterSize(gnl.rules[5].text, 50);
    sfText_setCharacterSize(gnl.rules[6].text, 50);
    sfText_setCharacterSize(gnl.rules[7].text, 50);
    sfText_setCharacterSize(gnl.rules[8].text, 100);
    return gnl;
}

def_t init_rules_2(def_t gnl)
{
    int i = 0;

    while (i != 10) {
        gnl.rules[i].font = sfFont_createFromFile("assets/land.otf");
        gnl.rules[i].text = sfText_create();
        i++;
    }
    return gnl;
}

def_t init_rules(def_t gnl)
{
    gnl.back.texture = sfTexture_createFromFile("assets/background.jpg", NULL);
    gnl.back.sprite = sfSprite_create();
    gnl = init_rules_2(gnl);
    gnl = init_rules_3(gnl);
    gnl.music1.soundbuffer = sfSoundBuffer_createFromFile("assets/music.ogg");
    gnl.music1.sound = sfSound_create();
    sfSound_setBuffer(gnl.music1.sound, gnl.music1.soundbuffer);
    sfSound_play(gnl.music1.sound);
    sfSound_setLoop(gnl.music1.sound, sfTrue);
    return gnl;
}
