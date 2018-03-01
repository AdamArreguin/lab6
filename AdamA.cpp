#include "fonts.h"

void showName()
{
    static Rect r;
    r.bot = 835 - 20;
    r.left = 10;
    r.center = 0;
    ggprint8b(&r, 16, 0x00ff0000, "Adam Arreguin");
}

