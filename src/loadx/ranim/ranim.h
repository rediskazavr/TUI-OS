#ifndef COLOR_ANIMATION_H
#define COLOR_ANIMATION_H

#include <stdio.h>
#include <unistd.h>

#define COLOR_CODE "\x1b[38;2;%d;%d;%dm"

void set_color(int r, int g, int b);
void ranimln(const char *text);

#endif
