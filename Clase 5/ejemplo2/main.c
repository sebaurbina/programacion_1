#include <stdio.h>
#define CANT 5

void main(void)
{
    int v[5],pos,i;
    char seguir;

    for(i=0;i<5;i++)
    v[i]=0; // inicializamos vector

        do
        {
            printf("Ingrese posicion");
            scanf("%d",&pos);

            printf("Ingrese valor a cargar en el vector");
            scanf("%d",&v[pos]);

            printf("Desea ingresar otro dato S/N?");
            setbuf(stdin, NULL);
            scanf("%c",&seguir);
        }while(seguir=='s');

        for(i=0; i<CANT; i++){
            printf("\n%d", v[i]);
        }

}
