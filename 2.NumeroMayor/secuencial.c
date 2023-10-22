#include <stdio.h>

int main()
{
    int num1, num2, num3, mayor;
    
    printf("Programa para determina el mayor de tres numeros ingresados por teclado.\n");
    
    printf("Ingrese 3 numeros: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2)
        mayor = num1;
    else
        mayor = num2;

    if (mayor > num3)
        mayor = mayor;
    else
        mayor = num3;

    printf("EL numero mayor entre %d, %d y %d es %d.", num1, num2, num3, mayor);

    return(0);
}
