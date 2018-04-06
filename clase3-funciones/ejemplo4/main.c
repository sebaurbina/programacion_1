#include <stdio.h>
#include <stdlib.h>

void muestra(int x, int y);
void main(void)
{
    int x, y;

    printf("Ingrese primer numero entero");
    scanf("%d",&x);
    printf("Ingrese segundo numero entero");
    scanf("%d",&y);
    muestra(x,y);
    printf("\n-----valores dentro de la funcion-----");
    printf("\nx vale %d \ny vale %d",x,y);
}

void muestra(int x, int y)
{
    x=y;
    printf("\n-----valores dentro de la funcion-----");
    printf("\nx vale %d \ny vale %d",x,y);
}
