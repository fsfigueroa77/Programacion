#include <stdio.h>
int num1, num2;
int leernum();
void calc_suma(int num1, int num2);
void calc_resta(int num1, int num2);
void calc_mult(int num1, int num2);
void calc_div(float num1, float num2);

int main()
{
    printf("Programa para calcular la suma, resta, multiplicacion y division entre dos numeros.\n");
    int num1 = leernum();
    int num2 = leernum();
    calc_suma(num1, num2);
    calc_resta(num1, num2);
    calc_mult(num1, num2);
    calc_div((float)num1, (float)num2);
    return (0);
}

int leernum()
{
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    return(num);
}

void calc_suma(int num1, int num2)
{
    int op_suma = num1 + num2;
    printf("El valor de la suma entre %d y %d es %d.\n", num1, num2, op_suma);
}

void calc_resta(int num1, int num2)
{
    int op_resta = num1 - num2;
    printf("El valor de la resta entre %d y %d es %d.\n", num1, num2, op_resta);
}

void calc_mult(int num1, int num2)
{
    int op_mult = num1 * num2;
    printf("El valor de la multiplicacion entre %d y %d es %d.\n", num1, num2, op_mult);
}

void calc_div(float num1, float num2)
{
    float op_div = num1 / num2;
    printf("El valor de la division entre %.0f y %.0f es %.2f.\n", num1, num2, op_div);
}
