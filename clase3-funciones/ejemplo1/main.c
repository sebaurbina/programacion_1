#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b);

void main(void)
{
    int x;
    int y;
    int z;

    printf("Ingrese primer numero a suma: ");
    scanf("%d",&x);
    printf("Ingrese segundo numero a suma: ");
    scanf("%d",&y);
    z=suma(x,y);
    printf("La suma es %d",z);
}

int suma(int a, int b)
{
    int total;
    total=a+b;
    return total;
}
