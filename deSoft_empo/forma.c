#include "forma.h"

void forma_ctor(forma * f, int x, int y)
{
    f->x = x;
    f->y = y;
}

void forma_mv(forma *f, int in_x, int in_y)
{
    f->x += in_x;
    f->y += in_y;
}
