#include <stdio.h>
#include <stdlib.h>

int var;

void carga(void);

void main(void)
{
    int x,z,y;

    var = 5;
    carga();
    printf("%d",var);
}

void carga(void)
{
    int var;
    var = 3;
}
