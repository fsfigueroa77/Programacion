#include <stdio.h>
#define pi 3.1415
int radio;
int leerradio();
void calculararea(float radio);
void calcularvolumen(float radio);

int main()
{
    printf("Programa para calcular Area y Volumen de la esfera de radio ingresado por el usuario.\n");
    int radio = leerradio();
    calculararea((float)radio);
    calcularvolumen((float)radio);

    return(0);
}

int leerradio()
{
    int input_radio;
    printf("Ingrese el valor del radio de la esfera: ");
    scanf("%d", &input_radio);
    return(input_radio);
}

void calculararea(float radio)
{
    float op_area = 4 * pi * radio * radio;
    printf("El valor del area de la esfera es: %.2f\n", op_area);
}

void calcularvolumen(float radio)
{
    float op_volumen = (4 * pi * radio * radio * radio) / 3;
    printf("El valor del volumen de la esfera es: %.2f", op_volumen);
}