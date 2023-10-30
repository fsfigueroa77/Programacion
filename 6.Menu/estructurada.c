#include <stdio.h>
#include <stdlib.h>
float num1, num2, suma, resta, multi, divi;
int eleccion;
float leernum();
int leer_eleccion();
float calc_suma(float num1, float num2);
float calc_resta(float num1, float num2);
float calc_multi(float num1, float num2);
float calc_divi(float num1, float num2);

int main()
{
    num1 = leernum();
    num2 = leernum();
    eleccion = leer_eleccion();
    suma = calc_suma(num1, num2);
    resta = calc_resta(num1, num2);
    multi = calc_multi(num1, num2);
    divi = calc_divi(num1, num2);

    switch (eleccion)
    {
        case 1:
            printf("El resultado de la suma es: %.0f\n", suma);
            break;
        case 2:
            printf("El resultado de la suma es: %.0f\n", resta);
            break;
        case 3:
            printf("El resultado de la suma es: %.0f\n", multi);
            break;
        case 4:
            printf("El resultado de la suma es: %.2f\n", divi);
            break;
        default:
            printf("Opcion incorrecta.");
            break;
    }

    system("pause");
    return(0);
}

float leernum()
{
    float num;
    printf("Ingrese un numero: ");
    scanf("%f", &num);
    return (num);
}

int leer_eleccion()
{
    int elec;
    printf("\t[1] Suma.\n\t[2] Resta.\n\t[3] Multiplicacion.\n\t[4] Division.\nQue operacion desea realizar: ");
    scanf("%d", &elec);
    return(elec);
}

float calc_suma(float num1, float num2)
{
    float op = num1 + num2;
    return(op);
}

float calc_resta(float num1, float num2)
{
    float op = num1 - num2;
    return(op);
}

float calc_multi(float num1, float num2)
{
    float op = num1 * num2;
    return(op);
}

float calc_divi(float num1, float num2)
{
    float op = num1 / num2;
    return(op);
}
