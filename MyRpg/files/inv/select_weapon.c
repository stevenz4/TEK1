/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** yeah
*/

#include "rpg.h"

rpg_t select_weapon_3(rpg_t rpg)
{
    if (rpg.inv.wep2 == 1) {
        if (rpg.inv.vmouse.x > 1000 && rpg.inv.vmouse.x < 1065 &&
        rpg.inv.vmouse.y > 330 && rpg.inv.vmouse.y < 655 && rpg.inv.inv == 1)
            rpg.inv.choose_l.rect.left = 400;
        else
            rpg.inv.choose_l.rect.left = 200;
    } else
        rpg.inv.choose_l.rect.left = 0;
    return (rpg);
}

rpg_t select_weapon_2(rpg_t rpg)
{
    if (rpg.inv.wep3 == 1) {
        if (rpg.inv.vmouse.x > 1110 && rpg.inv.vmouse.x < 1210 &&
        rpg.inv.vmouse.y > 430 && rpg.inv.vmouse.y < 585 && rpg.inv.inv == 1)
            rpg.inv.choose_a.rect.left = 400;
        else
            rpg.inv.choose_a.rect.left = 200;
    } else
        rpg.inv.choose_a.rect.left = 0;
    if (rpg.inv.wep4 == 1) {
        if (rpg.inv.vmouse.x > 1230 && rpg.inv.vmouse.x < 1340 &&
        rpg.inv.vmouse.y > 350 && rpg.inv.vmouse.y < 650 && rpg.inv.inv == 1)
            rpg.inv.choose_s.rect.left = 400;
        else
            rpg.inv.choose_s.rect.left = 200;
    } else
        rpg.inv.choose_s.rect.left = 0;
    return (rpg);
}

rpg_t select_weapon(rpg_t rpg)
{
    if (rpg.inv.vmouse.x > 810 && rpg.inv.vmouse.x < 840 &&
    rpg.inv.vmouse.y > 365 && rpg.inv.vmouse.y < 600 && rpg.inv.inv == 1)
        rpg.inv.choose_edb.rect.left = 150;
    else
        rpg.inv.choose_edb.rect.left = 0;
    if (rpg.inv.wep1 == 1) {
        if (rpg.inv.vmouse.x > 910 && rpg.inv.vmouse.x < 940 &&
        rpg.inv.vmouse.y > 350 && rpg.inv.vmouse.y < 600 && rpg.inv.inv == 1)
            rpg.inv.choose_el.rect.left = 300;
        else
            rpg.inv.choose_el.rect.left = 150;
    } else
        rpg.inv.choose_el.rect.left = 0;
    rpg = select_weapon_2(rpg);
    rpg = select_weapon_3(rpg);
    return (rpg);
}