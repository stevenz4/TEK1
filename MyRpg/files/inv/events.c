/*
** EPITECH PROJECT, 2020
** event
** File description:
** yeah
*/

#include "rpg.h"

rpg_t move_caracter_2(rpg_t rpg, int x_click, int y_click)
{
    if (x_click > 720 && x_click < 750 &&
        y_click > 475 && y_click < 510 && rpg.inv.inv == 1) {
            if (rpg.inv.caracter.rect.top == 0) {
                rpg.inv.caracter.rect.top = 1008;
                rpg.inv.edb.rect.top = 1008;
                rpg.inv.ache.rect.top = 1008;
                rpg.inv.elongue.rect.top = 1008;
                rpg.inv.gilet.rect.top = 1008;
                rpg.inv.lance.rect.top = 1008;
                rpg.inv.shur.rect.top = 1008;
            } else {
                rpg.inv.caracter.rect.top -= 336;
                rpg.inv.edb.rect.top -= 336;
                rpg.inv.ache.rect.top -= 336;
                rpg.inv.elongue.rect.top -= 336;
                rpg.inv.gilet.rect.top -= 336;
                rpg.inv.lance.rect.top -= 336;
                rpg.inv.shur.rect.top -= 336;
                }
        } return (rpg);
}

rpg_t move_caracter(rpg_t rpg, int x_click, int y_click)
{
    if (x_click > 560 && x_click < 590 &&
    y_click > 475 && y_click < 510 && rpg.inv.inv == 1) {
        if (rpg.inv.caracter.rect.top == 1008) {
            rpg.inv.caracter.rect.top = 0;
            rpg.inv.edb.rect.top = 0;
            rpg.inv.ache.rect.top = 0;
            rpg.inv.elongue.rect.top = 0;
            rpg.inv.gilet.rect.top = 0;
            rpg.inv.lance.rect.top = 0;
            rpg.inv.shur.rect.top = 0;
        } else {
            rpg.inv.caracter.rect.top += 336;
            rpg.inv.edb.rect.top += 336;
            rpg.inv.ache.rect.top += 336;
            rpg.inv.elongue.rect.top += 336;
            rpg.inv.gilet.rect.top += 336;
            rpg.inv.lance.rect.top += 336;
            rpg.inv.shur.rect.top += 336;
        }
    } rpg = move_caracter_2(rpg, x_click, y_click);
    return (rpg);
}

rpg_t event_click(rpg_t rpg)
{
    int x_click = rpg.inv.click.mouseButton.x;
    int y_click = rpg.inv.click.mouseButton.y;
    rpg = move_caracter(rpg, x_click, y_click);
    rpg = event_selec_weap(rpg, x_click, y_click);
    return (rpg);
}

rpg_t events(sfRenderWindow *window, rpg_t rpg)
{
    if (rpg.inv.click.type == sfEvtKeyPressed) {
        if (rpg.inv.click.key.code == sfKeyI) {
            rpg.inv.disp_inv = 1;
            rpg.inv.inv = 1;
        }
        else if (rpg.inv.click.key.code == sfKeyEscape) {
            rpg.inv.disp_inv = 0;
            rpg.inv.inv = 0;
        }
    }
    if (rpg.inv.click.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (rpg.inv.click.type = sfEvtMouseButtonReleased)
        rpg = event_click(rpg);
    return (rpg);
}