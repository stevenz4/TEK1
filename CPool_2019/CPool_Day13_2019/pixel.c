/*
** EPITECH PROJECT, 2019
** pixel
** File description:
** pixel
*/

#include <stdlib.h>
#include <SFML/Config.h>

typedef struct framebuffer_create {
    int width;
    int height;
    int bitsPerPixel;
    struct framebuffer_create *next;
} framebuffer_t;

framebuffer_t *framebuffer_create(unsigned int witdh, unsigned int height);
{
    return 0;
}
int main(void)
{
    int width;
    int height;
    int bitsPerPixels;
    sFUint8 *pixel;

    width = 500;
    height = 500;
    bitsPerPixel = 32;
    pixels = malloc(width * height * bitsPerPixels / 8);
    pixels[0]  255;
    pixels[1]  255;
    pixels[2]  255;
    pixels[3]  255;
    display_framebuffer(pixels, width, height);
