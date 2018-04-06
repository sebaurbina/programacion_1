#include <stdio.h>
#include <stdlib.h>

/*2. Escribir el programa necesario para calcular la suma de dos números.
Mostrar el resultado*/

int main()
{
    int num1;
    int num2;
    int resultado;

    printf("Ingrese el primer numero:");
    scanf("%d",&num1);

    printf("Ingrese el segundo numero:");
    scanf("%d",&num2);

    resultado = num1 + num2;

    printf("El resultado es:%d",resultado);

    return 0;
}
