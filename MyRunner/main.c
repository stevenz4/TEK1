/*
** EPITECH PROJECT, 2019
** main
** File description:
** main function
*/

#include "include/my.h"

void destroying_window(para_move pm, para_obj po, obj player)
{
    sfTexture_destroy(po.back.texture);
    sfTexture_destroy(po.pillar.texture);
    sfTexture_destroy(po.shadows.texture);
    sfTexture_destroy(po.buildings.texture);
    sfTexture_destroy(player.texture);
    sfSprite_destroy(po.back.sprite);
    sfSprite_destroy(po.pillar.sprite);
    sfSprite_destroy(po.shadows.sprite);
    sfSprite_destroy(po.buildings.sprite);
    sfSprite_destroy(player.sprite);
    sfSound_destroy(pm.sound);
    sfSoundBuffer_destroy(pm.soundbuffer);
    sfRenderWindow_destroy(pm.window);
}

void init_window(sfEvent event, para_move pm)
{
    para_obj po;
    obj player;

    po.back.texture = sfTexture_createFromFile("src/background.png", NULL);
    po.back.sprite = sfSprite_create();
    po.pillar.texture = sfTexture_createFromFile("src/pillar.png", NULL);
    po.pillar.sprite = sfSprite_create();
    po.shadows.texture = sfTexture_createFromFile("src/shadows.png", NULL);
    po.shadows.sprite = sfSprite_create();
    po.buildings.texture = sfTexture_createFromFile("src/buildings.png", NULL);
    po.buildings.sprite = sfSprite_create();
    player.texture = sfTexture_createFromFile("src/megaman.png", NULL);
    player.sprite = sfSprite_create();
    pm.spikes.texture = sfTexture_createFromFile("src/spikes.png", NULL);
    pm.spikes.sprite = sfSprite_create();
    while_is_open(po, pm, event, player);
    destroying_window(pm, po, player);
}

para_move spikes_values(para_move pm)
{
    pm.spikes_pos.x = 1300;
    pm.spikes_pos.y = 650;
    pm.spikes_move.x = -8;
    pm.spikes_move.y = 0;
    return pm;
}

para_move put_move_values(para_move pm)
{
    pm.move.left = 0;
    pm.move.top = 0;
    pm.move.width = 1280;
    pm.move.height = 720;
    pm.move2.left = 0;
    pm.move2.top = 0;
    pm.move2.width = 1280;
    pm.move2.height = 720;
    pm.move3.left = 0;
    pm.move3.top = 0;
    pm.move3.width = 1280;
    pm.move3.height = 720;
    pm.move4.left = 0;
    pm.move4.top = 0;
    pm.move4.width = 1280;
    pm.move4.height = 720;
    return pm;
}

int main(int ac, char **av)
{
    sfVideoMode mode = {1280, 720, 32};
    sfEvent event;
    para_move pm;

    pm.soundbuffer = sfSoundBuffer_createFromFile("src/sledge.wav");
    pm.sound = sfSound_create();
    sfSound_setBuffer(pm.sound, pm.soundbuffer);
    sfSound_play(pm.sound);
    if (ac == 1 || ac > 2) {
        my_putstr("There isn't map or there are too much arguments\n");
        return FAILURE;
    }
    pm.window = sfRenderWindow_create(mode, "MyRunner", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(pm.window, 120);
    pm = put_move_values(pm);
    init_window(event, pm);
    return 0;
}
