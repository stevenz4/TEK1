/*
** EPITECH PROJECT, 2019
** myhunter
** File description:
** display a duck
*/

#include "include/my.h"

void close_window(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
}

void manage_mouse_click(sfMouseButtonEvent event)
{
    my_printf("x:%d and ", event.x);
    my_printf("y:%d\n", event.y);
}

void time_manage(double sec)
{
    sfClock *clock;
    sfTime time;
    float seconds;

    clock = sfClock_create();
    for (float i = -1.0; i < sec;) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
        i = i + (seconds - i);
        if (seconds > 1.0 && i < sec)
            sfClock_restart(clock);
    }
    sfClock_destroy(clock);
}

int analyse_events(sfRenderWindow *window, sfEvent event)
{
    sfIntRect rect = {0, 0, 110, 110};
    st img;

    img.back = sfTexture_createFromFile("src/background.png", NULL);
    img.sback = sfSprite_create();
    img.duck = sfTexture_createFromFile("src/duck_sprite.png", NULL);
    img.sduck = sfSprite_create();
    img.font = sfFont_createFromFile("src/arial.ttf");
    img.text = sfText_create();
    sfText_setString(img.text, "KIll THEM");
    sfText_setFont(img.text, img.font);
    sfText_setCharacterSize(img.text, 50);
    sfText_setPosition(img.text, (sfVector2f) {27, 945});
    sfText_setColor(img.text, sfBlack);
    while_is_open(window, img, rect, event);
    destroying(window, img);
    return 0;
}

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;
    sfEvent event;
    sfSoundBuffer *soundbuffer;
    sfSound *sound;

    soundbuffer = sfSoundBuffer_createFromFile("src/Duck_hunt_sound.ogg");
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSound_play(sound);
    window = sfRenderWindow_create(mode, "MyHunter", sfDefaultStyle, NULL);
    if (!window)
        return FAILURE;
    sfRenderWindow_setFramerateLimit(window, 60);
    analyse_events(window, event);
    return 0;
}
