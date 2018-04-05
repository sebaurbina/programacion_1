#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int suma=0;
    int contador;

    for(i=1;i<=10;i++){
        suma=suma+i;
    }

    printf("La suma es: %d", suma);
    return 0;
}
