#include <stdio.h>

int main()
{
    printf("Programa para calcular el sueldo de un trabajador.\n");
    
    int horas;
    printf("Cuantas horas trabajo en el mes?: ");
    scanf("%d", &horas);

    float valor;
    printf("Cuanto es el valor por hora?: ");
    scanf("%f", &valor);

    int pregunta;
    printf("Tiene horas extra? Presione [1] para si o [0] para no: ");
    scanf("%d", &pregunta);

    int horas_extra;
    if (pregunta == 1)
    {
        printf("Cuantas horas extra trabajo en el mes?: ");
        scanf("%d", &horas_extra);

        float sueldo = (horas * valor) + (horas_extra * valor * 1.50);
        printf("El sueldo es: %.2f", sueldo);
    }
    else if (pregunta == 0)
    {
        float sueldo = (horas * valor);
        printf("El sueldo es: %.2f", sueldo);
    }
    else
    {
        printf("Respuesta no valida.");
    }
    return(0);
}