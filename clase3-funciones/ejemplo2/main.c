#include <stdio.h>
#include <stdlib.h>

int var;

void carga(void);

void main(void)
{
    int x;
    int y;
    int z;

    var = 5;
    carga();
    printf("%d",var);
}

void carga(void)
{
    var = 3;
}
