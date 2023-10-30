#include <stdio.h>
int horas, pregunta;
float valor, sueldo;
int leerhoras();
float leervalor();
int leerpregunta();
void calcular_sueldo(int horas, float valor, int pregunta);

int main ()
{
    printf("Programa para calcular el sueldo de un trabajador.\n");
    horas = leerhoras();
    valor = leervalor();
    pregunta = leerpregunta();
    calcular_sueldo(horas, valor, pregunta);        
    return(0);
}

int leerhoras()
{
    int op_horas;
    printf("Cuantas horas trabajo en el mes?: ");
    scanf("%d", &op_horas);
    return(op_horas);
}

float leervalor()
{
    float op_valor;
    printf("Cuanto es el valor por hora?: ");
    scanf("%f", &op_valor);
    return(op_valor);
}

int leerpregunta()
{
    int op_pregunta;
    printf("Tiene horas extra? Presione [1] para si o [0] para no: ");
    scanf("%d", &op_pregunta);
    return(op_pregunta);
}

void calcular_sueldo(int horas, float valor, int pregunta)
{
    int horas_extra;
    if (pregunta)
    {
        printf("Cuantas horas extra trabajo en el mes?: ");
        scanf("%d", &horas_extra);
        float sueldo = (horas * valor) + (horas_extra * valor * 1.50);
        printf("El sueldo es: %.2f", sueldo);
    }
    else
    {
        float sueldo = (horas * valor);
        printf("El sueldo es: %.2f", sueldo);
    }
}