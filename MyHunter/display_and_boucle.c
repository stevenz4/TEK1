/*
** EPITECH PROJECT, 2019
** branch
** File description:
** ramification
*/

#include "include/my.h"

void window_sprite_drawing(sfRenderWindow *window, st img, sfVector2f move)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, img.sback, NULL);
    sfRenderWindow_drawSprite(window, img.sduck, NULL);
    sfRenderWindow_drawText(window, img.text, NULL);
    sfRenderWindow_display(window);
    sfSprite_move(img.sduck, move);
}

void while_is_open(sfRenderWindow *window, st img, sfIntRect rec, sfEvent evt)
{
    sfVector2f move = {5, 0};

    while (sfRenderWindow_isOpen(window)) {
        time_manage(0.05);
        sfSprite_setTexture(img.sduck, img.duck, sfFalse);
        sfSprite_setTexture(img.sback, img.back, sfFalse);
        sfSprite_setTextureRect(img.sduck, rec);
        rec.left += 110;
        if (rec.left == 330)
            rec.left = 0;
        img.pos = sfSprite_getPosition(img.sduck);
        if (img.pos.x >= 1920)
            close_window(window);
        window_sprite_drawing(window, img, move);
        move.x += poll_event(window, evt, img);
    }
}

int poll_event(sfRenderWindow *window, sfEvent event, st img)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.mouseButton.type == sfEvtMouseButtonPressed) {
            if ((event.mouseButton.x < (img.pos.x + 110)
                && event.mouseButton.x > img.pos.x)
                && (event.mouseButton.y < (img.pos.y + 110)
                    && event.mouseButton.y > img.pos.y)) {
                manage_mouse_click(event.mouseButton);
                img.movexy.y = rand() % 820;
                sfSprite_setPosition(img.sduck, img.movexy);
                my_printf("Nice shot !!!\n");
                return 2;
            }
        }
        if (event.type == sfEvtClosed)
            close_window(window);
    }
}

void destroying(sfRenderWindow *window, st img)
{
    sfRenderWindow_destroy(window);
    sfTexture_destroy(img.duck);
    sfSprite_destroy(img.sduck);
    sfTexture_destroy(img.back);
    sfSprite_destroy(img.sback);
    sfText_destroy(img.text);
}
