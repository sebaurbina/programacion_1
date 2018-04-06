#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    int i;
    int edad[CANT];
    int legajo[CANT];
    float sueldo[CANT];

    for(i=0; i<CANT; i++)
    {
        printf("Ingrese la edad del legajo %d: ",i+1);
        scanf("%d",&edad[i]);
        printf("Ingrese el sueldo del legajo %d: ",i+1);
        scanf("%f",&sueldo[i]);
    }

    for(i=0; i<CANT; i++)
    {
        printf("\n %d",edad[i]);
        printf("\n %d",legajo[i]);
        printf("\n %.2f",sueldo[i]);
    }

    return 0;
}
