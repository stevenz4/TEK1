/*
** EPITECH PROJECT, 2020
** set
** File description:
** set
*/

#include "rpg.h"

rpg_t set(rpg_t rpg)
{
    rpg.window = sfRenderWindow_create((sfVideoMode) {1920, 1080, 32}
    , "The Legend of Bibas", sfFullscreen, NULL);
    sfRenderWindow_setMouseCursorVisible(rpg.window, false);
    sfRenderWindow_setFramerateLimit(rpg.window, 100);
    rpg = set_clock(rpg);
    rpg = set_sound(rpg);
    rpg = set_value(rpg);
    rpg = set_text(rpg);
    rpg = set_texture(rpg);
    rpg = set_dialogue(rpg);
    rpg.map = set_map(rpg.map);
    rpg = create_sprites_inventory(rpg);
    return (rpg);
}

rpg_t set_texture(rpg_t rpg)
{
    rpg.studio = set_texture2(rpg.studio,
    "assets/start_menu/studio.png");
    rpg.start_menu = set_texture2(rpg.start_menu,
    "assets/start_menu/start_game.png");
    rpg.start_menu2 = set_texture2(rpg.start_menu2,
    "assets/start_menu/start_menu.png");
    rpg.mouse = set_texture2(rpg.mouse,
    "assets/start_menu/mouse.png");
    rpg.c_select = set_texture2(rpg.c_select,
    "assets/start_menu/c_select.png");
    rpg.map.back = set_texture2(rpg.map.back,
    "assets/map.jpg");
    rpg.map.back2 = set_texture2(rpg.map.back2,
    "assets/map2.png");
    rpg.map.caracter = set_texture2(rpg.map.caracter,
    "assets/caracter.png");
    rpg = set_texture3(rpg);
    return (rpg);
}

rpg_t set_texture3(rpg_t rpg)
{
    rpg.intro.background = set_texture2(rpg.intro.background,
    "assets/start_menu/start_menu.png");
    rpg.intro.paysage = set_texture2(rpg.intro.paysage,
    "assets/intro/paysage_intro.png");
    rpg.intro.character = set_texture2(rpg.intro.character,
    "assets/intro/character2.png");
    rpg.intro.rect = set_texture2(rpg.intro.rect,
    "assets/intro/rectangle.png");
    rpg.intro.bulle = set_texture2(rpg.intro.bulle,
    "assets/intro/bulle.png");
    rpg.fgt.back = set_texture2(rpg.fgt.back,
    "assets/fight/forest.png");
    rpg.fgt.ui = set_texture2(rpg.fgt.ui,
    "assets/fight/ui.png");
    rpg.fgt.cursor = set_texture2(rpg.fgt.cursor,
    "assets/fight/cursor.png");
    rpg = set_texture4(rpg);
    return (rpg);
}

rpg_t set_texture4(rpg_t rpg)
{
    rpg.fgt.enemy = set_texture2(rpg.fgt.enemy,
    "assets/fight/nautilus.png");
    rpg.fgt.shield_icon = set_texture2(rpg.fgt.shield_icon,
    "assets/fight/shield_icon.png");
    rpg.fgt.poison_icon = set_texture2(rpg.fgt.poison_icon,
    "assets/fight/poison_icon.png");
    sfSprite_setTextureRect(
    rpg.intro.character.sprite, rpg.intro.character.rect);
    sfSprite_setPosition(rpg.fgt.shield_icon.sprite, (sfVector2f) {1260, 850});
    sfSprite_setPosition(rpg.fgt.poison_icon.sprite, (sfVector2f) {1630, 850});
    return (rpg);
}

texture_t set_texture2(texture_t tex, char * str)
{
    tex.texture = sfTexture_createFromFile(str, NULL);
    tex.sprite = sfSprite_create();
    sfSprite_setTexture(tex.sprite, tex.texture, sfTrue);
    return (tex);
}
