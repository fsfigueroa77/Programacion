#include <stdio.h>
int num1, num2, num3;
int leernum();
void numeromayor(int num1, int num2, int num3);

int main()
{
    printf("Programa para determina el mayor de tres numeros ingresados por teclado.\n");
    num1 = leernum();
    num2 = leernum();
    num3 = leernum();

    numeromayor(num1, num2, num3);

    return(0);
}

int leernum()
{
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    return(num);
}

void numeromayor(int num1, int num2, int num3)
{
    int mayor;
    
    if (num1 > num2)
        mayor = num1;
    else
        mayor = num2;

    if (mayor > num3)
        mayor = mayor;
    else
        mayor = num3;

    printf("EL numero mayor entre %d, %d y %d es %d.", num1, num2, num3, mayor);
}
