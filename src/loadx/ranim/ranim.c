#include "ranim.h"
#include <string.h>

void set_color(int r, int g, int b) {
    printf(COLOR_CODE, r, g, b);
}

void ranimln(const char *text) {
    const int length = strlen(text);

    while (1) {
        for (int hue = 0; hue < 360; hue += 5) {
            float h = hue / 60.f;
            int i = (int)(h);
            float f = h - i;
            float q = 1 - f;

            int r, g, b;
            switch (i % 6) {
                case 0: r = 255; g = (int)(f * 255); b = 0; break;
                case 1: r = (int)(q * 255); g = 255; b = 0; break;
                case 2: r = 0; g = 255; b = (int)(f * 255); break;
                case 3: r = 0; g = (int)(q * 255); b = 255; break;
                case 4: r = (int)(f * 255); g = 0; b = 255; break;
                case 5: r = 255; g = 0; b = (int)(q * 255); break;
            }

            set_color(r, g, b);
            printf("%s\r", text);
            usleep(10000);
        }
    }
}
