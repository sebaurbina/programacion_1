#include <stdio.h>
#include <stdlib.h>

/*1. Ingresar 5 números y calcular su media*/
int main()
{
    int numero;
    int suma=0;
    int media;
    int i;

    for(i=0;i<5;i++){
        scanf("%d",&numero);
        suma = suma + numero;
    }

    media = suma / i;

    printf("La suma es:%d\n",suma);
    printf("La media es:%d",media);

    return 0;
}
