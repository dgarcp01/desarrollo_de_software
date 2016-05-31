#include <stdio.h>
#include "forma.h"

int main(void)
{
  forma f1;
  forma_ctor(&f1,0,0);

    while (1)
    {
        forma_mv(&f1,1,1);
        printf("f1 en %d , %d \n", f1.x,f1.y);

    }

    return 0;
}

